const precedence = {
    curly: 1,
    assign: 2,
    primary: 3,
    or: 4,
    and: 5,
    comparative: 6,
    bitwise: 7,
    bitshift: 8,
    addition: 9,
    multiply: 10,
    prefix: 11,
};

function numericWithSeparator(regex) {
    return seq(regex, repeat(seq(optional("_"), regex)));
}

module.exports = grammar({
    name: "zig",

    externals: (_) => [],
    inline: (_) => [],
    extras: ($) => [/\s/, $.line_comment],
    // TODO: Investigate these - can we fix them?
    conflicts: ($) => [],

    rules: {
        root: $ => seq(optional($.container_doc_comment), $.container_members),
        
        // *** Top level ***
        container_members: $ => seq($.container_declarations, repeat(seq($.container_field, ",")), choice($.container_field, $.container_declarations)),
        container_declarations: $ => repeat(
            seq($.test_decl),
            seq($.comptime_decl),
            seq(optional(doc_comment), optional("pub"), $.decl)
        ),

        test_decl: $ => seq("test", optional(field("name", choice($.string_literal_single, $.identifier))), block),

        comptime_decl: $ => seq("comptime", $.block),

        decl: $ => choice(
            seq(optional(choice("export", seq("extern", optional($.string_literal_single)), choice("inline", "noinline"))), $.fn_proto, choice(";", $.block)),
            seq(optional(choice("export" / seq("extern", optional($.string_literal_single))), optional("threadlocal"), $.var_decl)),
            seq("usingnamespace", $.expr, ";")
        ),

        fn_proto: $ => seq("fn", optional($.identifier), "(", $.param_decl_list, ")", optional($.byte_align), optional($.addr_space), optional($.link_section), optional($.call_conv), optional("!"), $.type_expr),
        var_decl: $ => seq(choice("const", "var"), $.identifier, optional(seq(":", $.type_expr)), optional($.byte_align), optional($.addr_space), optional($.link_section), optional(seq("=", $.expr)), ";"),
        container_field: $ => choice(
            seq(optional($.doc_comment), optional("comptime"), $.identifier, optional(":", $.type_expr), optional($.byte_align), optional(seq("=", $.expr))),
            seq(optional($.doc_comment), optional("comptime"), optional($.identifier, ":"), $.type_expr, optional($.byte_align), optional(seq("=", $.expr))),
        ),

        // *** Block Level ***
        statement: $ => choice(
            seq(optional("comptime"), $.var_decl),
            seq("comptime", $.block_expr_statement),
            seq("nosuspend", $.block_expr_statement),
            seq("suspend", $.block_expr_statement),
            seq("defer", $.block_expr_statement),
            seq("errdefer", optional($.payload), $.block_expr_statement),
            seq($.if_statement),
            seq($.labeled_statement),
            seq($.switch_expr),
            seq($.assign_expr, ";"),
        ),

        if_statement: $ => choice(
            seq($.if_prefix, $.block_expr, optional(seq("else", optional($.payload), $.statement))), 
            seq($.if_prefix, $.assign_expr, choice(";", seq("else", optional($.payload), $.statement)))
        ),

        labeled_statement: $ => seq(optional($.block_label), choice($.block, $.loop_statement)),
        loop_statement: $ => seq(optional("inline"), choice($.for_statement, $.while_statement)),

        for_statement: $ => choice(
            seq($.for_prefix, $.block_expr, optional(seq("else", $.statement))),
            seq($.for_prefix, $.assign_expr, seq(choice($.semicolon, "else"), $statement)),
        ),

        while_statement: $ => choice(
            seq($.while_prefix, $.block_expr, optional(seq("else", optional($.payload), $.statement))),
            seq($.while_prefix, $.assign_expr, seq(choice(";", "else"), optional($.payload), $.statement)),
        ),

        block_expr_statement: $ => choice(
            $.block_expr,
            seq($.assign_expr, ";"),
        ),

        block_expr: $ => seq(optional($.block_label), $.block),

        // *** Expression Level ***

        assign_expr: $ => seq($.expr, optional(seq($.assign_op, $.expr))),

        expr: $ => $.bool_or_expr,

        bool_or_expr: $ => seq($.bool_and_expr, repeat(seq("or", $.bool_and_expr))),

        bool_and_expr: $ => seq($.compare_expr, repeat(seq("and", $.compare_expr))),

        compare_expr: $ => seq($.bitwise_expr, optional(seq($.compare_op, $.bitwise_expr))),

        bitwise_expr: $ => seq($.bit_shift_expr, repeat(seq($.bitwise_op, $.bit_shift_expr))),

        bit_shift_expr: $ => seq($.addition_expr, repeat(seq($.bit_shift_op, $.addition_expr))),

        addition_expr: $ => seq($.multiply_expr, repeat(seq($.addition_op, $.multiply_expr))),

        multiply_expr: $ => seq($.prefix_expr, repeat(seq($.multiply_op, $.prefix_expr))),

        prefix_expr: $ => seq(repeat($.prefix_op), $.primary_expr),

        primary_expr: $ => choice(
            $.asm_expr,
            $.if_expr,
            seq("break", optional($.break_label), optional($.expr)),
            seq("comptime", $.expr),
            seq("nosuspend", $.expr),
            seq("continue", optional($.break_label)),
            seq("resume", $.expr),
            seq("return", optional($.expr)),
            seq(optional($.block_label), $.loop_expr),
            block,
            curly_suffix_expr,
        ),

        if_expr: $ => seq($.if_prefix, $.expr, optional(seq("else", optional($.payload), $.expr))),

        block: $ => seq($.lbrace, repeat($.statement), $.rbrace),

        loop_expr: $ => seq(optional("inline"), choice($.for_expr, $.while_expr)),

        for_expr: $ => seq($.for_prefix, $.expr, optional(seq("else", $.expr))),

        while_expr: $ => seq($.while_prefix, $.expr, optional(seq("else", optional($.payload), $.expr))),

        curly_suffix_expr: $ => seq($.type_expr, optional($.init_list)),

        init_list: $ => choice(
            seq("{", $.field_init, repeat(seq(",", $.field_init)), optional(","), "}"),
            seq("{", $.expr, repeat(seq(",", $.expr)), optional(","), "}"),
            seq("{", "}"),
        ),

        type_expr: $ => seq(repeat($.prefix_type_op), $.error_union_expr),

        error_union_expr: _ => seq(suffix_expr, optional(seq(exclamationmark, type_expr))),

        suffix_expr: $ => choice(
            seq("async", $.primary_type_expr, repeat($.suffix_op), $.fn_call_arguments),
            seq($.primary_type_expr, repeat(choice($.suffix_op, $.fn_call_arguments))),
        ),

        primary_type_expr: $ => choice(
            seq($.builtinidentifier, $.fn_call_arguments),
            $.char_literal,
            $.container_decl,
            seq($.dot, $.identifier),
            seq($.dot, $.init_list),
            $.error_set_decl,
            $.float,
            $.fn_proto,
            $.grouped_expr,
            $.labeled_type_expr,
            $.identifier,
            $.if_type_expr,
            $.integer,
            seq("comptime", $.type_expr),
            seq("error", ".", $.identifier),
            "anyframe",
            "unreachable",
            $.stringliteral,
            $.switch_expr,
        ),

        container_decl: $ => seq(optional(choice("extern", "packed")), $.container_decl_auto),

        error_set_decl: $ => seq("error", "(", $.identifier_list, $.rbrace),

        grouped_expr: $ => seq("(", $.expr, ")"),

        if_type_expr: $ => seq($.if_prefix, $.type_expr, optional(seq("else", optional(payload), type_expr))),

        labeled_type_expr: $ => choice(
            seq($.block_label, $.block),
            seq(optional($.block_label), $.loop_type_expr),
        ),

        loop_type_expr: $ => seq(optional("inline"), choice($.for_type_expr, $.while_type_expr)),

        for_type_expr: $ => seq($.for_prefix, $.type_expr, optional(seq("else", $.type_expr))),

        while_type_expr: $ => seq($.while_prefix, $.type_expr, optional(seq("else", optional($.payload), $.type_expr))),

        switch_expr: $ => seq("switch", "(", $.expr, ")", "{", $.switch_prong_list, "}"),

        // *** Assembly ***
        asm_expr: $ => seq("asm", optional("volatile"), "(", $.expr, optional($.asm_output), ")"),

        asm_output: $ => seq(":", $.asm_output_list, optional($.asm_input)),

        asm_output_item: $ => seq("[", $.identifier, "]", $.stringliteral, "(", seq("->", choice($.type_expr, $.identifier)), ")"),

        asm_input: $ => seq(":", $.asm_input_list, optional($.asm_clobbers)),

        asm_input_item: $ => seq("[", $.identifier, "]", $.stringliteral, "(", $.expr, ")"),

        asm_clobbers: $ => seq(":", $.string_list),

        // *** Helper grammar ***
        break_label: $ => seq(":", $.identifier),

        block_label: $ => seq($.identifier, ":"),

        field_init: $ => seq(".", $.identifier, "=", $.expr),

        while_continue_expr: $ => seq(":", "(", $.assign_expr, ")"),

        link_section: $ => seq("linksection", "(", $.expr, ")"),

        addr_space: $ => seq("addrspace", "(", $.expr, ")"),

        // Fn specific
        call_conv: $ => seq("callconv", "(", $.expr, ")"),

        param_decl: $ => choice(
            seq(optional($.doc_comment), optional(choice("noalias" / "comptime")), optional(seq($.identifier, ":")), $.param_type),
            "...",
        ),

        param_type: $ => choice(
            "anytype",
            $.type_expr,
        ),

        // Control flow prefixes        
        if_prefix: $ => seq(
            "if", 
            "(", 
            $.expr, 
            ")", 
            optional($.ptr_payload)
        ),

        while_prefix: $ => seq(
            "while", 
            "(", 
            $.expr, 
            ")", 
            optional($.ptr_payload), 
            optional($.while_continue_expr)
        ),  

        for_prefix: $ => seq(
            "for", 
            "(", 
            $.for_arguments_list, 
            ")", 
            $.ptr_list_payload
        ),

        // Payloads
        payload: $ => seq("|", $.identifier, "|"),

        ptr_payload: $ => seq("|", optional("*"), $.identifier, "|"),  

        ptr_index_payload: $ => seq("|", optional("*"), $.identifier, optional(seq(",", $.identifier)), "|"),

        ptr_list_payload: $ => seq("|", optional("*"), $.identifier, repeat(seq(",", optional("*"), $.identifier)), optional(","), "|"),

        // Switch specific
        switch_prong: $ => seq(
            optional("inline"), 
            "switch", 
            $.switch_case, 
            "=>", 
            optional($.ptr_index_payload), 
            $.assign_expr,
        ),

        switch_case: $ => choice(
            seq($.switch_item, repeat(",", $.switch_item), optional(",")), 
            "else"
        ),

        switch_item: $ => seq($.expr, optional(seq("...", $.expr))),

        // For specific
        for_arguments_list: $ => seq(
            $.for_item, 
            repeat(seq(",", $.for_item)), 
            optional(",")
        ),  

        for_item: $ => seq(
            $.expr, 
            optional(seq("..", optional($.expr)))
        ),

        // Operators
        assign_op: $ => choice(
            "*=",
            "*|=",
            "/=",
            "%=",
            "+=",
            "+|=",
            "-=",
            "-|=",
            "<<=",
            "<<|=",
            ">>=",
            "&=",
            "^=",
            "|=",
            "*%=",
            "+%=",
            "-%=",
            "=",
        ),

        compare_op: $ => choice(
            "==",
            "!=",
            ">",
            "<",
            ">=",
            "<=",
        ),

        bitwise_op: $ => choice(
            "&",
            "^",
            "|",
            "orelse",
            seq("catch", optional(payload)),
        ),

        bit_shift_op: $ => choice(
            "<<",
            ">>",
            "<<|"
        ),

        addition_op: $ => choice(
            "+",
            "-",
            "++",
            "+%",
            "-%",
            "+|",
            "-|",
        ),

        multiply_op: $ => choice(
            "||",
            "*",
            "/",
            "%",
            "**",
            "*%",
            "*|",
        ),

        prefix_op: $ => choice(
            "!",
            "-",
            "~",
            "-%",
            "&",
            "try",
            "await",
        ),

        prefix_type_op: $ => choice(
            "?",
            seq("anyframe", "->"),
            seq($.slice_type_start, repeat(choice($.byte_align, $.addr_space, "const", "volatile", "allowzero"))),
            seq($.ptr_type_start, repeat(choice($.addr_space, seq($.keyword_align, "(", $.expr, optional(seq(":", $.expr, ":", $.expr)), ")"), "const", "volatile", "allowzero"))),
            $.array_type_start,
        ),

        suffix_op: $ => choice(
            seq("[", $.expr, optional(seq("..", optional(seq(optional($.expr), optional(":", $.expr))))), "]"),
            seq(".", $.identifier),
            ".*",
            ".?",
        ),

        fn_call_arguments: $ => seq("(", $.expr_list, ")"),

        // Ptr specific
        slice_type_start: $ => seq("[", optional(seq(":", expr)), "]"),

        ptr_type_start: $ => seq(
            "*",
            "**",
            seq("[", "*", optional(choice("c", seq(":", $.expr))), "]"),
        ),

        array_type_start: $ => seq("[", $.expr, optional(seq(":", $.expr)), "]"),

        // ContainerDecl specific
        container_decl_auto: $ => seq($.container_decl_type, "[", optional($.container_doc_comment), $.container_members, "]"),

        container_decl_type: $ => choice(
            seq("struct", optional(seq("(", $.expr, ")"))),
            "opaque",
            seq("enum", optional(seq("(", $.expr, ")"))),
            seq("union", optional(seq("(", choice(seq("enum", optional(seq("(", $.expr, ")"))), expr), ")"))),
        ),

        // Alignment
        byte_align: $ => seq("align", "(", $.expr, ")"),

        // Lists
        identifier_list: $ => seq(repeat(seq(optional($.doc_comment), $.identifier, ",")), optional(seq(optional(doc_comment), $.identifier))),

        switch_prong_list: $ => seq(repeat(seq($.switch_prong, ",")), optional($.switch_prong)),

        asm_output_list: $ => seq(repeat(seq($.asm_output_item, ",")), optional($.asm_output_item)),

        asm_input_list: $ => seq(repeat(seq($.asm_input_item, ",")), optional($.asm_input_item)),

        string_list: $ => seq(repeat(seq($.stringliteral, ",")), optional($.stringliteral)),

        param_decl_list: $ => seq(repeat(seq($.param_decl, ",")), optional($.param_decl)),

        expr_list: $ => seq(repeat(seq($.expr, $.comma)), optional($.expr)),
    }
});
