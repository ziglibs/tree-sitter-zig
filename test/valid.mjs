// Runs tree-sitter-zig on all Zig files in the Zig repo and asserts that the output is errorless.

import { join } from "path";
import { glob } from "glob";
import minimist from "minimist";
import { spawn } from "child_process";
import { fileURLToPath } from "url";
import { mkdir, rm, writeFile } from "fs/promises";
import { existsSync } from "fs";

if (!existsSync("test/invalid_outputs"))
    await mkdir("test/invalid_outputs");

const executable = process.platform === "win32"
  ? "tree-sitter.exe"
  : "tree-sitter";

const args = minimist(process.argv.slice(2));

const cwd = args.path ?? process.cwd();

const zig_files = await glob("**/*.zig", {
    cwd,
});

function spawnPromise(command, args) {
    return new Promise(async resolve => {
        const proc = spawn(command, args, {
            stdio: ["ignore", "pipe", "ignore"],
        });
        
        const buffers = [];
        // node.js readable streams implement the async iterator protocol
        for await (const data of proc.stdout) {
            buffers.push(data);
        }

        proc.on("close", () => {
            resolve({proc, stdout: Buffer.concat(buffers)});
        });
    });
}

let passed = 0;
let total = 0;

for (const file of zig_files) {
    const command = join(fileURLToPath(import.meta.url), "../..", "./node_modules/tree-sitter-cli/", executable);
    const args = ["parse", join(cwd, file)];

    const res = await spawnPromise(command, args);
    const output_path = join("test/invalid_outputs", file.replace(/[\/\\]/g, "_") + ".output");

    total += 1;

    if (res.proc.exitCode !== 0) {
        console.error(`${file} failed!`);
        await writeFile(output_path, Buffer.concat([Buffer.from(`Source: ${join(cwd, file)}\n\n`), res.stdout]));
    } else {
        passed += 1;
        console.log(`${file} passed!`);
        if (existsSync(output_path))
            await rm(output_path);
    }
}

console.log(`${passed}/${total} (${(passed/total*100).toFixed(2)}%) passed`)
