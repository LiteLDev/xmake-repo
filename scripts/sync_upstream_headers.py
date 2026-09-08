#!/usr/bin/env python3
"""Assemble Windows Git headers and an unchanged Android release in an isolated candidate."""

from __future__ import annotations

import argparse
import hashlib
import io
import json
from pathlib import Path, PurePosixPath
import re
import subprocess
from typing import Any

try:
    from . import validate_header_release as release
except ImportError:
    import validate_header_release as release


FULL_SHA = re.compile(r"[0-9a-f]{40}\Z")
GATES = release.SYNC_GATES


class SyncError(RuntimeError):
    pass


def git(repo: Path, *args: str) -> bytes:
    result = subprocess.run(["git", "-C", str(repo), *args], capture_output=True)
    if result.returncode:
        raise SyncError(result.stderr.decode("utf-8", "replace").strip())
    return result.stdout


def full_commit(repo: Path, ref: str) -> str:
    commit = git(repo, "rev-parse", "--verify", f"{ref}^{{commit}}").decode().strip()
    if not FULL_SHA.fullmatch(commit):
        raise SyncError("invalid Git commit")
    return commit


def safe_header(name: str) -> tuple[str, str]:
    path = PurePosixPath(name)
    if path.as_posix() != name or path.is_absolute() or "\\" in name or ":" in name or any(p in (".", "..") for p in path.parts):
        raise SyncError(f"unsafe Header path: {name}")
    if len(path.parts) < 3 or path.parts[0] not in release.LAYERS or path.parts[1] != "mc":
        raise SyncError(f"unexpected Header path: {name}")
    if path.suffix != ".h":
        raise SyncError(f"unexpected Header extension: {name}")
    return path.parts[0], "/".join(path.parts[1:])


def read_layers(repo: Path, commit: str) -> dict[str, dict[str, bytes]]:
    layers: dict[str, dict[str, bytes]] = {name: {} for name in release.LAYERS}
    records: list[tuple[str, str, bytes]] = []
    for record in git(repo, "ls-tree", "-r", "-z", commit, "--", *release.LAYERS).split(b"\0"):
        if not record:
            continue
        info, path_bytes = record.split(b"\t", 1)
        mode, kind, oid = info.split()
        name = path_bytes.decode("utf-8")
        layer, relative = safe_header(name)
        if mode not in (b"100644", b"100755") or kind != b"blob":
            raise SyncError(f"non-regular Header: {name}")
        records.append((layer, relative, oid))
    # git archive can apply eol attributes. cat-file without --filters reads
    # the actual immutable blob bytes, independently of the host checkout.
    object_ids = sorted({oid for _, _, oid in records})
    process = subprocess.run(
        ["git", "-C", str(repo), "cat-file", "--batch"],
        input=b"\n".join(object_ids) + b"\n", capture_output=True, check=True,
    )
    stream = io.BytesIO(process.stdout)
    objects: dict[bytes, bytes] = {}
    for expected in object_ids:
        oid, kind, size = stream.readline().split()
        if oid != expected or kind != b"blob":
            raise SyncError("unexpected Git batch response")
        data = stream.read(int(size))
        if stream.read(1) != b"\n" or len(data) != int(size):
            raise SyncError("truncated Git blob")
        if b"\r" in data:
            raise SyncError(f"Git Header blob is not canonical LF: {oid.decode()}")
        objects[oid] = data
    for layer, name, oid in records:
        layers[layer][name] = objects[oid]
    return layers


def effective(
    layers: dict[str, dict[str, bytes]], platform: str, *, common_first: bool = False,
) -> dict[str, bytes]:
    result = dict(layers["src"])
    for name, data in layers[release.PLATFORM_LAYERS[platform]].items():
        if name in result and result[name] != data:
            if common_first:
                continue
            raise SyncError(f"ambiguous common/{platform} Header: {name}")
        result[name] = data
    folded: dict[str, str] = {}
    for name in result:
        previous = folded.setdefault(name.casefold(), name)
        if previous != name:
            raise SyncError(f"case collision: {previous} vs {name}")
    return result


def identity(view: dict[str, bytes]) -> dict[str, Any]:
    digest = hashlib.sha256()
    for name, data in sorted(view.items()):
        digest.update(name.encode("utf-8") + b"\0" + data + b"\0")
    return {"headers": len(view), "sha256": digest.hexdigest().upper()}


def repartition(views: dict[str, dict[str, bytes]]) -> dict[str, dict[str, bytes]]:
    result: dict[str, dict[str, bytes]] = {name: {} for name in release.LAYERS}
    names = sorted(set().union(*(view.keys() for view in views.values())))
    folded: dict[str, str] = {}
    for name in names:
        previous = folded.setdefault(name.casefold(), name)
        if previous != name:
            raise SyncError(f"cross-platform case collision: {previous} vs {name}")
        values = [views[platform].get(name) for platform in release.PLATFORM_LAYERS]
        if values[0] is not None and values[0] == values[1] == values[2]:
            result["src"][name] = values[0]
        else:
            for platform, layer in release.PLATFORM_LAYERS.items():
                if name in views[platform]:
                    result[layer][name] = views[platform][name]
    return result


def write_json(path: Path, data: Any) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2, sort_keys=True) + "\n", encoding="utf-8", newline="\n")


def inputs(repo: Path, base: str, header: str) -> tuple[dict[str, Any], dict[str, dict[str, bytes]]]:
    base_layers = read_layers(repo, base)
    header_layers = read_layers(repo, header)
    upstream_build = git(repo, "show", f"{header}:xmake.lua").decode("utf-8")
    for platform in ("client", "server"):
        if f'add_includedirs("src", "src-{platform}")' not in upstream_build:
            raise SyncError("upstream include precedence changed; review it before assembling")
    views = {
        "client": effective(header_layers, "client", common_first=True),
        "server": effective(header_layers, "server", common_first=True),
        "android": effective(base_layers, "android"),
    }
    source_identities = {platform: identity(view) for platform, view in views.items()}
    adjustments = []
    for platform in ("client", "server"):
        name = "mc/_HeaderOutputPredefine.h"
        original = views[platform].get(name, b"")
        old_line = b'#include "concurrentqueue.h" \n'
        if old_line in original:
            if original.count(old_line) != 1:
                raise SyncError("unexpected concurrentqueue include multiplicity")
            adjusted = original.replace(old_line, b'#include "concurrentqueue.h"\n')
            views[platform][name] = adjusted
            adjustments.append({
                "platform": platform, "path": name, "kind": "concurrentqueue-include-trailing-space",
                "source_sha256": hashlib.sha256(original).hexdigest().upper(),
                "published_sha256": hashlib.sha256(adjusted).hexdigest().upper(),
            })
    old = json.loads(git(repo, "show", f"{base}:header-release.json"))
    metadata = {key: value for key, value in old.items() if key not in (
        "validation", "generator_predecessor_manifest", "tools", "layers", "manifest", "inputs", "provenance",
    )}
    metadata["inputs"] = {"android": old["inputs"]["android"]}
    for platform, source in (("client", "windows_client"), ("server", "windows_server")):
        metadata["inputs"][source] = {
            "source_kind": "git-header", "repository": "https://github.com/LiteLDev/LeviLamina",
            "commit": header, "source_effective_view": source_identities[platform],
            "effective_view": identity(views[platform]),
        }
    metadata["provenance"] = {
        "kind": "upstream-header-sync", "base_release_commit": base, "upstream_header_commit": header,
        "upstream_include_precedence": "common-before-platform (upstream xmake Header harness)",
        "content_algorithm": "sha256(path-utf8 + NUL + Git-LF-bytes + NUL), ordinal path order",
        "effective_views": {platform: identity(view) for platform, view in views.items()},
        "source_effective_views": source_identities,
        "infrastructure_adjustments": adjustments,
        "android_dependency_manifest_sha256": hashlib.sha256(
            git(repo, "show", f"{base}:android-dependencies.lock.json")
        ).hexdigest().upper(),
    }
    metadata["historical_baseline"] = old.get("historical_baseline", {"commit": base, "metadata": old})
    metadata["validation"] = {gate: {"status": "pending"} for gate in GATES}
    return metadata, repartition(views)


def stage(repo: Path, base: str, header: str, destination: Path) -> dict[str, Any]:
    if destination.exists():
        raise SyncError("staging destination already exists; inspect it or choose a new isolated path")
    metadata, layers = inputs(repo, base, header)
    destination.mkdir(parents=True)
    rows: list[dict[str, str]] = []
    for layer, headers in layers.items():
        (destination / layer / "mc").mkdir(parents=True)
        for name, data in sorted(headers.items()):
            path = destination / layer / name
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data.replace(b"\n", b"\r\n"))
            rows.append({"path": f"{layer}/{name}", "git_sha256": hashlib.sha256(data).hexdigest().upper()})
    file_layers = {layer: release.collect_layer(destination, layer) for layer in release.LAYERS}
    count, digest = release.compute_release_manifest(destination, file_layers)
    metadata["layers"] = {layer: len(headers) for layer, headers in layers.items()}
    metadata["manifest"] = {
        "algorithm": "sha256(path-utf8 + NUL + raw-bytes + NUL), ordinal path order",
        "scope": "four Header layers", "rows": count, "sha256": digest,
    }
    write_json(destination / "header-release.json", metadata)
    (destination / "android-dependencies.lock.json").write_bytes(
        git(repo, "show", f"{base}:android-dependencies.lock.json")
    )
    write_json(destination / "sync-files.json", sorted(rows, key=lambda row: row["path"]))
    return {"base": base, "header": header, "layers": metadata["layers"], "manifest": metadata["manifest"]}


def verify_fidelity(repo: Path, base: str, header: str, candidate: Path) -> dict[str, Any]:
    expected_metadata, expected = inputs(repo, base, header)
    metadata = json.loads((candidate / "header-release.json").read_text(encoding="utf-8"))
    for field in ("inputs", "provenance", "android_toolchain", "historical_baseline"):
        if metadata.get(field) != expected_metadata.get(field):
            raise SyncError(f"candidate {field} does not match frozen Git inputs")
    actual: dict[str, dict[str, bytes]] = {layer: {} for layer in release.LAYERS}
    for layer in release.LAYERS:
        for name, path in release.collect_layer(candidate, layer).items():
            actual[layer][name] = path.read_bytes().replace(b"\r\n", b"\n")
        if expected[layer] != actual[layer]:
            changed = sorted(name for name in expected[layer].keys() | actual[layer].keys()
                             if expected[layer].get(name) != actual[layer].get(name))
            raise SyncError(f"{layer} differs from deterministic partition: {changed[:8]}")
    return {platform: identity(effective(actual, platform)) for platform in release.PLATFORM_LAYERS}


def apply(repo: Path, base: str, header: str, staging: Path) -> dict[str, Any]:
    if full_commit(repo, "HEAD") != base or full_commit(repo, "MERGE_HEAD") != header:
        raise SyncError("apply requires the exact base HEAD and upstream MERGE_HEAD")
    if git(repo, "branch", "--show-current").decode().strip() != "codex/sync-upstream-header":
        raise SyncError("apply only operates in codex/sync-upstream-header")
    verify_fidelity(repo, base, header, staging)
    root = repo.resolve()
    tracked = {
        name.decode("utf-8") for name in git(repo, "ls-files", "--cached", "-z", "--", *release.LAYERS).split(b"\0") if name
    }
    sources = {layer: release.collect_layer(staging, layer) for layer in release.LAYERS}
    currents = {layer: release.collect_layer(repo, layer) for layer in release.LAYERS}
    for layer, headers in currents.items():
        for name, path in headers.items():
            if f"{layer}/{name}" not in tracked:
                expected = sources[layer].get(name)
                if expected is None or path.read_bytes() != expected.read_bytes():
                    raise SyncError(f"untracked Header would be overwritten or deleted: {layer}/{name}")
    changed = removed = 0
    for layer in release.LAYERS:
        source, current = sources[layer], currents[layer]
        for name in sorted(source.keys() | current.keys()):
            target = root / layer / name
            safe_header(f"{layer}/{name}")
            if target.is_symlink() or not target.resolve().is_relative_to(root / layer / "mc"):
                raise SyncError(f"unsafe candidate destination: {target}")
            if name not in source:
                target.unlink()
                removed += 1
            else:
                data = source[name].read_bytes()
                if not target.exists() or target.read_bytes() != data:
                    target.parent.mkdir(parents=True, exist_ok=True)
                    target.write_bytes(data)
                    changed += 1
    staged_metadata = json.loads((staging / "header-release.json").read_text(encoding="utf-8"))
    metadata_path = repo / "header-release.json"
    try:
        current_metadata = json.loads(metadata_path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError):
        current_metadata = {}
    stable_current = {key: value for key, value in current_metadata.items() if key != "validation"}
    stable_staged = {key: value for key, value in staged_metadata.items() if key != "validation"}
    if stable_current != stable_staged:
        metadata_path.write_bytes((staging / "header-release.json").read_bytes())
    return {"changed": changed, "removed": removed, "effective": verify_fidelity(repo, base, header, repo)}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("mode", choices=("stage", "verify", "apply"))
    parser.add_argument("--repo", type=Path, required=True)
    parser.add_argument("--base", required=True)
    parser.add_argument("--header", required=True)
    parser.add_argument("--staging", type=Path, required=True)
    args = parser.parse_args()
    try:
        base, header = full_commit(args.repo, args.base), full_commit(args.repo, args.header)
        if git(args.repo, "rev-parse", "--is-shallow-repository").strip() != b"false":
            raise SyncError("complete Git history is required")
        if args.mode == "stage":
            result = stage(args.repo, base, header, args.staging)
        elif args.mode == "apply":
            result = apply(args.repo, base, header, args.staging)
        else:
            result = verify_fidelity(args.repo, base, header, args.staging)
        print(json.dumps(result, indent=2, sort_keys=True))
        return 0
    except (SyncError, release.ValidationError, OSError, ValueError) as exc:
        print(f"error: {exc}")
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
