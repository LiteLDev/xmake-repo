#!/usr/bin/env python3
"""Materialize the exact Android Header dependencies and emit a pathful runtime lock."""

from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import re
import stat
import shutil
import subprocess
import tempfile
from typing import Any, Callable
import uuid


EXPECTED_SCHEMA = 1
EXPECTED_TARGET = "aarch64-linux-android21"
EXPECTED_ARCHITECTURE = "arm64-v8a"
EXPECTED_API_LEVEL = 21
EXPECTED_NDK_REVISION = "28.2.13676358"
EXPECTED_LOCK_HASH = "D24CD9990677805CE0F0244408CF50F2B5825DD2D240D5F969E5924CE1E36EA9"
HTTPS_GIT_REPOSITORY = re.compile(r"https://github\.com/[A-Za-z0-9_.-]+/[A-Za-z0-9_.-]+\.git\Z")
FULL_COMMIT = re.compile(r"[0-9a-f]{40}\Z")
SAFE_NAME = re.compile(r"[A-Za-z0-9_.-]+\Z")


class MaterializationError(RuntimeError):
    pass


def load_json(path: Path) -> dict[str, Any]:
    try:
        value = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError) as exc:
        raise MaterializationError(f"failed to read JSON {path}: {exc}") from exc
    if not isinstance(value, dict):
        raise MaterializationError(f"JSON root must be an object: {path}")
    return value


def safe_relative(value: str, field: str) -> PurePosixPath:
    if not isinstance(value, str) or not value or "\\" in value:
        raise MaterializationError(f"{field} must be a non-empty slash-separated relative path")
    path = PurePosixPath(value)
    if path.is_absolute() or any(part in ("", ".", "..") for part in path.parts):
        if value != ".":
            raise MaterializationError(f"{field} escapes its dependency root: {value}")
    return path


def validate_manifest(manifest: dict[str, Any]) -> list[dict[str, Any]]:
    expected = {
        "schema_version": EXPECTED_SCHEMA,
        "target": EXPECTED_TARGET,
        "architecture": EXPECTED_ARCHITECTURE,
        "api_level": EXPECTED_API_LEVEL,
        "ndk_revision": EXPECTED_NDK_REVISION,
        "lock_hash": EXPECTED_LOCK_HASH,
    }
    for key, value in expected.items():
        if manifest.get(key) != value:
            raise MaterializationError(f"manifest {key} mismatch: expected {value!r}")

    dependencies = manifest.get("dependencies")
    if not isinstance(dependencies, list) or not dependencies:
        raise MaterializationError("manifest dependencies must be a non-empty array")

    names: set[str] = set()
    for dependency in dependencies:
        if not isinstance(dependency, dict):
            raise MaterializationError("each dependency must be an object")
        name = dependency.get("name")
        repository = dependency.get("repository")
        commit = dependency.get("commit")
        if not isinstance(name, str) or not SAFE_NAME.fullmatch(name) or name in names:
            raise MaterializationError(f"invalid or duplicate dependency name: {name!r}")
        names.add(name)
        if not isinstance(repository, str) or not HTTPS_GIT_REPOSITORY.fullmatch(repository):
            raise MaterializationError(f"dependency {name} has a non-pinned HTTPS GitHub repository")
        if not isinstance(commit, str) or not FULL_COMMIT.fullmatch(commit):
            raise MaterializationError(f"dependency {name} commit must be 40 lowercase hex characters")
        roots = dependency.get("include_roots")
        headers = dependency.get("required_headers")
        if not isinstance(roots, list) or not roots:
            raise MaterializationError(f"dependency {name} has no include roots")
        if not isinstance(headers, list) or not headers:
            raise MaterializationError(f"dependency {name} has no required headers")
        for root in roots:
            safe_relative(root, f"{name}.include_roots")
        for header in headers:
            safe_relative(header, f"{name}.required_headers")
    return dependencies


def run_command(arguments: list[str], cwd: Path | None = None) -> str:
    try:
        completed = subprocess.run(
            arguments,
            cwd=cwd,
            check=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            encoding="utf-8",
            errors="replace",
        )
    except (OSError, subprocess.CalledProcessError) as exc:
        detail = getattr(exc, "stderr", "")
        raise MaterializationError(f"command failed: {arguments!r}\n{detail}") from exc
    return completed.stdout.strip()


def resolve_inside(root: Path, relative: str, field: str) -> Path:
    candidate = (root / Path(*safe_relative(relative, field).parts)).resolve()
    try:
        candidate.relative_to(root.resolve())
    except ValueError as exc:
        raise MaterializationError(f"{field} escapes dependency root: {relative}") from exc
    return candidate


def validate_dependency_tree(
    root: Path,
    dependency: dict[str, Any],
    runner: Callable[[list[str], Path | None], str] = run_command,
) -> tuple[list[Path], list[Path]]:
    name = dependency["name"]
    if not root.is_dir():
        raise MaterializationError(f"dependency directory is missing: {name}")
    head = runner(["git", "rev-parse", "HEAD"], root).lower()
    if head != dependency["commit"]:
        raise MaterializationError(f"dependency {name} HEAD mismatch: {head}")

    include_roots: list[Path] = []
    for relative in dependency["include_roots"]:
        include_root = resolve_inside(root, relative, f"{name}.include_roots")
        if not include_root.is_dir():
            raise MaterializationError(f"dependency {name} include root is missing: {relative}")
        include_roots.append(include_root)

    required_paths: list[Path] = []
    for header in dependency["required_headers"]:
        matches = [resolve_inside(include_root, header, f"{name}.required_headers") for include_root in include_roots]
        match = next((path for path in matches if path.is_file()), None)
        if match is None:
            raise MaterializationError(f"dependency {name} required header is missing: {header}")
        required_paths.append(match)
    return include_roots, required_paths


def materialize_dependency(
    destination: Path,
    dependency: dict[str, Any],
    runner: Callable[[list[str], Path | None], str] = run_command,
) -> None:
    destination.mkdir(parents=False, exist_ok=False)
    runner(["git", "init", "--quiet"], destination)
    runner(["git", "remote", "add", "origin", dependency["repository"]], destination)
    runner(["git", "fetch", "--quiet", "--depth", "1", "origin", dependency["commit"]], destination)
    runner(["git", "checkout", "--quiet", "--detach", dependency["commit"]], destination)
    validate_dependency_tree(destination, dependency, runner)


def validate_cache(
    output: Path,
    dependencies: list[dict[str, Any]],
    runner: Callable[[list[str], Path | None], str] = run_command,
) -> tuple[list[Path], list[Path]]:
    include_roots: list[Path] = []
    required_headers: list[Path] = []
    for dependency in dependencies:
        roots, headers = validate_dependency_tree(output / dependency["name"], dependency, runner)
        include_roots.extend(roots)
        required_headers.extend(headers)
    return include_roots, required_headers


def read_ndk_revision(ndk: Path) -> str:
    properties = ndk / "source.properties"
    if not properties.is_file():
        raise MaterializationError(f"NDK source.properties is missing: {properties}")
    for line in properties.read_text(encoding="utf-8").splitlines():
        if line.startswith("Pkg.Revision") and "=" in line:
            return line.split("=", 1)[1].strip()
    raise MaterializationError(f"NDK revision is missing from {properties}")


def atomic_replace_directory(staged: Path, destination: Path) -> None:
    backup = destination.with_name(f"{destination.name}.backup-{uuid.uuid4().hex}")
    moved_old = False
    try:
        if destination.exists():
            destination.rename(backup)
            moved_old = True
        staged.rename(destination)
    except Exception:
        if moved_old and not destination.exists() and backup.exists():
            backup.rename(destination)
        raise
    else:
        if backup.exists():
            remove_tree(backup)


def remove_tree(path: Path) -> None:
    def make_writable(function: Callable[..., Any], value: str, _error: Any) -> None:
        os.chmod(value, stat.S_IWRITE)
        function(value)

    shutil.rmtree(path, onexc=make_writable)


def write_runtime_lock(path: Path, value: dict[str, Any]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_name(f"{path.name}.tmp-{uuid.uuid4().hex}")
    temporary.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8", newline="\n")
    os.replace(temporary, path)


def materialize(
    manifest_path: Path,
    ndk: Path,
    output: Path,
    runtime_lock: Path,
    runner: Callable[[list[str], Path | None], str] = run_command,
) -> dict[str, Any]:
    manifest_path = manifest_path.resolve()
    ndk = ndk.resolve()
    output = output.resolve()
    runtime_lock = runtime_lock.resolve()
    manifest_bytes = manifest_path.read_bytes()
    manifest = load_json(manifest_path)
    dependencies = validate_manifest(manifest)

    revision = read_ndk_revision(ndk)
    if revision != EXPECTED_NDK_REVISION:
        raise MaterializationError(f"NDK revision mismatch: expected {EXPECTED_NDK_REVISION}, got {revision}")
    native_app_glue = ndk / "sources" / "android" / "native_app_glue"
    if not native_app_glue.is_dir() or not (native_app_glue / "android_native_app_glue.h").is_file():
        raise MaterializationError(f"NDK native_app_glue is incomplete: {native_app_glue}")

    output.parent.mkdir(parents=True, exist_ok=True)
    cache_valid = False
    if output.is_dir():
        try:
            validate_cache(output, dependencies, runner)
            cache_valid = True
        except MaterializationError:
            cache_valid = False

    if not cache_valid:
        staged = Path(tempfile.mkdtemp(prefix=f"{output.name}.tmp-", dir=output.parent))
        try:
            for dependency in dependencies:
                materialize_dependency(staged / dependency["name"], dependency, runner)
            validate_cache(staged, dependencies, runner)
            atomic_replace_directory(staged, output)
        except Exception:
            if staged.exists():
                remove_tree(staged)
            raise

    include_roots, required_headers = validate_cache(output, dependencies, runner)
    include_roots.append(native_app_glue.resolve())
    required_headers.append((native_app_glue / "android_native_app_glue.h").resolve())

    runtime_value = {
        "schema_version": EXPECTED_SCHEMA,
        "release_lane": manifest.get("release_lane"),
        "target": EXPECTED_TARGET,
        "architecture": EXPECTED_ARCHITECTURE,
        "api_level": EXPECTED_API_LEVEL,
        "ndk_revision": revision,
        "ndk_root": str(ndk),
        "lock_hash": EXPECTED_LOCK_HASH,
        "manifest_sha256": hashlib.sha256(manifest_bytes).hexdigest().upper(),
        "include_roots": [str(path) for path in include_roots],
        "required_headers": [str(path) for path in required_headers],
        "compile_definitions": manifest.get("compile_definitions", []),
        "sources": [
            {
                "name": dependency["name"],
                "path": str((output / dependency["name"]).resolve()),
                "commit": dependency["commit"],
            }
            for dependency in dependencies
        ],
    }
    write_runtime_lock(runtime_lock, runtime_value)
    return runtime_value


def parse_arguments() -> argparse.Namespace:
    repository_root = Path(__file__).resolve().parents[1]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--manifest", type=Path, default=repository_root / "android-dependencies.lock.json")
    parser.add_argument("--ndk", type=Path, required=True)
    parser.add_argument("--output", type=Path, default=repository_root / "build" / "android-deps")
    parser.add_argument(
        "--runtime-lock",
        type=Path,
        default=repository_root / "build" / "android-dependencies.runtime.json",
    )
    return parser.parse_args()


def main() -> int:
    arguments = parse_arguments()
    try:
        value = materialize(arguments.manifest, arguments.ndk, arguments.output, arguments.runtime_lock)
    except MaterializationError as exc:
        print(f"error: {exc}")
        return 1
    print(f"materialized {len(value['sources'])} dependencies")
    print(f"runtime lock: {arguments.runtime_lock.resolve()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
