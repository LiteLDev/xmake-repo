"""Build owned G2 fixtures using an actual formal example compiler invocation.

This consumes local build evidence; it is not the G6 public SDK installer.
All linking and strip checks use the same accepted P5/runtime inputs as LL.
"""
import argparse
import copy
import json
from pathlib import Path
import shlex
import subprocess
import sys

REPO = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(REPO / "scripts"))
from android_kernel_binary import elf_contract, source_names, verify_traces, write_json
from android_kernel_inputs import read_json, sha


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--example-inputs", type=Path, required=True)
    parser.add_argument("--compile-log", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    config = read_json(args.example_inputs)
    if config["role"] != "example" or config["repository"] != str(REPO):
        raise ValueError("formal example inputs from this checkout are required")
    if config["lock_sha256"] != sha(REPO / "config/android-kernel-inputs.lock.json"):
        raise ValueError("runtime input lock changed")
    lines = [line for line in args.compile_log.read_text(encoding="utf-8-sig").splitlines()
             if "clang++ -c " in line and line.endswith("examples\\android-p7-mod\\src\\main.cpp")]
    if len(lines) != 1:
        raise ValueError("one actual formal example compiler invocation is required")
    flags = shlex.split(lines[0], posix=False)
    object_index = flags.index("-o")
    del flags[object_index:object_index + 2]
    flags = [flag for flag in flags[:-1] if flag != "-H" and not flag.startswith("-Xclang=")]
    inputs = config["inputs"]
    ndk = Path(inputs["ndk"]) / "toolchains/llvm/prebuilt/windows-x86_64/bin"
    flags[0] = str(ndk / "clang++.exe")
    build_root = args.example_inputs.parents[2]
    kernel = build_root / "android-kernel/kernel"
    core = kernel / "stripped/libLeviLamina.so"
    archives = [Path(value) for command in read_json(kernel / "link-commands.json")["commands"]
                if command["name"] == "partial-link" for value in command["command"] if value.endswith(".a")]
    common = ["--runtime-manifest", inputs["runtime_manifest"], "--bmb", inputs["bmb"],
              "--provider-elf", inputs["provider"], "--target-elf", inputs["target"], "--ndk", inputs["ndk"]]
    results = []
    targets = [(0, "LeviLamina"), *enumerate(("P7NativeA", "P7NativeB", "P7LoadFailure", "P7EnableFailure", "P7EnableCleanupFailure"), 1)]
    fixture_host = args.output.resolve() / "LeviLamina/stripped/libLeviLamina.so"
    for kind, name in targets:
        source = "test/android/shared_core/" + ("native_mod_test_access.cpp" if kind == 0 else "native_mod_fixture.cpp")
        role = "kernel" if kind == 0 else "example"
        output = args.output.resolve() / name
        output.mkdir(parents=True, exist_ok=True)
        commands = []

        def run(label, command, cwd=REPO):
            command = list(map(str, command))
            result = subprocess.run(command, cwd=cwd, capture_output=True, text=True, encoding="utf-8", errors="replace")
            log = output / (label + ".log")
            log.write_text(result.stdout + result.stderr, encoding="utf-8", newline="\n")
            commands.append({"name": label, "command": command, "exit": result.returncode, "log_sha256": sha(log)})
            write_json(output / "commands.json", {"commands": commands})
            if result.returncode:
                raise RuntimeError(label + " failed: " + (result.stdout + result.stderr)[-4000:])

        fixture = copy.deepcopy(config)
        fixture["sources"] = [source]
        manifest = {"name": name, "entry": "lib" + name + ".so", "type": "native", "platform": "client",
                    "version": "0.1.0-p7", "passive": kind != 1,
                    "extraInfo": {"os": "android", "arch": "arm64-v8a", "sdkAbi": config["sdk"]["sdkAbi"]}}
        trace_dir = output / "includes"
        trace_dir.mkdir(exist_ok=True)
        trace = trace_dir / (next(iter(source_names(fixture))) + ".txt")
        obj = output / "fixture.o"
        defines = ["-DLL_EXPORT"] if kind == 0 else ['-DP7_FIXTURE_NAME="' + name + '"', "-DP7_FIXTURE_KIND=" + str(kind)]
        run("compile", [*flags, *defines,
                        "-H", "-Xclang=-header-include-file", "-Xclang=" + str(trace), "-o", obj, source])
        coverage = verify_traces(fixture, trace_dir)
        merged = output / "fixture-with-fmt.o"
        linked_objects = [kernel / "prelink/shared-core.o", obj] if kind == 0 else [obj, *archives]
        run("partial-link", [ndk / "ld.lld.exe", "-r", *linked_objects, "-o", merged])
        generated = output / "prelink"
        run("generate", [inputs["prelink"], "android", "generate", *common, "--output", generated, "--", merged])
        elf = output / manifest["entry"]
        parent_link = [] if kind == 0 else ["-L" + str(fixture_host.parent), "-lLeviLamina"]
        exports = "android-kernel.exports" if kind == 0 else "android-example.exports"
        run("link", [ndk / "clang++.exe", "--target=aarch64-linux-android28", "-shared",
                     "-Wl,-z,defs", "-Wl,-z,max-page-size=16384", "-Wl,-z,common-page-size=16384",
                     "-Wl,--build-id=sha1", "-Wl,-soname," + manifest["entry"],
                     "-Wl,--version-script=" + str(REPO / "scripts/xmake" / exports),
                     merged, "@bedrock_runtime_link.rsp", *parent_link,
                     "-L" + str(Path(inputs["provider"]).parent), "-ldl", "-llog", "-o", elf], generated)
        verify = [inputs["prelink"], "android", "verify", *common,
                  "--imports-manifest", generated / "bedrock_runtime_imports.json"]
        run("verify", [*verify, "--elf", elf])
        plain = elf_contract(elf, role=role, expected_soname=manifest["entry"])
        stripped = output / "stripped" / elf.name
        stripped.parent.mkdir(exist_ok=True)
        run("strip", [ndk / "llvm-strip.exe", "--strip-all", "-o", stripped, elf])
        run("verify-stripped", [*verify, "--elf", stripped])
        compact = elf_contract(stripped, role=role, expected_soname=manifest["entry"])
        if plain["exports"] != compact["exports"] or plain["needed"] != compact["needed"]:
            raise ValueError("fixture strip changed ABI")
        if kind == 0:
            manifest = read_json(kernel / "inputs.json")["package"]
        write_json(output / "manifest.json", manifest)
        results.append({"name": name, "kind": kind, "source_sha256": sha(REPO / source),
                        "header_coverage": coverage, "elf": compact, "original_core_object_sha256": sha(kernel / "prelink/shared-core.o") if kind == 0 else None})
        write_json(args.output / "results.json", {"fixtures": results, "runtime_tested": False})
        print(name + " compiled, linked and verified", flush=True)


if __name__ == "__main__":
    main()
