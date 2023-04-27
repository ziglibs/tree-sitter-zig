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

const container_declarations = $ => repeat(choice(
    seq($.test_decl),
    seq($.comptime_decl),
    seq(optional($.doc_comment), optional("pub"), $.decl)
));

const container_members = $ => seq(container_declarations($), repeat(seq($.container_field, ",")), choice($.container_field, container_declarations($)));

// Lists

const identifier_list = $ => seq(repeat(seq(optional($.doc_comment), $.identifier, ",")), optional(seq(optional($.doc_comment), $.identifier)));

const switch_prong_list = $ => seq(repeat(seq($.switch_prong, ",")), optional($.switch_prong));

const asm_output_list = $ => seq(repeat(seq($.asm_output_item, ",")), optional($.asm_output_item));

const asm_input_list = $ => seq(repeat(seq($.asm_input_item, ",")), optional($.asm_input_item));

const string_list = $ => seq(repeat(seq($.string_literal, ",")), optional($.string_literal));

const param_decl_list = $ => seq(repeat(seq($.param_decl, ",")), optional($.param_decl));

const expr_list = $ => seq(repeat(seq($.expr, ",")), optional($.expr));

module.exports = grammar({
    name: "zig",

    externals: (_) => [],
    inline: (_) => [],
    extras: ($) => [/\s/, $.line_comment],
    // TODO: Investigate these - can we fix them?
    conflicts: ($) => [[$.root], [$.container_decl_auto], [$.switch_case], [$.loop_expr], [$.loop_type_expr]],

    rules: {
        root: $ => seq(optional($.container_doc_comment), container_members($)),
        
        // *** Top level ***
        test_decl: $ => seq("test", optional(field("name", choice($.string_literal_single, $.identifier))), $.block),

        comptime_decl: $ => seq("comptime", $.block),

        decl: $ => choice(
            seq(optional(choice("export", seq("extern", optional($.string_literal_single)), choice("inline", "noinline"))), $.fn_proto, choice(";", $.block)),
            seq(optional(choice("export", seq("extern", optional($.string_literal_single)))), optional("threadlocal"), $.var_decl),
            seq("usingnamespace", $.expr, ";")
        ),

        fn_proto: $ => seq("fn", optional($.identifier), "(", param_decl_list($), ")", optional($.byte_align), optional($.addr_space), optional($.link_section), optional($.call_conv), optional("!"), $.type_expr),
        var_decl: $ => seq(choice("const", "var"), $.identifier, optional(seq(":", $.type_expr)), optional($.byte_align), optional($.addr_space), optional($.link_section), optional(seq("=", $.expr)), ";"),
        container_field: $ => choice(
            seq(optional($.doc_comment), optional("comptime"), $.identifier, optional(seq(":", $.type_expr)), optional($.byte_align), optional(seq("=", $.expr))),
            seq(optional($.doc_comment), optional("comptime"), optional(seq($.identifier, ":")), $.type_expr, optional($.byte_align), optional(seq("=", $.expr))),
        ),

        // *** Block Level ***
        statement: $ => prec(precedence.curly, choice(
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
        )),

        if_statement: $ => choice(
            seq($.if_prefix, $.block_expr, optional(seq("else", optional($.payload), $.statement))), 
            seq($.if_prefix, $.assign_expr, choice(";", seq("else", optional($.payload), $.statement)))
        ),

        labeled_statement: $ => prec(precedence.curly, seq(optional($.block_label), choice($.block, $.loop_statement))),
        loop_statement: $ => seq(optional("inline"), choice($.for_statement, $.while_statement)),

        for_statement: $ => choice(
            seq($.for_prefix, $.block_expr, optional(seq("else", $.statement))),
            seq($.for_prefix, $.assign_expr, seq(choice(";", seq("else", $.statement)))),
        ),

        while_statement: $ => choice(
            seq($.while_prefix, $.block_expr, optional(seq("else", optional($.payload), $.statement))),
            seq($.while_prefix, $.assign_expr, seq(choice(";", seq("else", optional($.payload), $.statement)))),
        ),

        block_expr_statement: $ => choice(
            $.block_expr,
            seq($.assign_expr, ";"),
        ),

        block_expr: $ => prec(precedence.curly, seq(optional($.block_label), $.block)),

        // *** Expression Level ***

        assign_expr: $ => prec(precedence.assign, seq($.expr, optional(seq($.assign_op, $.expr)))),

        // expr: $ => $.bool_or_expr,

        // bool_or_expr: $ => prec.left(precedence.or, seq($.bool_and_expr, repeat(seq("or", $.bool_and_expr)))),

        // bool_and_expr: $ => prec.left(precedence.and, seq($.compare_expr, repeat(seq("and", $.compare_expr)))),

        // compare_expr: $ => prec.left(precedence.comparative, seq($.bitwise_expr, optional(seq($.compare_op, $.bitwise_expr)))),

        // bitwise_expr: $ => prec.left(precedence.bitwise, seq($.bit_shift_expr, repeat(seq($.bitwise_op, $.bit_shift_expr)))),

        // bit_shift_expr: $ => prec.left(precedence.bitshift, seq($.addition_expr, repeat(seq($.bit_shift_op, $.addition_expr)))),

        // addition_expr: $ => prec.left(precedence.addition, seq($.multiply_expr, repeat(seq($.addition_op, $.multiply_expr)))),

        // multiply_expr: $ => prec.left(precedence.multiply, seq($.prefix_expr, repeat(seq($.multiply_op, $.prefix_expr)))),

        expr: $ => choice($.binary_expr, $.prefix_expr, $.primary_expr),

        binary_expr: $ => {
            const table = [
                [precedence.or, "or"],
                [precedence.and, "and"],
                [precedence.comparative, $.compare_op],
                [precedence.bitwise, $.bitwise_op],
                [precedence.bitshift, $.bit_shift_op],
                [precedence.addition, $.addition_op],
                [precedence.multiply, $.multiply_op],
            ];

            return choice(
                ...table.map(([precedence, operator]) =>
                    prec.left(
                        precedence,
                        seq(
                            field("left", $.expr),
                            field("operator", operator),
                            field("right", $.expr)
                        )
                    )
                )
            );
        },

        prefix_expr: $ => prec.left(precedence.prefix, seq(repeat($.prefix_op), $.primary_expr)),

        primary_expr: $ => prec.right(precedence.primary, choice(
            $.asm_expr,
            $.if_expr,
            seq("break", optional($.break_label), optional($.expr)),
            seq("comptime", $.expr),
            seq("nosuspend", $.expr),
            seq("continue", optional($.break_label)),
            seq("resume", $.expr),
            seq("return", optional($.expr)),
            seq(optional($.block_label), $.loop_expr),
            $.block,
            $.curly_suffix_expr,
        )),

        if_expr: $ => prec.right(seq($.if_prefix, $.expr, optional(seq("else", optional($.payload), $.expr)))),

        block: $ => seq("{", repeat($.statement), "}"),

        loop_expr: $ => seq(optional("inline"), choice($.for_expr, $.while_expr)),

        for_expr: $ => prec.right(seq($.for_prefix, $.expr, optional(seq("else", $.expr)))),

        while_expr: $ => prec.right(seq($.while_prefix, $.expr, optional(seq("else", optional($.payload), $.expr)))),

        curly_suffix_expr: $ => prec.right(precedence.curly, seq($.type_expr, optional($.init_list))),

        init_list: $ => choice(
            seq("{", $.field_init, repeat(seq(",", $.field_init)), optional(","), "}"),
            seq("{", $.expr, repeat(seq(",", $.expr)), optional(","), "}"),
            seq("{", "}"),
        ),

        type_expr: $ => seq(repeat($.prefix_type_op), $.error_union_expr),

        error_union_expr: $ => prec.right(seq($.suffix_expr, optional(seq("!", $.type_expr)))),

        suffix_expr: $ => prec.right(choice(
            seq("async", $.primary_type_expr, repeat($.suffix_op), $.fn_call_arguments),
            seq($.primary_type_expr, repeat(choice($.suffix_op, $.fn_call_arguments))),
        )),

        primary_type_expr: $ => prec(2, choice(
            seq($.builtin_identifier, $.fn_call_arguments),
            $.char_literal,
            $.container_decl,
            seq(".", $.identifier),
            seq(".", $.init_list),
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
            $.string_literal,
            $.switch_expr,
        )),

        container_decl: $ => seq(optional(choice("extern", "packed")), $.container_decl_auto),

        error_set_decl: $ => seq("error", "{", identifier_list($), "}"),

        grouped_expr: $ => seq("(", $.expr, ")"),

        if_type_expr: $ => prec.right(seq($.if_prefix, $.type_expr, optional(seq("else", optional($.payload), $.type_expr)))),

        labeled_type_expr: $ => choice(
            seq($.block_label, $.block),
            seq(optional($.block_label), $.loop_type_expr),
        ),

        loop_type_expr: $ => seq(optional("inline"), choice($.for_type_expr, $.while_type_expr)),

        for_type_expr: $ => prec.right(seq($.for_prefix, $.type_expr, optional(seq("else", $.type_expr)))),

        while_type_expr: $ => prec.right(seq($.while_prefix, $.type_expr, optional(seq("else", optional($.payload), $.type_expr)))),

        switch_expr: $ => seq("switch", "(", $.expr, ")", "{", switch_prong_list($), "}"),

        // *** Assembly ***
        asm_expr: $ => seq("asm", optional("volatile"), "(", $.expr, optional($.asm_output), ")"),

        asm_output: $ => seq(":", asm_output_list($), optional($.asm_input)),

        asm_output_item: $ => seq("[", $.identifier, "]", $.string_literal, "(", choice(seq("->", $.type_expr), $.identifier), ")"),

        asm_input: $ => seq(":", asm_input_list($), optional($.asm_clobbers)),

        asm_input_item: $ => seq("[", $.identifier, "]", $.string_literal, "(", $.expr, ")"),

        asm_clobbers: $ => seq(":", string_list($)),

        // *** Helper grammar ***
        break_label: $ => seq(":", $.identifier),

        block_label: $ => prec.left(seq($.identifier, ":")),

        field_init: $ => seq(".", $.identifier, "=", $.expr),

        while_continue_expr: $ => seq(":", "(", $.assign_expr, ")"),

        link_section: $ => seq("linksection", "(", $.expr, ")"),

        addr_space: $ => seq("addrspace", "(", $.expr, ")"),

        // Fn specific
        call_conv: $ => seq("callconv", "(", $.expr, ")"),

        param_decl: $ => choice(
            seq(optional($.doc_comment), optional(choice("noalias", "comptime")), optional(seq($.identifier, ":")), $.param_type),
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
            $.switch_case, 
            "=>", 
            optional($.ptr_index_payload), 
            $.assign_expr,
        ),

        switch_case: $ => choice(
            seq($.switch_item, repeat(choice(",", $.switch_item)), optional(",")), 
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
            seq("catch", optional($.payload)),
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
            seq($.ptr_type_start, repeat(choice($.addr_space, seq("align", "(", $.expr, optional(seq(":", $.expr, ":", $.expr)), ")"), "const", "volatile", "allowzero"))),
            $.array_type_start,
        ),

        suffix_op: $ => choice(
            seq("[", $.expr, optional(seq("..", optional(seq(optional($.expr), optional(seq(":", $.expr)))))), "]"),
            seq(".", $.identifier),
            ".*",
            ".?",
        ),

        fn_call_arguments: $ => seq("(", expr_list($), ")"),

        // Ptr specific
        slice_type_start: $ => seq("[", optional(seq(":", $.expr)), "]"),

        ptr_type_start: $ => choice(
            "*",
            "**",
            seq("[", "*", optional(choice("c", seq(":", $.expr))), "]"),
        ),

        array_type_start: $ => seq("[", $.expr, optional(seq(":", $.expr)), "]"),

        // ContainerDecl specific
        container_decl_auto: $ => seq($.container_decl_type, "{", optional($.container_doc_comment), container_members($), "}"),

        container_decl_type: $ => choice(
            seq("struct", optional(seq("(", $.expr, ")"))),
            "opaque",
            seq("enum", optional(seq("(", $.expr, ")"))),
            seq("union", optional(seq("(", choice(seq("enum", optional(seq("(", $.expr, ")"))), $.expr), ")"))),
        ),

        // Alignment
        byte_align: $ => seq("align", "(", $.expr, ")"),

        // Comments
        container_doc_comment: (_) =>
            token(repeat1(seq("//!", /[^\n]*/, /[ \n]*/))),
        doc_comment: (_) => token(repeat1(seq("///", /[^\n]*/, /[ \n]*/))),
        line_comment: (_) => token(seq("//", /.*/)),

        // Strings
        identifier: ($) => choice(/[A-Za-z_][A-Za-z0-9_]*/, seq("@", $.string_literal)),
        string_escape: ($) => choice(
            "\\n",
            "\\r",
            "\\t",
            "\\\\",
            "\\'",
            "\\\"",
            /\\x[0-9a-fA-F]{2}/,
            /\\u\{[0-9a-fA-F]{1,6}\}/
        ),
        builtin_identifier: $ => /@[A-Za-z_][A-Za-z0-9_]*/,

        char_fragment: ($) => token.immediate(prec(1, /[^'\\]/)),
        string_fragment: ($) => token.immediate(prec(1, /[^"\\]+/)),

        char_literal: ($) => seq("'", choice($.char_fragment, $.string_escape), "'"),
        string_literal_single: ($) => seq("\"", repeat(choice($.string_fragment, $.string_escape)), "\""),
        multi_string_literal: ($) => prec(1, repeat1(seq("\\\\", /[^\n]*/, "\n"))),
        string_literal: $ => prec(1, choice($.string_literal_single, $.multi_string_literal)),

        integer: $ => choice(
            token(seq("0b", numericWithSeparator(/[01]/))),
            token(seq("0o", numericWithSeparator(/[0-7]/))),
            token(seq("0x", numericWithSeparator(/[0-9a-fA-F]/), optional(seq(/[pP]\+?/, numericWithSeparator(/[0-9]/))))),
            token(seq(numericWithSeparator(/[0-9]/), optional(seq(/[eE]\+?/, numericWithSeparator(/[0-9]/))))),
        ),

        float: $ => prec(10, choice(
            token(seq("0x", numericWithSeparator(/[0-9a-fA-F]/), ".", numericWithSeparator(/[0-9a-fA-F]/)), optional(seq(/[pP][+\-]?/, numericWithSeparator(/[0-9]/)))),
            token(seq(numericWithSeparator(/[0-9]/), ".", numericWithSeparator(/[0-9]/), optional(seq(/[eE][+\-]?/, numericWithSeparator(/[0-9]/))))),
            token(seq("0x", numericWithSeparator(/[0-9a-fA-F]/), /[pP]-/, numericWithSeparator(/[0-9]/))),
            token(seq(numericWithSeparator(/[0-9]/), /[eE]-/, numericWithSeparator(/[0-9]/))),
        )),
    }
});

function numericWithSeparator(regex) {
    return seq(regex, repeat(seq(optional("_"), regex)));
}
