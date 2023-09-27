const std = @import("std");

pub fn build(b: *std.Build) void {
    var obj = b.addStaticLibrary(.{
        .name = "tree-sitter-zig",
        .target = b.standardTargetOptions(.{}),
        .optimize = b.standardOptimizeOption(.{}),
    });

    obj.linkLibC();
    obj.addCSourceFile(.{ .file = .{ .path = "src/parser.c" }, .flags = &.{} });
    obj.addIncludePath(.{ .path = "src" });

    b.installArtifact(obj);
}
