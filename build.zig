const std = @import("std");

pub fn build(b: *std.Build) void {
    var obj = b.addStaticLibrary(.{
        .name = "tree-sitter-zig",
        .target = b.standardTargetOptions(.{}),
        .optimize = b.standardOptimizeOption(.{}),
    });

    obj.linkLibC();
    obj.addCSourceFile("src/parser.c", &.{});
    obj.addIncludePath("src");

    b.installArtifact(obj);
}
