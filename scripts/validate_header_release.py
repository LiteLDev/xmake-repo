#!/usr/bin/env python3
"""Validate a published four-layer LeviLamina Header release without changing it."""

from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re
from typing import Any, Iterable


LAYERS = ("src", "src-client", "src-server")
PLATFORM_LAYERS = {
    "client": "src-client",
    "server": "src-server",
    "android": "src-client",
}
LISTS: tuple[str, ...] = ()
HARD_DENY_ROOTS = {value.casefold() for value in ("Xal", "pplx", "web", "cll", "swappy", "gamesdk", "pgs")}
INCLUDE = re.compile(r'^\s*#\s*include\s*["<](mc/[^">]+)[">]', re.MULTILINE)
SYNTHETIC = re.compile(
    r"(?:<lambda|\(lambda at |`anonymous namespace'|\(anonymous namespace\)|<unnamed-type-)",
    re.IGNORECASE,
)
ABSOLUTE_WINDOWS = re.compile(r"^[A-Za-z]:[\\/]")
FULL_COMMIT = re.compile(r"[0-9a-f]{40}\Z")
SYNC_GATES = (
    "python", "platform_fidelity", "release_validator",
    "windows_client_debug", "windows_client_release",
    "windows_server_debug", "windows_server_release",
    "android_debug", "android_release", "android_all_open_layout", "header_verifier",
)


class ValidationError(RuntimeError):
    pass


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().upper()


def text_source_sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes().replace(b"\r\n", b"\n")).hexdigest().upper()


def collect_layer(root: Path, layer: str) -> dict[str, Path]:
    layer_root = root / layer
    if not layer_root.is_dir():
        raise ValidationError(f"missing Header layer: {layer}")
    result: dict[str, Path] = {}
    casefolded: dict[str, str] = {}
    for header in layer_root.joinpath("mc").rglob("*.h"):
        relative = header.relative_to(layer_root).as_posix()
        folded = relative.casefold()
        previous = casefolded.get(folded)
        if previous is not None and previous != relative:
            raise ValidationError(f"case-insensitive path collision in {layer}: {previous} vs {relative}")
        casefolded[folded] = relative
        result[relative] = header
    if not result:
        raise ValidationError(f"Header layer is empty: {layer}")
    return result


def build_effective(common: dict[str, Path], platform: dict[str, Path], platform_name: str) -> dict[str, Path]:
    effective = dict(common)
    for relative, path in platform.items():
        if relative in common and common[relative].read_bytes() != path.read_bytes():
            raise ValidationError(f"non-identical common/{platform_name} overlap: {relative}")
        effective[relative] = path
    folded: dict[str, str] = {}
    for relative in effective:
        key = relative.casefold()
        previous = folded.get(key)
        if previous is not None and previous != relative:
            raise ValidationError(f"case-insensitive effective {platform_name} collision: {previous} vs {relative}")
        folded[key] = relative
    try:
        from .sync_upstream_headers import header_is_present
    except ImportError:
        from sync_upstream_headers import header_is_present
    return {name: path for name, path in effective.items()
            if header_is_present(path.read_bytes(), platform_name)}


def projected_content(data: bytes, platform: str) -> bytes:
    try:
        from .sync_upstream_headers import project_declarations
    except ImportError:
        from sync_upstream_headers import project_declarations
    return project_declarations(data.replace(b"\r\n", b"\n"), platform)


def read_content(path: Path, content_cache: dict[Path, bytes] | None = None) -> bytes:
    return content_cache[path] if content_cache is not None else path.read_bytes()


def validate_includes(effective: dict[str, Path], platform_name: str, content_cache: dict[Path, bytes] | None = None) -> None:
    available = set(effective)
    for relative, path in effective.items():
        text = projected_content(read_content(path, content_cache), platform_name).decode("utf-8-sig", errors="replace")
        for include in INCLUDE.findall(text):
            if include not in available:
                raise ValidationError(f"unresolved {platform_name} include in {relative}: {include}")


def validate_forbidden_content(root: Path, layers: dict[str, dict[str, Path]]) -> None:
    for layer, paths in layers.items():
        for relative in paths:
            components = [part.casefold() for part in Path(relative).parts]
            if any(component in HARD_DENY_ROOTS for component in components):
                raise ValidationError(f"hard-deny root leaked into {layer}: {relative}")
            if SYNTHETIC.search(relative):
                raise ValidationError(f"synthetic type path leaked into {layer}: {relative}")


def release_entries(root: Path, layers: dict[str, dict[str, Path]]) -> list[tuple[str, Path]]:
    entries: list[tuple[str, Path]] = []
    for layer in LAYERS:
        entries.extend((f"{layer}/{relative}", path) for relative, path in layers[layer].items())
    entries.extend((name, root / name) for name in LISTS)
    return sorted(entries, key=lambda item: item[0])


def compute_release_manifest(
    root: Path, layers: dict[str, dict[str, Path]], content_cache: dict[Path, bytes] | None = None,
) -> tuple[int, str]:
    digest = hashlib.sha256()
    entries = release_entries(root, layers)
    for relative, path in entries:
        digest.update(relative.encode("utf-8"))
        digest.update(b"\0")
        if content_cache is not None:
            digest.update(content_cache[path])
        else:
            with path.open("rb") as stream:
                for block in iter(lambda: stream.read(1024 * 1024), b""):
                    digest.update(block)
        digest.update(b"\0")
    return len(entries), digest.hexdigest().upper()


def reject_absolute_paths(value: Any, location: str = "$") -> None:
    if isinstance(value, dict):
        for key, child in value.items():
            reject_absolute_paths(child, f"{location}.{key}")
    elif isinstance(value, list):
        for index, child in enumerate(value):
            reject_absolute_paths(child, f"{location}[{index}]")
    elif isinstance(value, str) and (ABSOLUTE_WINDOWS.match(value) or value.startswith("/")):
        raise ValidationError(f"machine-local absolute path in metadata at {location}")


def validate_metadata(
    root: Path,
    layers: dict[str, dict[str, Path]],
    rows: int,
    manifest_hash: str,
    content_cache: dict[Path, bytes] | None = None,
) -> dict[str, Any]:
    path = root / "header-release.json"
    if not path.is_file():
        raise ValidationError("missing header-release.json")
    try:
        metadata = json.loads(path.read_text(encoding="utf-8"))
    except json.JSONDecodeError as exc:
        raise ValidationError(f"invalid header-release.json: {exc}") from exc
    if metadata.get("schema_version") != 1:
        raise ValidationError("header-release.json schema_version must be 1")
    reject_absolute_paths(metadata)
    expected_layers = {layer: len(layers[layer]) for layer in LAYERS}
    if metadata.get("layers") != expected_layers:
        raise ValidationError(f"Header layer counts do not match metadata: {expected_layers}")
    manifest = metadata.get("manifest", {})
    if manifest.get("rows") != rows or manifest.get("sha256") != manifest_hash:
        raise ValidationError("release manifest identity does not match metadata")
    validate_sync_metadata(root, layers, metadata, content_cache)
    return metadata


def effective_git_identity(paths: dict[str, Path], content_cache: dict[Path, bytes] | None = None, platform: str | None = None) -> dict[str, Any]:
    digest = hashlib.sha256()
    for name, path in sorted(paths.items()):
        content = read_content(path, content_cache).replace(b"\r\n", b"\n")
        if platform is not None:
            content = projected_content(content, platform)
        if b"\r" in content:
            raise ValidationError(f"non-canonical Header newline: {name}")
        digest.update(name.encode("utf-8") + b"\0" + content + b"\0")
    return {"headers": len(paths), "sha256": digest.hexdigest().upper()}


def validate_sync_metadata(
    root: Path, layers: dict[str, dict[str, Path]], metadata: dict[str, Any], content_cache: dict[Path, bytes] | None = None,
) -> None:
    inputs = metadata.get("inputs", {})
    sources = [inputs.get(name, {}) for name in ("windows_client", "windows_server")]
    provenance = metadata.get("provenance", {})
    if not provenance and not any(source.get("source_kind") == "git-header" for source in sources):
        return  # Original schema-v1 P1 release remains supported.
    if provenance.get("kind") != "upstream-header-sync":
        raise ValidationError("Git Header input requires upstream-header-sync provenance")
    for field in ("base_release_commit", "upstream_header_commit"):
        if not FULL_COMMIT.fullmatch(str(provenance.get(field, ""))):
            raise ValidationError(f"sync provenance requires full {field}")
    for platform, source in zip(("client", "server"), sources):
        if source.get("source_kind") != "git-header" or source.get("commit") != provenance["upstream_header_commit"]:
            raise ValidationError("Windows Header source does not match the upstream commit")
        if "sha256" in source:
            raise ValidationError("Git Header input cannot reuse a PDB input hash")
        if source.get("effective_view") != provenance.get("effective_views", {}).get(platform):
            raise ValidationError("Windows Header source effective identity mismatch")
        source_identity = provenance.get("source_effective_views", provenance["effective_views"]).get(platform)
        if source.get("source_effective_view", source["effective_view"]) != source_identity:
            raise ValidationError("Windows upstream source identity mismatch")
    for platform, layer in PLATFORM_LAYERS.items():
        paths = build_effective(layers["src"], layers[layer], platform)
        if effective_git_identity(paths, content_cache, platform) != provenance.get("effective_views", {}).get(platform):
            raise ValidationError(f"{platform} Git content identity does not match provenance")
        originals: dict[str, bytes] = {}
        for adjustment in provenance.get("infrastructure_adjustments", []):
            if adjustment.get("platform") not in ("client", "server"):
                raise ValidationError("infrastructure adjustment is not Windows-only")
            if adjustment["platform"] != platform:
                continue
            name = adjustment.get("path")
            if name != "mc/_HeaderOutputPredefine.h" or adjustment.get("kind") != "concurrentqueue-include-trailing-space":
                raise ValidationError("unapproved Header infrastructure adjustment")
            if name in originals or name not in paths:
                raise ValidationError("duplicate or missing infrastructure adjustment")
            published = projected_content(read_content(paths[name], content_cache), platform)
            line = b'#include "concurrentqueue.h"\n'
            if published.count(line) != 1:
                raise ValidationError("unexpected infrastructure include")
            original = published.replace(line, b'#include "concurrentqueue.h" \n')
            if hashlib.sha256(published).hexdigest().upper() != adjustment.get("published_sha256"):
                raise ValidationError("published infrastructure identity mismatch")
            if hashlib.sha256(original).hexdigest().upper() != adjustment.get("source_sha256"):
                raise ValidationError("upstream infrastructure identity mismatch")
            originals[name] = original
        source_digest = hashlib.sha256()
        for name, path in sorted(paths.items()):
            content = originals[name] if name in originals else projected_content(read_content(path, content_cache), platform)
            source_digest.update(name.encode("utf-8") + b"\0" + content + b"\0")
        source_identity = {"headers": len(paths), "sha256": source_digest.hexdigest().upper()}
        if source_identity != provenance.get("source_effective_views", provenance["effective_views"]).get(platform):
            raise ValidationError(f"{platform} source reconstruction does not match upstream provenance")
    for layer in LAYERS:
        if (root / layer / "ll").exists():
            raise ValidationError("Header release must not contain ll infrastructure")
    dependency_file = root / "android-dependencies.lock.json"
    expected_dependency = provenance.get("android_dependency_manifest_sha256")
    if not dependency_file.is_file() or sha256_file(dependency_file) != expected_dependency:
        raise ValidationError("Android dependency manifest changed during Header synchronization")
    if metadata.get("android_toolchain", {}).get("dependency_manifest_sha256") != expected_dependency:
        raise ValidationError("Android toolchain dependency identity mismatch")
    baseline = metadata.get("historical_baseline", {})
    if not FULL_COMMIT.fullmatch(str(baseline.get("commit", ""))):
        raise ValidationError("missing immutable historical release baseline")
    if inputs.get("android") != baseline.get("metadata", {}).get("inputs", {}).get("android"):
        raise ValidationError("Android input identity changed during Header synchronization")
    validation = metadata.get("validation", {})
    if set(validation) != set(SYNC_GATES):
        raise ValidationError("sync validation must record the current gate set, not old pass flags")
    for gate, evidence in validation.items():
        if not isinstance(evidence, dict) or evidence.get("status") not in ("pending", "passed", "failed", "blocked"):
            raise ValidationError(f"invalid sync gate status: {gate}")
        if evidence.get("status") == "passed":
            if evidence.get("manifest_sha256") != metadata["manifest"]["sha256"]:
                raise ValidationError(f"stale sync validation subject: {gate}")
            relative = evidence.get("report")
            if not isinstance(relative, str) or not relative.startswith("docs/validation/"):
                raise ValidationError(f"missing tracked sync gate report: {gate}")
            report = root / relative
            if not report.resolve().is_relative_to((root.resolve() / "docs" / "validation")):
                raise ValidationError(f"sync report escapes its directory: {gate}")
            if not report.is_file() or sha256_file(report) != evidence.get("report_sha256"):
                raise ValidationError(f"sync gate report identity mismatch: {gate}")
            try:
                receipt = json.loads(report.read_text(encoding="utf-8"))
            except (OSError, json.JSONDecodeError) as exc:
                raise ValidationError(f"invalid sync gate receipt: {gate}") from exc
            if receipt.get("gate") != gate or receipt.get("status") != "passed" or receipt.get("manifest_sha256") != metadata["manifest"]["sha256"]:
                raise ValidationError(f"sync gate receipt does not certify this result: {gate}")
            for source_name, expected_hash in receipt.get("source_files", {}).items():
                source_path = root / source_name
                if source_path.is_symlink() or not source_path.resolve().is_relative_to(root.resolve()):
                    raise ValidationError(f"unsafe sync gate source reference: {gate}")
                if not source_path.is_file() or text_source_sha256(source_path) != expected_hash:
                    raise ValidationError(f"sync gate implementation changed after validation: {gate}")


def require_sync_validation(metadata: dict[str, Any]) -> None:
    if metadata.get("provenance", {}).get("kind") != "upstream-header-sync":
        raise ValidationError("publication requires a synchronized Header release")
    missing = [gate for gate in SYNC_GATES if metadata.get("validation", {}).get(gate, {}).get("status") != "passed"]
    if missing:
        raise ValidationError("Header publication gates are incomplete: " + ", ".join(missing))


def validate_release(root: Path) -> dict[str, Any]:
    root = root.resolve()
    if (root / "src-android").exists():
        raise ValidationError("Android Headers must be part of src/src-client")
    layers = {layer: collect_layer(root, layer) for layer in LAYERS}
    content_cache = {path: path.read_bytes() for _, path in release_entries(root, layers)}
    effective = {
        platform: build_effective(layers["src"], layers[layer], platform)
        for platform, layer in PLATFORM_LAYERS.items()
    }
    for platform, paths in effective.items():
        validate_includes(paths, platform, content_cache)
    validate_forbidden_content(root, layers)
    rows, manifest_hash = compute_release_manifest(root, layers, content_cache)
    metadata = validate_metadata(root, layers, rows, manifest_hash, content_cache)
    return {
        "schema_version": 1,
        "release": metadata.get("release"),
        "layers": {layer: len(paths) for layer, paths in layers.items()},
        "effective": {platform: len(paths) for platform, paths in effective.items()},
        "manifest": {"rows": rows, "sha256": manifest_hash},
    }


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--require-validated-sync", action="store_true")
    return parser.parse_args()


def main() -> int:
    arguments = parse_arguments()
    try:
        if arguments.require_validated_sync:
            require_sync_validation(json.loads((arguments.root / "header-release.json").read_text(encoding="utf-8")))
        summary = validate_release(arguments.root)
    except ValidationError as exc:
        print(f"error: {exc}")
        return 1
    print(json.dumps(summary, indent=2, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
