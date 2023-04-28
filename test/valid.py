import os
import sys
import glob
import hashlib
from tree_sitter import Language, Parser

def main():
    if not os.path.exists("test/invalid_outputs"):
        os.mkdir("test/invalid_outputs")

    Language.build_library(
        "build/zig-py.so",

        [
            "."
        ]
    )

    ZIG_LANGUAGE = Language("build/zig-py.so", "zig")

    query = ZIG_LANGUAGE.query("""
    (ERROR) @error
    """)

    parser = Parser()
    parser.set_language(ZIG_LANGUAGE)

    paths = []
    passed = 0
    for arg in sys.argv[1:]:
        paths.extend(glob.glob(arg, recursive=True))

    for path in paths:
        file = open(path, "rb")
        tree = parser.parse(file.read())
        h = hashlib.md5(path.encode("utf-8")).hexdigest()
        hp = os.path.join("test", "invalid_outputs", h)
        if len(query.captures(tree.root_node)) == 0:
            if os.path.exists(hp):
                os.remove(hp)
            print("✅ " + path)
            passed += 1
        else:
            out = open(hp, "w+")
            out.write("File: " + path + "\n\n")
            out.write(tree.root_node.sexp())
            print("❌ " + path + " (@ " + hp + ")")
            out.close()
        file.close()

    print("👍 " + str(passed) + " / " + str(len(paths)) + " (" + str(passed / len(paths) * 100) + "%)")
    if passed != len(paths):
        exit(1)

if len(sys.argv) == 1:
    print("valid.py [paths...]")
else:
    main()
