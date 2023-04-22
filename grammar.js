// Extracted from [tokenizer.lexeme](https://github.com/ziglang/zig/blob/master/lib/std/zig/tokenizer.zig#L192)

const bang = "!";
const pipe = "|";
const pipe_pipe = "||";
const pipe_equal = "|=";
const equal = "=";
const equal_equal = "==";
const equal_angle_bracket_right = "=>";
const bang_equal = "!=";
const l_paren = "(";
const r_paren = ")";
const semicolon = ";";
const percent = "%";
const percent_equal = "%=";
const l_brace = "{";
const r_brace = "}";
const l_bracket = "[";
const r_bracket = "]";
const period = ".";
const period_asterisk = ".*";
const ellipsis2 = "..";
const ellipsis3 = "...";
const caret = "^";
const caret_equal = "^=";
const plus = "+";
const plus_plus = "++";
const plus_equal = "+=";
const plus_percent = "+%";
const plus_percent_equal = "+%=";
const plus_pipe = "+|";
const plus_pipe_equal = "+|=";
const minus = "-";
const minus_equal = "-=";
const minus_percent = "-%";
const minus_percent_equal = "-%=";
const minus_pipe = "-|";
const minus_pipe_equal = "-|=";
const asterisk = "*";
const asterisk_equal = "*=";
const asterisk_asterisk = "**";
const asterisk_percent = "*%";
const asterisk_percent_equal = "*%=";
const asterisk_pipe = "*|";
const asterisk_pipe_equal = "*|=";
const arrow = "->";
const colon = ":";
const slash = "/";
const slash_equal = "/=";
const comma = ",";
const ampersand = "&";
const ampersand_equal = "&=";
const question_mark = "?";
const angle_bracket_left = "<";
const angle_bracket_left_equal = "<=";
const angle_bracket_angle_bracket_left = "<<";
const angle_bracket_angle_bracket_left_equal = "<<=";
const angle_bracket_angle_bracket_left_pipe = "<<|";
const angle_bracket_angle_bracket_left_pipe_equal = "<<|=";
const angle_bracket_right = ">";
const angle_bracket_right_equal = ">=";
const angle_bracket_angle_bracket_right = ">>";
const angle_bracket_angle_bracket_right_equal = ">>=";
const tilde = "~";

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
}

module.exports = grammar({
    name: "zig",

    externals: (_) => [],
    inline: (_) => [],
    extras: ($) => [/\s/, $.line_comment],
    conflicts: ($) => [],

    rules: {
        container_body: ($) => seq(optional($.container_doc_comment), optional($._container_members)),

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

        // Containers
        _container_members: ($) => repeat1(
            choice(seq($.container_field, optional(comma)))
        ),

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
        one_pointer: ($) => "*",
        many_pointer: ($) => "[*]",
        slice_pointer: ($) => "[]",
        c_pointer: ($) => "[*c]",

        _pointer_size: ($) => choice(
            $.one_pointer,
            $.many_pointer,
            $.slice_pointer,
            $.c_pointer,
        ),

        allowzero: ($) => "allowzero",
        constant: ($) => "const",
        volatile: ($) => "volatile",

        _pointer_modifier: ($) => choice($.allowzero, $.constant, $.volatile),

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
            optional($.doc_comment),
            optional(field("comptime", $.comptime)),
            choice(
                seq(field("name", $.identifier), colon, field("type", $._type_expr)),
            ),
            // optional($.ByteAlign),
            // optional(seq(EQUAL, $._Expr))
        )
    }
});
