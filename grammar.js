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

// TODO: Invalidate keywords
// "addrspace",
// "align",
// "allowzero",
// "and",
// "anyframe",
// "anytype",
// "asm",
// "async",
// "await",
// "break",
// "callconv",
// "catch",
// "comptime",
// "const",
// "continue",
// "defer",
// "else",
// "enum",
// "errdefer",
// "error",
// "export",
// "extern",
// "fn",
// "for",
// "if",
// "inline",
// "noalias",
// "noinline",
// "nosuspend",
// "opaque",
// "or",
// "orelse",
// "packed",
// "pub",
// "resume",
// "return",
// "linksection",
// "struct",
// "suspend",
// "switch",
// "test",
// "threadlocal",
// "try",
// "union",
// "unreachable",
// "usingnamespace",
// "var",
// "volatile",
// "while",

// TODO -> frame access

const _container_members = $ => seq(
    repeat($._non_field_container_members),
    optional($.container_field_list),
    optional(seq(
        ",",
        repeat1($._non_field_container_members)
    )),
);

module.exports = grammar({
    name: "zig",

    externals: (_) => [],
    inline: (_) => [],
    extras: ($) => [/\s/, $.line_comment],
    // TODO: Investigate these - can we fix them?
    conflicts: ($) => [[$.container_field_list], [$.block_expr], [$.asm_out], [$.asm_in], [$.asm_clobbers], [$._expr, $.comptime_stmt], [$.while_expr], [$.for_expr]],

    rules: {
        root: ($) => seq(optional($.container_doc_comment), _container_members($)),

        _non_field_container_members: $ => choice(
            $.container_function,
            seq($.container_var_decl, ";"),
            $.test,
            $.container_comptime_block,
        ),

        test: $ => seq("test", field("name", choice($.identifier, $.string_literal)), $.block),

        // Comments
        container_doc_comment: (_) =>
            token(repeat1(seq("//!", /[^\n]*/, /[ \n]*/))),
        doc_comment: (_) => token(repeat1(seq("///", /[^\n]*/, /[ \n]*/))),
        line_comment: (_) => token(seq("//", /.*/)),

        // Simple terms
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

        char_fragment: ($) => token.immediate(prec(1, /[^'\\]/)),
        string_fragment: ($) => token.immediate(prec(1, /[^"\\]+/)),

        char_literal: ($) => seq("'", choice($.char_fragment, $.string_escape), "'"),
        string_literal: ($) => seq("\"", repeat(choice($.string_fragment, $.string_escape)), "\""),
        multi_string_literal: ($) => prec(1, repeat1(seq("\\\\", /[^\n]*/, "\n"))),
        // TODO(sno2): why is just `.` allowed?
        enum_literal: ($) => seq(".", $.identifier),

        asm_out_part: ($) => seq("[", $.identifier, "]", $.string_literal, "(", $.identifier, ")"),
        asm_out: ($) => seq(":", $.asm_out_part, repeat(seq(",", $.asm_out_part))),
        
        asm_in_part: ($) => seq("[", $.identifier, "]", $.string_literal, "(", $._expr, ")"),
        asm_in: ($) => seq(":", $.asm_in_part, repeat(seq(",", $.asm_in_part))),
      
        asm_clobbers: ($) => seq(":", $.string_literal, repeat(seq(",", $.string_literal))),

        asm: ($) => seq("asm", optional("volatile"), "(", field("source", $._expr), optional(seq(
            $.asm_out,
            optional(","),
            optional(seq(
                $.asm_in,
                optional(","),
                optional(seq($.asm_clobbers, optional(","))),
            ))),
        ), ")"),

        noalias: ($) => "noalias",
        anytype: ($) => "anytype",
        comptime: ($) => "comptime",

        integer: (_) => seq(optional("-"), choice(
            token(seq("0b", numericWithSeparator(/[01]/))),
            token(seq("0o", numericWithSeparator(/[0-7]/))),
            token(seq("0x", numericWithSeparator(/[0-9a-fA-F]/))),
            token(numericWithSeparator(/[0-9]/)),
        )),

        float: (_) => token(seq(optional("-"), numericWithSeparator(/[0-9]/), ".", numericWithSeparator(/[0-9]/))),

        // Containers
        container_field_list: $ => seq(
            repeat(seq($.container_field, ",")),
            $.container_field,
            optional(","),
        ),

        container_body: ($) => seq("{", optional($.container_doc_comment), _container_members($), "}"),

        struct: ($) => seq(
            repeat(choice($.extern, $.packed)),
            "struct",
            optional(seq(
                "(",
                field("backing_integer", $._expr),
                ")",
            )),
            $.container_body,
        ),

        enum: ($) => seq(
            "enum",
            optional(seq(
                "(",
                field("tag_type", $._expr),
                ")",
            )),
            $.container_body,
        ),        

        inferred_tag_type: _ => "enum",
        union: ($) => seq(
            repeat(choice($.extern, $.packed)),
            "union",
            optional(seq(
                "(",
                field("tag_type", choice($.inferred_tag_type, $._expr)),
                ")",
            )),
            $.container_body,
        ),

        opaque: ($) => seq(
            repeat(choice($.extern, $.packed)),
            "opaque",
            $.container_body,
        ),

        error_set: ($) => seq(
            "error",
            "{",
            repeat(seq($.identifier, ",")),
            $.identifier,
            optional(","),
            "}",
        ),

        one_error: ($) => seq(
            "error",
            ".",
            $.identifier,
        ),

        error_union: ($) => prec.left(seq(
            optional(field("error_set", $._expr)),
            "!",
            field("payload", $._expr),
        )),

        // Expressions
        // A free-form expression that returns a value, e.g.:
        // 1
        // {}
        // a: {break :a 12;}
        // if (1 == 1) 0 else 1
        // some sort of type
        // etc.
        // Some types:
        // u8
        // *u8
        // struct {...}
        // *struct {...}
        // [*]u8
        // []u8
        // [*:0]const u8
        // fn (...) ...
        _expr: ($) => prec.left(choice(
            $.identifier,

            $.float,
            $.integer,
            $.char_literal,
            $.string_literal,
            $.multi_string_literal,
            $.enum_literal,
            $.asm,

            $.struct,
            $.enum,
            $.union,
            $.opaque,
            $.error_set,
            $.one_error,
            $.error_union,

            $.array_type,
            $.optional_type,
            $.pointer_type,
            $.identifier,
            $.field_access,
            $.call,
            $.builtin_call,

            $.return_expr,
            $.try_expr,
            $.catch_expr,
            $.orelse_expr,
            $.if_expr,
            $.while_expr,
            $.for_expr,
            $.block_expr,

            $.group,
            $.prefix_op,
            $.suffix_op,
            $.binary_op,
            
            $.array_access_op,
            $.slice_op,

            $.array_init,
            $.aggregate_init,

            $.unreachable,
        )),

        group: $ => seq("(", $._expr, ")"),

        field_init: $ => seq(
            ".",
            $.identifier,
            "=",
            $._expr,
        ),
        field_init_list: $ => seq(
            repeat(seq($.field_init, ",")),
            $.field_init,
            optional(","),
        ),

        expr_list: $ => seq(
            repeat(seq($._expr, ",")),
            $._expr,
            optional(","),
        ),

        array_init: $ => seq("[", field("length", $._expr), "]", field("type", $._expr), "{", $.expr_list, "}"),
        aggregate_init: $ => seq(choice(field("type", $.identifier), "."), "{", optional(choice($.field_init_list, $.expr_list)), "}"),

        field_access: $ => prec.right(seq(
            $._expr,
            repeat1(prec(precedence.curly, seq(
                ".",
                choice($.call, $.identifier),
            ))),
        )),

        call: $ => prec.right(seq(
            $.identifier,
            "(",
            $.expr_list,
            ")",
        )),

        builtin_call: $ => seq("@", /[A-Za-z_][A-Za-z0-9_]*/, "(", $.expr_list, ")"),

        // Operations
        prefix_operator: _ => prec(precedence.prefix, choice(
            "!",
            "-",
            "&",
            "~",
        )),

        suffix_operator: $ => choice(
            ".*",
            ".?",
        ),

        prefix_op: $ => prec(precedence.prefix, seq(
            field("operator", $.prefix_operator),
            field("operand", $._expr),
        )),

        suffix_op: $ => seq(
            field("operand", $._expr),
            field("operator", $.suffix_operator),
        ),

        // TODO: Fix binary op precedence

        binary_operator: $ => choice(
            "|",
            "||",
            "==",
            "!=",
            "%",
            "^",
            "+",
            "++",
            "+%",
            "+|",
            "-",
            "-%",
            "-|",
            "*",
            "**",
            "*%",
            "*|",
            "/",
            "&",
            "<",
            "<=",
            "<<",
            "<<|",
            ">",
            ">=",
            ">>",
        ),

        binary_op: $ => prec.left(prec(precedence.comparative, seq(
            field("left", $._expr),
            field("operator", $.binary_operator),
            field("right", $._expr),
        ))),

        array_access_op: $ => seq(field("operand", $._expr), "[", field("element", $._expr), "]"),
        slice_op: $ => seq(field("operand", $._expr), "[", field("start", $._expr), "..", optional(field("end", $._expr)), optional(seq(":", field("sentinel", $._expr))), "]"),

        // TODO: Make this configurable (if/else can only have max one capture, switch max 2, etc.)

        capture_pointer_of: _ => "*",

        capture: $ => seq(
            optional(field("pointer_of", $.capture_pointer_of)),
            $.identifier
        ),

        capture_list: $ => seq(
            "|",
            repeat(seq($.capture, ",")),
            $.capture,
            "|"
        ),

        // Branching expressions
        try_expr: $ => prec.left(seq(
            "try",
            $._expr,
        )),

        catch_expr: $ => prec.left(seq(
            field("source", $._expr),
            "catch",
            field("handler", $._expr),
        )),

        orelse_expr: $ => prec.left(seq(
            field("maybe", $._expr),
            "orelse",
            field("else", $._expr),
        )),

        if_expr: $ => prec.left(seq(
            "if",
            "(",
            field("condition", $._expr),
            ")",
            optional(field("then_captures", $.capture_list)),
            field("then", $._expr),
            optional(seq(
                "else",
                optional(field("else_captures", $.capture_list)),
                field("else", $._expr),
            ))
        )),

        while_expr: $ => prec.left(seq(
            optional(seq(field("label", $.identifier), ":")),
            "while",
            "(",
            field("condition", $._expr),
            ")",
            optional(choice(
                field("body_captures", $.capture_list),
                field("post_expr", seq(
                    ":",
                    "(",
                    choice(
                        $.assign_stmt,
                        $._expr,
                    ),
                    ")"
                )),
            )),
            field("body", $._expr),
            optional(seq(
                "else",
                optional(field("else_captures", $.capture_list)),
                field("else", $._expr),
            ))
        )),

        range: $ => seq(field("from", $.integer), "..", field("to", $.integer)),
        for_sources: $ => seq(
            choice(
                $._expr,
                $.range,
            ),
            repeat(seq(
                ",",
                choice(
                    $._expr,
                    $.range,
                )
            )),
            optional(",")
        ),
        for_expr: $ => prec.left(seq(
            optional(seq(field("label", $.identifier), ":")),
            "for",
            "(",
            field("sources", $.for_sources),
            ")",
            field("body_captures", $.capture_list),
            field("body", $._expr),
            optional(seq(
                "else",
                field("else", $._expr),
            ))
        )),

        // Block
        block_expr: ($) => seq(
            optional(seq(field("label", $.identifier), ":")),
            $.block,
        ),

        block: ($) => seq("{", repeat($._statement), "}"),

        _statement: ($) => prec(precedence.curly, seq(
            choice(
                seq(
                    choice(
                        $.var_decl,
                        $.break_stmt,
                        $.continue_stmt,
                        $.assign_stmt,
                        // TODO: Invalidate if (...){} by cherrypicking valid expressions
                        $._expr,
                    ),
                    ";"
                ),
                choice(
                    $.if_expr,
                    $.while_expr,
                    $.for_expr,
                    $.comptime_stmt,
                )
            )
        )),

        var_decl: ($) => seq(
            field("constness", choice($.constant, $.var)),
            field("name", $.identifier),
            optional(seq(":", optional(field("type", $._expr)))),
            optional(field("alignment", $.alignment)),
            optional(field("value", seq("=", $._expr)))
        ),

        break_stmt: $ => seq(
            "break",
            optional(seq(":", field("label", $.identifier))),
            optional(field("value", $._expr)),
        ),

        continue_stmt: $ => seq(
            "continue",
            optional(seq(":", field("label", $.identifier))),
        ),

        return_expr: $ => prec.left(seq(
            "return",
            optional(field("value", $._expr)),
        )),

        assignment_operator: $ => choice(
            "=",
            "|=",
            "%=",
            "^=",
            "+=",
            "+%=",
            "+|=",
            "-=",
            "-%=",
            "-|=",
            "*=",
            "*%=",
            "*|=",
            "/=",
            "&=",
            "<<=",
            "<<|=",
            ">>=",
        ),

        assign_stmt: $ => seq(
            field("dest", $._expr),
            field("operator", $.assignment_operator),
            field("src", $._expr)
        ),

        container_comptime_block: $ => seq(
            "comptime",
            seq($.block),
        ),

        comptime_stmt: $ => seq(
            "comptime",
            choice(
                seq($.var_decl, ";"),
                seq($.assign_stmt, ";"),
                seq($.block_expr),
                seq($._expr, ";"),
            ),
        ),

        // Types
        // Pointer
        one_pointer: (_) => "*",
        many_pointer: ($) => seq("[", "*", optional(seq(":", field("sentinel", $._expr))), "]"),
        slice_pointer: ($) => seq("[", optional(seq(":", field("sentinel", $._expr))), "]"),
        c_pointer: (_) => seq("[", "*", "c", "]"),

        _pointer_size: ($) => choice(
            $.one_pointer,
            $.many_pointer,
            $.slice_pointer,
            $.c_pointer,
        ),

        alignment: ($) => seq("align", "(", $.integer, ")"),
        allowzero: (_) => "allowzero",
        var: (_) => "var",
        constant: (_) => "const",
        volatile: (_) => "volatile",
        unreachable: (_) => "unreachable",

        _pointer_modifier: ($) => choice($.allowzero, $.alignment, $.constant, $.volatile),

        pointer_type: ($) => prec.left(seq(
            field("size", $._pointer_size),
            // NOTE: Modifiers are defined as order-independent which makes stuff a little
            // more complicated but ensures we can correct things like like *const const or *const allowzero
            // is this worth it?
            repeat($._pointer_modifier),
            field("child", $._expr),
        )),

        array_type: ($) => prec.left(seq("[", field("length", $._expr), "]", field("child", $._expr))),
        optional_type: ($) => prec.left(seq("?", $._expr)),

        // Should comptime fields be handled like this?
        // They're fundamentally different as they require default values
        container_field: ($) => prec(precedence.curly, seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("comptime", $.comptime)),
            seq(field("name", $.identifier), optional(seq(":", field("type", $._expr)))),
            optional(field("alignment", $.alignment)),
            optional(field("default", seq("=", $._expr)))
        )),
        
        fn_param: ($) => seq(optional(choice(field("noalias", $.noalias), field("comptime", $.comptime))), optional(seq(field("name", $.identifier), ":")), field("type", choice($._expr, $.noalias))),
        fn_param_list: ($) => seq("(", optional(seq(repeat(seq($.fn_param, ",")), $.fn_param, optional(","))), ")"),

        fn_proto: ($) => seq(
            "fn",
            field("name", $.identifier),
            $.fn_param_list,
            optional(field("alignment", $.alignment)),
            optional(seq("callconv", "(", field("callconv", $._expr), ")")),
            field("return_type", $._expr),
        ),

        pub: (_) => "pub",
        extern: (_) => "extern",
        packed: (_) => "packed",
        export: (_) => "export",
        threadlocal: (_) => "threadlocal",

        extern_specifier: ($) => seq($.extern, optional($.string_literal)),

        container_function: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("pub", $.pub)),
            optional(field("extern", $.extern_specifier)),
            optional(field("export", $.export)),
            $.fn_proto,
            choice(field("body", $.block), ";")
        ),

        container_var_decl: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("pub", $.pub)),
            optional(field("threadlocal", $.threadlocal)),
            optional(field("extern", $.extern_specifier)),
            optional(field("export", $.export)),
            $.var_decl,
        ),
    }
});
