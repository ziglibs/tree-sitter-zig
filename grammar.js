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
    conflicts: ($) => [],

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
        string_fragment: ($) => token.immediate(prec(1, /[^"\\]+/)),
        string_literal: ($) => seq("\"", repeat(choice($.string_fragment)), "\""),

        comptime: ($) => "comptime",

        // integer: (_) => choice(
        //     token(seq("0b", seq(/[01]/, repeat(seq(optional("_"), /[01]/))))),
        //     token(seq("0o", seq(/[0-7]/, repeat(seq(optional("_"), /[0-7]/))))),
        //     token(seq("0x", seq(/[0-9a-fA-F]/, repeat(seq(optional("_"), /[0-9a-fA-F]/))))),
        //     token(seq(/[0-9]/, repeat(seq(optional("_"), /[0-9]/)))),
        // ),
        integer: (_) => choice(
            token(seq("0b", numericWithSeparator(/[01]/))),
            token(seq("0o", numericWithSeparator(/[0-7]/))),
            token(seq("0x", numericWithSeparator(/[0-9a-fA-F]/))),
            token(numericWithSeparator(/[0-9]/)),
        ),

        // Containers
        _container_members: ($) => repeat1(
            choice(
                seq($.container_field, optional(",")),
                seq($.container_function)
            ),
        ),

        // Expressions
        // A free-form expression that returns a value, e.g.:
        // 1
        // {}
        // a: {break :a 12;}
        // if (1 == 1) 0 else 1
        // some sort of type
        // etc.
        _expr: ($) => choice(
            $.integer,
            $._type_expr,
            $.block_expr,
        ),

        // Block
        block_expr: ($) => seq(
            optional(seq(field("label", $.identifier), ":")),
            $.block,
        ),

        block: ($) => seq("{", repeat($._statement), "}"),

        _statement: ($) => seq(
            choice(
                $.break_statement,
            ),
            ";"
        ),
        
        break_statement: $ => seq(
            "break",
            optional(seq(":", field("label", $.identifier))),
            optional(field("value", $._expr)),
        ),

        // Types
        // Some types:
        // u8
        // *u8
        // struct {...}
        // *struct {...}
        // [*]u8
        // []u8
        // [*:0]const u8
        // fn (...) ...
        _type_expr: ($) => choice(
            $.pointer_type,
            $.identifier,
        ),

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
        constant: (_) => "const",
        volatile: (_) => "volatile",

        _pointer_modifier: ($) => choice($.allowzero, $.alignment, $.constant, $.volatile),

        pointer_type: ($) => seq(
            field("size", $._pointer_size),
            // NOTE: Modifiers are defined as order-independent which makes stuff a little
            // more complicated but ensures we can correct things like like *const const or *const allowzero
            // is this worth it?
            repeat($._pointer_modifier),
            field("child", $._type_expr),
        ),

        // Should comptime fields be handled like this?
        // They're fundamentally different as they require default values
        container_field: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("comptime", $.comptime)),
            seq(field("name", $.identifier), ":", field("type", $._type_expr)),
            optional(field("alignment", $.alignment)),
            optional(field("default", seq("=", $._expr)))
        ),

        function_prototype: ($) => seq(
            "fn",
            field("name", $.identifier),
            // TODO: params
            "()",
            optional(field("alignment", $.alignment)),
            field("return_type", $._expr),
            // TODO: callconv
        ),

        pub: (_) => "pub",
        extern: (_) => "extern",

        container_function: ($) => seq(
            optional(field("documentation", $.doc_comment)),
            optional(field("pub", $.pub)),
            optional(field("extern", $.extern)),
            $.function_prototype,
            choice(field("body", $.block), ";")
        ),
    }
});
