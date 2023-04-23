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
    conflicts: ($) => [[$.container_field_list]],

    rules: {
        root: ($) => seq(optional($.container_doc_comment), optional($._container_members)),

        // Comments
        container_doc_comment: (_) =>
            token(repeat1(seq("//!", /[^\n]*/, /[ \n]*/))),
        doc_comment: (_) => token(repeat1(seq("///", /[^\n]*/, /[ \n]*/))),
        line_comment: (_) => token(seq("//", /.*/)),

        // Simple terms
        identifier: ($) => choice(/[A-Za-z_][A-Za-z0-9_]*/, seq("@", $.string_literal)),
        // TODO: Escapes
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
        string_fragment: ($) => token.immediate(prec(1, /[^"\\]+/)),
        string_literal: ($) => seq("\"", repeat(choice($.string_fragment, $.string_escape)), "\""),

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

        _container_members: ($) => seq(
            repeat(
                choice(
                    $.container_function,
                    seq($.container_var_decl, ";"),
                ),
            ),
            $.container_field_list,
            optional(seq(
                ",",
                repeat1(
                    choice(
                        $.container_function,
                        seq($.container_var_decl, ";"),
                    ),
                )
            )),
        ),

        container_body: ($) => seq("{", optional($.container_doc_comment), optional($._container_members), "}"),

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
        _expr: ($) => prec.right(choice(
            $.identifier,

            $.float,
            $.integer,
            $.string_literal,

            $.struct,
            $.enum,
            $.union,
            $.opaque,
            $.error_set,

            $.pointer_type,
            $.identifier,
            $.field_access,
            $.call,

            $.if_expr,
            $.while_expr,
            $.for_expr,
            $.block_expr,

            $.group,
            $.binary_op,
        )),

        group: $ => seq("(", $._expr, ")"),

        field_access: $ => prec.right(seq(
            $._expr,
            repeat1(prec(precedence.curly, seq(
                ".",
                choice($.call, $.identifier),
            ))),
        )),

        arguments: ($) => seq("(", optional(seq(repeat(seq($._expr, ",")), $._expr, optional(","))), ")"),
        call: $ => prec.right(seq(
            $.identifier,
            $.arguments,
        )),

        // Operations
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

        binary_op: $ => prec.left(seq(
            field("left", $._expr),
            field("operator", $.binary_operator),
            field("right", $._expr),
        )),

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
        for_expr: $ => prec.left(seq(
            "for",
            "(",
            field("source", choice(
                $._expr,
                $.range,
            )),
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
                        $.assign_stmt,
                    ),
                    ";"
                ),
                choice(
                    $.if_expr,
                    $.while_expr,
                    $.for_expr,
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

        // Types
        // Pointer
        one_pointer: (_) => "*",
        many_pointer: ($) => seq("[*", optional(seq(":", field("sentinel", $._expr))), "]"),
        slice_pointer: ($) => seq("[", optional(seq(":", field("sentinel", $._expr))), "]"),
        c_pointer: (_) => "[*c]",

        _pointer_size: ($) => choice(
            $.one_pointer,
            $.many_pointer,
            $.slice_pointer,
            $.c_pointer,
        ),

        alignment: ($) => seq("align(", $.integer, ")"),
        allowzero: (_) => "allowzero",
        var: (_) => "var",
        constant: (_) => "const",
        volatile: (_) => "volatile",

        _pointer_modifier: ($) => choice($.allowzero, $.alignment, $.constant, $.volatile),

        pointer_type: ($) => prec.left(seq(
            field("size", $._pointer_size),
            // NOTE: Modifiers are defined as order-independent which makes stuff a little
            // more complicated but ensures we can correct things like like *const const or *const allowzero
            // is this worth it?
            repeat($._pointer_modifier),
            field("child", $._expr),
        )),

        // Should comptime fields be handled like this?
        // They're fundamentally different as they require default values
        container_field: ($) => prec(precedence.curly, seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("comptime", $.comptime)),
            seq(field("name", $.identifier), optional(seq(":", field("type", $._expr)))),
            optional(field("alignment", $.alignment)),
            optional(field("default", seq("=", $._expr)))
        )),
        
        fn_param: ($) => seq(optional(choice(field("noalias", $.noalias), field("comptime", $.comptime))), field("name", $.identifier), ":", field("type", choice($._expr, $.noalias))),
        fn_param_list: ($) => seq("(", optional(seq(repeat(seq($.fn_param, ",")), $.fn_param, optional(","))), ")"),

        fn_proto: ($) => seq(
            "fn",
            field("name", $.identifier),
            $.fn_param_list,
            optional(field("alignment", $.alignment)),
            field("return_type", $._expr),
            // TODO: callconv
        ),

        pub: (_) => "pub",
        extern: (_) => "extern",
        packed: (_) => "packed",
        export: (_) => "export",

        container_function: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("pub", $.pub)),
            optional(field("extern", $.extern)),
            optional(field("export", $.export)),
            $.fn_proto,
            choice(field("body", $.block), ";")
        ),

        container_var_decl: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("pub", $.pub)),
            optional(field("extern", $.extern)),
            optional(field("export", $.export)),
            $.var_decl,
        ),
    }
});
