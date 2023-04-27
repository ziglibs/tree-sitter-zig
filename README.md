# tree-sitter-zig

[tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar inspired by and partially built on [maxxnino/tree-sitter-zig](https://github.com/maxxnino/tree-sitter-zig) that's going to be made simple to query and structure-preserving on error rather than 100% adherent to the Zig spec. This grammar can successfully parse every behavior testcase, all std files, and all compiler files.

## Tests

```bash
npm i
```

Then:
```bash
.\node_modules\.bin\tree-sitter generate; .\node_modules\.bin\tree-sitter parse .\test\samples\hello.zig
```

```bash
node .\test\valid.mjs --path=C:\Programming\Zig\zig\test\cases
```
