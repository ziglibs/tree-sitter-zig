import sys
import glob
from tree_sitter import Language, Parser

def main():
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
        if len(query.captures(tree.root_node)) == 0:
            print("✅ " + path)
            passed += 1
        else:
            print("❌ " + path)
        file.close()

    print("👍 " + str(passed) + " / " + str(len(paths)) + " (" + str(passed / len(paths) * 100) + "%)")

if len(sys.argv) == 1:
    print("valid.py [paths...]")
else:
    main()
