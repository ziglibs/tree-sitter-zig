const std = @import("std");

pub fn build(b: *std.Build) void {
    _ = b.addModule("tree-sitter-zig", .{
        .source_file = .{ .path = "src/parser.c" },
    });
}
