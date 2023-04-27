const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = std.zig.CrossTarget.parse(.{
        .arch_os_abi = b.user_input_options.get("target") orelse @panic("Please specify the target with .target = ..."),
        .cpu_features = b.user_input_options.get("cpu") orelse @panic("Please specify the target with .target = ..."),
    });
    const optimize = std.meta.stringToEnum(std.builtin.Mode, b.user_input_options.get("target") orelse @panic("Please specify the optimization with .optimize = ..."));

    var obj = b.addObject(.{
        .name = "tree-sitter-zig",
        .target = target,
        .optimize = optimize,
    });

    obj.addCSourceFile("src/parser.c", .{});
    obj.addIncludePath("src");

    b.installArtifact(obj);
}
