"""Compare two real release builds and exercise publication failure recovery."""
import argparse
import json
from pathlib import Path
import shutil
import subprocess
import sys
from unittest.mock import patch

import package_android_kernel as package
from android_kernel_inputs import InputError


def require(condition, message):
    if not condition:
        raise InputError(message)


def read(path):
    return json.loads(path.read_text(encoding="utf-8-sig"))


def validate(repo, a, b, out):
    repo, a, b, out = (Path(path).resolve() for path in (repo, a, b, out))
    require(a != b, "two distinct build directories are required")
    for source in (repo, a, b):
        require(out != source and source not in out.parents, "output must be separate from sources and input builds")
    out.mkdir(parents=True, exist_ok=False)
    report = {"passed": False, "clean_builds": {}, "input_reorder": {}, "packaging_negatives": {}}
    keys = ("objects", "unstripped", "stripped", "p5_artifacts")
    for role in ("kernel", "example"):
        lane = Path("build-release/android-kernel") / role
        first, second = (read(root / lane / "elf.json") for root in (a, b))
        require(first["passed"] and second["passed"], role + " build evidence is incomplete")
        for key in keys:
            require(first[key] == second[key], role + ": clean builds differ in " + key)
        report["clean_builds"][role] = {key: first[key] for key in keys}
        work = out / "reordered" / role
        work.mkdir(parents=True)
        shutil.copyfile(a / lane / "inputs.json", work / "inputs.json")
        original = read(a / lane / "link-commands.json")[0]["command"]
        objects = original[original.index("--") + 1:]
        command = [sys.executable, str(repo / "scripts/android_kernel_link.py"),
                   "--inputs", str(work / "inputs.json"), "--traces", str(a / lane / "includes"),
                   "--elf", str(work / first["stripped"]["soname"]), "--prelink-dir", str(work / "prelink")]
        if role == "example":
            command += ["--kernel-elf", str(out / "reordered/kernel/libLeviLamina.so")]
        for obj in reversed(objects):
            command += ["--object", obj]
        result = subprocess.run(command, cwd=repo, capture_output=True, text=True, encoding="utf-8", errors="replace")
        (work / "driver.log").write_text(result.stdout + result.stderr, encoding="utf-8")
        require(result.returncode == 0, role + " reversed-input link failed: " + result.stderr[-2000:])
        reordered = read(work / "elf.json")
        for key in keys:
            require(reordered[key] == first[key], role + ": reversed inputs differ in " + key)
        report["input_reorder"][role] = {"object_count": len(objects), "all_five_artifacts_identical": True,
                                       "unstripped_sha256": first["unstripped"]["elf_sha256"],
                                       "stripped_sha256": first["stripped"]["elf_sha256"]}
        print(role + ": clean-directory and reversed-input bytes identical", flush=True)

    # Mutations below are confined to this new disposable copy.
    fixture = out / "packaging-fixture"
    shutil.copytree(a, fixture / "evidence")
    mirror = fixture / "repository"
    results = read(a / "release-results.json")
    for name in results[-1]["source_files"]:
        source, destination = (repo / name).resolve(), (mirror / name).resolve()
        require(repo in source.parents and mirror in destination.parents, "source evidence contains an unsafe path")
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, destination)
    for role in ("kernel", "example"):
        path = fixture / "evidence/build-release/android-kernel" / role / "elf.json"
        data = read(path)
        data["stripped_path"] = str(path.parent / "stripped" / data["stripped"]["soname"])
        path.write_text(json.dumps(data), encoding="utf-8")
    published = fixture / "published"

    def publish():
        return package.publish(mirror, fixture / "evidence", "release", published)

    first = publish()
    index = (published / "current.json").read_bytes()

    def rejected(name):
        try:
            publish()
        except (InputError, OSError, ValueError, KeyError) as error:
            require((published / "current.json").read_bytes() == index, name + ": previous index changed")
            report["packaging_negatives"][name] = {"rejected": True, "previous_index_preserved": True, "reason": str(error)}
        else:
            raise InputError(name + " unexpectedly published")

    mutations = (
        ("tampered example", fixture / "evidence/build-release/android-kernel/example/stripped/libLeviLaminaP6Example.so", lambda data: b"BAD!" + data[4:]),
        ("tampered P5 artifact", fixture / "evidence/build-release/.prelink/android/LeviLaminaP6Example/libbedrock_runtime_thunks.a", lambda data: data + b"changed"),
        ("stale source", mirror / "src-android/ll/core/KernelRuntime.cpp", lambda data: data + b"\n// changed after compilation\n"),
    )
    for name, path, change in mutations:
        saved = path.read_bytes()
        try:
            path.write_bytes(change(saved))
            rejected(name)
        finally:
            path.write_bytes(saved)
    with patch.object(package.os, "replace", side_effect=OSError("injected index switch failure")):
        rejected("index switch failure")
    require(publish() == first and (published / "current.json").read_bytes() == index, "repeat publication differs")
    report.update(passed=True, packaging_repeat_identical=True)
    (out / "results.json").write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print("Artifact matrix passed; previous packages survived every injected failure.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repository", type=Path, default=Path(__file__).resolve().parent.parent)
    parser.add_argument("--build-a", type=Path, required=True)
    parser.add_argument("--build-b", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    try:
        validate(args.repository, args.build_a, args.build_b, args.output)
    except (InputError, OSError, ValueError, KeyError) as error:
        raise SystemExit("P6 artifact validation rejected: " + str(error))
