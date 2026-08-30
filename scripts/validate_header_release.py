#!/usr/bin/env python3
"""Validate a published four-layer LeviLamina Header release without changing it."""

from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re
from typing import Any, Iterable


LAYERS = ("src", "src-client", "src-server", "src-android")
PLATFORM_LAYERS = {
    "client": "src-client",
    "server": "src-server",
    "android": "src-android",
}
LISTS: tuple[str, ...] = ()
HARD_DENY_ROOTS = {value.casefold() for value in ("Xal", "pplx", "web", "cll", "swappy", "gamesdk", "pgs")}
INCLUDE = re.compile(r'^\s*#\s*include\s*["<](mc/[^">]+)[">]', re.MULTILINE)
SYNTHETIC = re.compile(
    r"(?:<lambda|\(lambda at |`anonymous namespace'|\(anonymous namespace\)|<unnamed-type-)",
    re.IGNORECASE,
)
ABSOLUTE_WINDOWS = re.compile(r"^[A-Za-z]:[\\/]")


class ValidationError(RuntimeError):
    pass


def sha256_file(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest().upper()


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
    return effective


def validate_includes(effective: dict[str, Path], platform_name: str) -> None:
    available = set(effective)
    for relative, path in effective.items():
        text = path.read_text(encoding="utf-8-sig", errors="replace")
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


def compute_release_manifest(root: Path, layers: dict[str, dict[str, Path]]) -> tuple[int, str]:
    digest = hashlib.sha256()
    entries = release_entries(root, layers)
    for relative, path in entries:
        digest.update(relative.encode("utf-8"))
        digest.update(b"\0")
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
    return metadata


def validate_release(root: Path) -> dict[str, Any]:
    root = root.resolve()
    layers = {layer: collect_layer(root, layer) for layer in LAYERS}
    effective = {
        platform: build_effective(layers["src"], layers[layer], platform)
        for platform, layer in PLATFORM_LAYERS.items()
    }
    for platform, paths in effective.items():
        validate_includes(paths, platform)
    validate_forbidden_content(root, layers)
    rows, manifest_hash = compute_release_manifest(root, layers)
    metadata = validate_metadata(root, layers, rows, manifest_hash)
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
    return parser.parse_args()


def main() -> int:
    arguments = parse_arguments()
    try:
        summary = validate_release(arguments.root)
    except ValidationError as exc:
        print(f"error: {exc}")
        return 1
    print(json.dumps(summary, indent=2, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
