# tree-sitter-zig

[tree-sitter](https://github.com/tree-sitter/tree-sitter) parser inspired by and partially built on [maxxnino/tree-sitter-zig](https://github.com/maxxnino/tree-sitter-zig) that's made to be simple to query and structure-preserving on error rather than 100% adherent to the Zig spec.

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
