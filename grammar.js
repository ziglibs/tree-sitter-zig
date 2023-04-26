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
    }
});
