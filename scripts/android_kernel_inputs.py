#!/usr/bin/env python3
"""Authenticate explicit P6 inputs without downloading or changing producer trees."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import subprocess
from typing import Any

import materialize_android_dependencies as dependencies
import validate_header_release as headers


class InputError(RuntimeError):
    pass


def sha(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(4 * 1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().upper()


def unique_object(pairs):
    result = {}
    for key, value in pairs:
        if key in result:
            raise InputError(f"duplicate JSON field: {key}")
        result[key] = value
    return result


def read_json(path: Path) -> dict:
    value = json.loads(path.read_text(encoding="utf-8-sig"), object_pairs_hook=unique_object)
    if not isinstance(value, dict):
        raise InputError(f"JSON object required: {path.name}")
    return value


def command(args: list[str], cwd: Path | None = None) -> str:
    result = subprocess.run(args, cwd=cwd, capture_output=True, text=True, encoding="utf-8", errors="replace")
    if result.returncode:
        raise InputError(result.stderr.strip() or result.stdout.strip() or f"command failed: {args[0]}")
    return result.stdout.strip()


def git(root: Path, *args: str) -> str:
    return command(["git", "-C", str(root), *args])


def required_path(value: str | Path, label: str, directory: bool = False) -> Path:
    if not value or not str(value).strip():
        raise InputError(f"missing input: {label}")
    path = Path(value)
    if not path.is_absolute():
        raise InputError(f"absolute input required: {label}")
    path = path.resolve()
    if not (path.is_dir() if directory else path.is_file()):
        raise InputError(f"missing input: {label}")
    return path


def check_file(path: Path, identity: dict, label: str) -> None:
    if "bytes" in identity and path.stat().st_size != identity["bytes"]:
        raise InputError(f"file size mismatch: {label}")
    if sha(path) != identity["sha256"]:
        raise InputError(f"SHA-256 mismatch: {label}")


def clean_checkout(root: Path, commit: str, label: str) -> None:
    if git(root, "rev-parse", "HEAD") != commit:
        raise InputError(f"Git source mismatch: {label}")
    if git(root, "status", "--porcelain=v1", "--untracked-files=all"):
        raise InputError(f"Git source is not clean: {label}")
    # Sparse/assume-unchanged entries must not conceal missing or changed input files.
    if any(line and line[0] != "H" for line in git(root, "ls-files", "-v").splitlines()):
        raise InputError(f"unchecked Git entries: {label}")


def validate_header_snapshot(root: Path, lock: dict) -> dict:
    clean_checkout(root, lock["commits"]["S"], "Header S")
    if git(root, "branch", "--show-current"):
        raise InputError("Header input must be a detached S worktree")
    for layer in ("src", "src-android", "src-client", "src-server"):
        if (root / layer / "ll").exists() or (root / layer / "pl").exists():
            raise InputError("Header input would shadow LL or PL interfaces")
    metadata = read_json(root / "header-release.json")
    headers.require_sync_validation(metadata)
    if metadata["manifest"]["sha256"] != lock["header"]["manifest_sha256"]:
        raise InputError("Header publication manifest mismatch")
    if metadata["provenance"]["upstream_header_commit"] != lock["commits"]["H"]:
        raise InputError("Header provenance mismatch")
    # S is immutable and already release-validated. Check every tracked receipt and
    # the checkout state here; actual compiled MC files are independently compared
    # with their S Git blobs by the dependency-trace verifier after compilation.
    for name, gate in metadata["validation"].items():
        report = (root / gate["report"]).resolve()
        if not report.is_relative_to(root / "docs/validation"):
            raise InputError(f"unsafe Header receipt: {name}")
        check_file(report, {"sha256": gate["report_sha256"]}, "Header receipt " + name)
    return metadata


def validate_dependencies(root: Path, runtime: dict, ndk: Path, lock: dict) -> list[Path]:
    manifest_path = root / "android-dependencies.lock.json"
    check_file(manifest_path, {"sha256": lock["dependency_manifest_sha256"]}, "P1 dependency manifest")
    manifest = read_json(manifest_path)
    expected = dependencies.validate_manifest(manifest)
    for key in ("schema_version", "target", "architecture", "api_level", "ndk_revision", "compile_definitions"):
        if runtime.get(key) != manifest.get(key):
            raise InputError(f"P1 dependency runtime lock mismatch: {key}")
    if runtime.get("manifest_sha256") != lock["dependency_manifest_sha256"]:
        raise InputError("P1 dependency manifest identity mismatch")
    if Path(runtime.get("ndk_root", "")).resolve() != ndk:
        raise InputError("P1 dependency lock uses another NDK")
    sources = runtime.get("sources", [])
    if len(sources) != len(expected) or len({item["name"] for item in sources}) != len(sources):
        raise InputError("dependency source set mismatch")
    source_map = {item["name"]: item for item in sources}
    roots, required = [], []
    for entry in expected:
        source = source_map.get(entry["name"])
        if source is None or source.get("commit") != entry["commit"]:
            raise InputError("dependency source identity mismatch: " + entry["name"])
        checkout = required_path(source["path"], entry["name"], directory=True)
        clean_checkout(checkout, entry["commit"], entry["name"])
        include_dirs, required_headers = dependencies.validate_dependency_tree(checkout, entry)
        roots.extend(include_dirs)
        required.extend(required_headers)
    glue = ndk / "sources/android/native_app_glue"
    roots.append(glue)
    required.append(glue / "android_native_app_glue.h")
    if [Path(v).resolve() for v in runtime.get("include_roots", [])] != roots:
        raise InputError("dependency include roots/order mismatch")
    if [Path(v).resolve() for v in runtime.get("required_headers", [])] != required:
        raise InputError("dependency required-Header list mismatch")
    if not all(p.is_file() for p in required):
        raise InputError("missing required dependency Header")
    for include_dir in roots:
        if (include_dir / "mc").exists():
            raise InputError("dependency include root would shadow Minecraft Headers")
    return roots


def authenticate(repo: Path, inputs: dict[str, str], api: int = 28, arch: str = "arm64-v8a") -> dict[str, Any]:
    repo = repo.resolve()
    lock_path = repo / "config/android-kernel-inputs.lock.json"
    lock = read_json(lock_path)
    if api != lock["binary"]["api_level"] or arch != lock["binary"]["architecture"]:
        raise InputError("P6 binary requires API 28 and arm64-v8a")
    folders = {"header_root", "preloader_root", "ndk"}
    names = (*folders, "dependency_lock", "prelink", "runtime_manifest", "bmb", "provider", "target")
    resolved = {name: required_path(inputs.get(name, ""), name, name in folders) for name in names}
    if resolved["header_root"] == repo:
        raise InputError("Header input must be a separate S snapshot")
    for name in ("provider", "bmb", "target"):
        check_file(resolved[name], lock[name], name)
    check_file(resolved["prelink"], {"sha256": lock["prelink_executable_sha256"]}, "P5 executable")
    check_file(resolved["runtime_manifest"], {"sha256": lock["runtime_manifest_sha256"]}, "runtime manifest")
    if read_json(resolved["runtime_manifest"]) != lock["runtime_manifest"]:
        raise InputError("runtime package metadata differs from frozen inputs")
    ndk = resolved["ndk"]
    if dependencies.read_ndk_revision(ndk) != lock["ndk"]["revision"]:
        raise InputError("NDK must be r28c / 28.2.13676358")
    for name, fingerprint in lock["ndk"]["files"].items():
        check_file(ndk / name, {"sha256": fingerprint}, "NDK " + name)
    clean_checkout(resolved["preloader_root"], lock["commits"]["PL"], "PL SDK")
    metadata = validate_header_snapshot(resolved["header_root"], lock)
    roots = validate_dependencies(resolved["header_root"], read_json(resolved["dependency_lock"]), ndk, lock)
    direct = [resolved["header_root"] / "src-android", resolved["header_root"] / "src", repo / "src-android", repo / "src"]
    sdk = [resolved["preloader_root"] / "src-android", resolved["preloader_root"] / "src"]
    for path in sdk:
        if (path / "mc").exists():
            raise InputError("PL SDK include root would shadow Minecraft Headers")
    return {"schema_version": 1, "phase": "G2", "repository": str(repo),
            "lock_sha256": sha(lock_path), "inputs": {k: str(v) for k, v in resolved.items()},
            "commits": lock["commits"], "binary": lock["binary"],
            "include_roots": [str(v) for v in direct], "system_include_roots": [str(v) for v in sdk + roots],
            "header_manifest_sha256": metadata["manifest"]["sha256"], "package": lock["package"]}


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--api", type=int, required=True)
    parser.add_argument("--arch", required=True)
    for name in ("header-root", "dependency-lock", "preloader-root", "prelink", "runtime-manifest", "bmb", "provider", "target", "ndk"):
        parser.add_argument("--" + name, required=True)
    args = parser.parse_args()
    try:
        output = args.output.resolve()
        if output.is_relative_to(args.repo.resolve()):
            raise InputError("validation output must be outside the source worktree")
        result = authenticate(args.repo, vars(args), args.api, args.arch)
        output.parent.mkdir(parents=True, exist_ok=True)
        staged = output.with_suffix(output.suffix + ".tmp")
        staged.write_text(json.dumps(result, indent=2, sort_keys=True) + "\n", encoding="utf-8", newline="\n")
        staged.replace(output)
        print("P6 inputs authenticated; Header API21 is unchanged; binary API28 is selected.")
    except (InputError, OSError, ValueError, KeyError, dependencies.MaterializationError, headers.ValidationError) as exc:
        parser.exit(1, f"P6 input rejected: {exc}\n")


if __name__ == "__main__":
    main()
