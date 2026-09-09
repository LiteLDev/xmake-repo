#!/usr/bin/env python3
"""Resolve a real M + S merge, retaining upstream core Header edits by logical path.

S is a verified Header release with H ancestry. Windows declarations already in M
are preserved, including MC type/API edits; they are audited separately from the
single predefine infrastructure exception. Android remains byte-identical to S.
This command never fetches, merges, commits, or publishes.
"""
from __future__ import annotations

import argparse
import difflib
import hashlib
import io
import json
from pathlib import Path
import subprocess

import sync_upstream_headers as headers

LAYERS = ("src", "src-client", "src-server", "src-android")
SOURCE_ROOTS = (*LAYERS, "src-test")
INFRASTRUCTURE = "mc/_HeaderOutputPredefine.h"


def git(repo: Path, *args: str, data: bytes | None = None) -> bytes:
    p = subprocess.run(["git", "-C", str(repo), *args], input=data, capture_output=True)
    if p.returncode:
        raise headers.SyncError(p.stderr.decode("utf-8", "replace").strip())
    return p.stdout


def tree(repo: Path, ref: str) -> dict[str, tuple[str, str]]:
    result = {}
    for row in git(repo, "ls-tree", "-rz", ref).split(b"\0"):
        if row:
            info, name = row.split(b"\t", 1)
            mode, kind, oid = info.decode().split()
            path = name.decode()
            if kind != "blob" or mode not in ("100644", "100755"):
                raise headers.SyncError(f"unsupported source entry: {path}")
            result[path] = (mode, oid)
    return result


def is_header(path: str) -> bool:
    parts = path.split("/")
    return len(parts) > 2 and parts[0] in LAYERS and parts[1] == "mc" and path.endswith(".h")


def blobs(repo: Path, entries: dict[str, tuple[str, str]]) -> dict[str, bytes]:
    ids = sorted({oid for _, oid in entries.values()})
    raw = git(repo, "cat-file", "--batch", data=("\n".join(ids) + "\n").encode())
    stream = io.BytesIO(raw)
    objects = {}
    for wanted in ids:
        oid, kind, size = stream.readline().decode().split()
        data = stream.read(int(size))
        if oid != wanted or kind != "blob" or stream.read(1) != b"\n":
            raise headers.SyncError("invalid Git blob stream")
        objects[oid] = data
    return {name: objects[oid] for name, (_, oid) in entries.items()}


def layers(files: dict[str, bytes]) -> dict[str, dict[str, bytes]]:
    result = {layer: {} for layer in LAYERS}
    for name, data in files.items():
        layer, relative = headers.safe_header(name)
        if b"\r" in data:
            raise headers.SyncError(f"noncanonical source blob: {name}")
        result[layer][relative] = data
    return result


def sha(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest().upper()


def assemble(m: dict, s: dict) -> tuple[dict, dict]:
    views = {
        "client": headers.effective(m, "client", common_first=True),
        "server": headers.effective(m, "server", common_first=True),
        "android": headers.effective(s, "android"),
    }
    return headers.repartition(views), views


def audit(h: dict, m: dict) -> tuple[list, bytes]:
    rows, patch = [], []
    for platform in ("client", "server"):
        before = headers.effective(h, platform, common_first=True)
        after = headers.effective(m, platform, common_first=True)
        for name in sorted(before.keys() | after.keys()):
            old, new = before.get(name), after.get(name)
            if old == new:
                continue
            if old is not None and new is not None and old.rstrip(b"\n") == new.rstrip(b"\n"):
                kind = "final-newline-only"
            elif name == INFRASTRUCTURE:
                kind = "core-predefine"
            else:
                kind = "upstream-mc-source-edit"
            diff = list(difflib.unified_diff(
                (old or b"").decode().splitlines(keepends=True),
                (new or b"").decode().splitlines(keepends=True),
                fromfile=f"H/{platform}/{name}", tofile=f"M/{platform}/{name}"))
            # Preserve missing-newline markers so every patch hunk is unambiguous.
            normalized = "".join(line if line.endswith("\n") else line + "\n\\ No newline at end of file\n" for line in diff)
            patch.append(normalized)
            rows.append({
                "platform": platform, "path": name, "kind": kind,
                "change": "added" if old is None else "deleted" if new is None else "modified",
                "header_sha256": sha(old) if old is not None else None,
                "main_sha256": sha(new) if new is not None else None,
                "hunks": [line.rstrip() for line in diff if line.startswith("@@")],
                "patch_sha256": sha(normalized.encode()),
            })
    return rows, "".join(patch).encode()


def write_if_changed(path: Path, data: bytes) -> int:
    if path.exists() and path.read_bytes() == data:
        return 0
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(data)
    return 1


def json_bytes(value: object) -> bytes:
    return (json.dumps(value, indent=2, sort_keys=True) + "\n").encode()


def source_file(path: str) -> bool:
    return path.split("/", 1)[0] in SOURCE_ROOTS


def verify_sources(repo: Path, expected: dict[str, bytes], main_tree: dict, check_index: bool) -> None:
    tracked = set(git(repo, "ls-files", "-z").decode().strip("\0").split("\0"))
    actual_headers = {name for name in tracked if is_header(name) and (repo / name).is_file()}
    if actual_headers != expected.keys():
        raise headers.SyncError("core Header path set drifted")
    for name, data in expected.items():
        if (repo / name).read_bytes().replace(b"\r\n", b"\n") != data:
            raise headers.SyncError(f"core Header bytes drifted: {name}")
    # Core .cpp, LL APIs, and src-test must retain M, including files Git's rename
    # heuristic incorrectly relocated while repartitioning generated Headers.
    main_sources = {n: v for n, v in main_tree.items() if source_file(n) and not is_header(n)}
    actual_sources = {n for n in tracked if source_file(n) and not is_header(n) and (repo / n).exists()}
    if actual_sources != main_sources.keys():
        raise headers.SyncError("non-Header core source paths drifted")
    for name, data in blobs(repo, main_sources).items():
        if (repo / name).read_bytes().replace(b"\r\n", b"\n") != data.replace(b"\r\n", b"\n"):
            raise headers.SyncError(f"upstream core source drifted: {name}")
    if check_index and git(repo, "diff", "--name-only", "--diff-filter=U"):
        raise headers.SyncError("merge still has unresolved conflicts")


def run(repo: Path, mode: str, main: str, header: str, release: str, evidence: Path | None) -> dict:
    repo = repo.resolve()
    refs = {n: headers.full_commit(repo, r) for n, r in (("M", main), ("H", header), ("S", release))}
    for descendant in (refs["M"], refs["S"]):
        git(repo, "merge-base", "--is-ancestor", refs["H"], descendant)
    main_tree, h_tree, s_tree = (tree(repo, refs[n]) for n in ("M", "H", "S"))
    metadata = json.loads(git(repo, "show", f'{refs["S"]}:header-release.json'))
    if metadata["provenance"]["upstream_header_commit"] != refs["H"]:
        raise headers.SyncError("S does not identify the supplied H")
    refs["D"] = metadata["provenance"]["base_release_commit"]
    git(repo, "merge-base", "--is-ancestor", refs["D"], refs["S"])
    m, h, s = (layers(blobs(repo, {n: v for n, v in t.items() if is_header(n)})) for t in (main_tree, h_tree, s_tree))
    for platform in ("client", "server"):
        # Only the two already-validated reversible trailing-space adjustments are
        # allowed between H and the published S. Never replace a newer H by old M.
        want = headers.effective(h, platform, common_first=True)
        got = headers.effective(s, platform)
        for name in want.keys() | got.keys():
            a, b = want.get(name), got.get(name)
            if a != b and not (name == INFRASTRUCTURE and a is not None and b is not None and
                                a.replace(b'#include "concurrentqueue.h" \n', b'#include "concurrentqueue.h"\n') == b):
                raise headers.SyncError(f"S is not a faithful H input: {platform}/{name}")
    partition, views = assemble(m, s)
    expected = {f"{layer}/{name}": data for layer, files in partition.items() for name, data in files.items()}
    rows, patch = audit(h, m)
    lock = {
        "schema_version": 1, "commits": refs,
        "header_release_manifest": metadata["manifest"]["sha256"],
        "effective_headers": {p: headers.identity(v) for p, v in views.items()},
        "upstream_header_views": {p: headers.identity(headers.effective(h, p, common_first=True)) for p in ("client", "server")},
        "adaptations": {"manifest": "docs/validation/upstream-core-header-adaptations.json",
                        "manifest_sha256": sha(json_bytes(rows)),
                        "patch": "docs/validation/upstream-core-header-adaptations.patch",
                        "patch_sha256": sha(patch), "rows": len(rows)},
        "policy": "H-to-M core edits retained per logical Windows path; Android stays S; MC type edits are audited, not infrastructure exemptions",
    }
    generated = {
        "config/upstream-sync.lock.json": json_bytes(lock),
        "docs/validation/upstream-core-header-adaptations.json": json_bytes(rows),
        "docs/validation/upstream-core-header-adaptations.patch": patch,
    }
    result = {"commits": refs, "effective_headers": lock["effective_headers"],
              "physical_headers": len(expected), "adaptation_rows": len(rows), "changed": 0}
    if mode == "audit":
        if evidence is None:
            raise headers.SyncError("audit requires --evidence")
        evidence.mkdir(parents=True, exist_ok=True)
        for name, data in generated.items():
            write_if_changed(evidence / Path(name).name, data)
        return result
    if mode == "apply":
        if git(repo, "branch", "--show-current").decode().strip() != "feat/android-minimal-kernel":
            raise headers.SyncError("apply requires the dedicated core branch")
        if headers.full_commit(repo, "HEAD") != refs["M"]:
            # Repeating a completed synchronization only verifies; it never overwrites edits.
            for ref in (refs["M"], refs["S"]):
                git(repo, "merge-base", "--is-ancestor", ref, "HEAD")
            mode = "verify"
        else:
            if headers.full_commit(repo, "MERGE_HEAD") != refs["S"]:
                raise headers.SyncError("apply requires an actual ordinary M + S merge")
            tracked = set(git(repo, "ls-files", "-z").decode().strip("\0").split("\0"))
            obsolete = {n for n in tracked if source_file(n) and n not in expected and n not in main_tree}
            obsolete |= {n for n in tracked if is_header(n) and n not in expected}
            for name in sorted(set(expected) | obsolete):
                path = repo / name
                if path.is_symlink() or not path.resolve().is_relative_to(repo):
                    raise headers.SyncError(f"unsafe output path: {name}")
                if path.exists() and name not in tracked:
                    raise headers.SyncError(f"untracked source would be overwritten: {name}")
            for name in sorted(obsolete):
                path = repo / name
                if path.is_file():
                    path.unlink()
                    result["changed"] += 1
            restore = [n for n in main_tree if source_file(n) and not is_header(n)]
            restore += ["xmake.lua", ".github/workflows/build.yml"]
            git(repo, "restore", f'--source={refs["M"]}', "--staged", "--worktree", "--pathspec-from-file=-", "--pathspec-file-nul",
                data=("\0".join(restore) + "\0").encode())
            git(repo, "restore", f'--source={refs["S"]}', "--staged", "--worktree", "--", "test/main.cpp")
            # Preserve upstream file/binary rules and S's explicit Header materialization.
            attrs = git(repo, "show", f'{refs["M"]}:.gitattributes').rstrip() + b"\n\n# S Header materialization rules\n" + git(repo, "show", f'{refs["S"]}:.gitattributes')
            result["changed"] += write_if_changed(repo / ".gitattributes", attrs)
            for name, data in expected.items():
                result["changed"] += write_if_changed(repo / name, data.replace(b"\n", b"\r\n"))
            for name, data in generated.items():
                result["changed"] += write_if_changed(repo / name, data)
            # Stage only resolved source domains and the explicit synchronization metadata.
            resolved = set(expected) | obsolete | set(restore) | set(generated) | {".gitattributes", "test/main.cpp"}
            git(repo, "add", "-A", "--pathspec-from-file=-", "--pathspec-file-nul",
                data=("\0".join(sorted(resolved)) + "\0").encode())
    verify_sources(repo, expected, main_tree, check_index=True)
    for name, data in generated.items():
        if not (repo / name).is_file() or (repo / name).read_bytes() != data:
            raise headers.SyncError(f"synchronization evidence drifted: {name}")
    return result


def main() -> None:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("mode", choices=("audit", "apply", "verify"))
    p.add_argument("--repo", type=Path, required=True)
    p.add_argument("--main", required=True)
    p.add_argument("--header", required=True)
    p.add_argument("--release", required=True)
    p.add_argument("--evidence", type=Path)
    args = p.parse_args()
    try:
        print(json.dumps(run(args.repo, args.mode, args.main, args.header, args.release, args.evidence), indent=2))
    except (headers.SyncError, KeyError, OSError) as e:
        p.exit(1, f"core synchronization refused: {e}\n")


if __name__ == "__main__":
    main()
