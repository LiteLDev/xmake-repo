#!/usr/bin/env python3
"""Record completed Header checks, preserving their input identities and failures."""

from __future__ import annotations

import argparse
import json
from pathlib import Path
from typing import Any

try:
    from . import validate_header_release as validator
except ImportError:
    import validate_header_release as validator


def write_json(path: Path, value: Any) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8", newline="\n")


def record(root: Path, results: list[dict[str, Any]]) -> list[str]:
    root = root.resolve()
    metadata_path = root / "header-release.json"
    if metadata_path.is_symlink():
        raise validator.ValidationError("metadata must be a regular candidate file")
    metadata = json.loads(metadata_path.read_text(encoding="utf-8"))
    manifest = metadata["manifest"]["sha256"]
    prepared = []
    seen = set()
    for result in results:
        gate = result.get("check")
        if gate not in validator.SYNC_GATES:
            continue
        if gate in seen:
            raise validator.ValidationError(f"duplicate gate in result batch: {gate}")
        seen.add(gate)
        if result.get("manifest_sha256") != manifest:
            raise validator.ValidationError(f"result belongs to a different Header input: {gate}")
        sources = result.get("source_files")
        if not isinstance(sources, dict) or not sources:
            raise validator.ValidationError(f"result lacks captured source identities: {gate}")
        for name, digest in sources.items():
            path = root / name
            if not path.resolve().is_relative_to(root) or not path.is_file() or validator.text_source_sha256(path) != digest:
                raise validator.ValidationError(f"source changed since the check: {name}")
        log = Path(result["log"])
        if not log.is_file() or validator.sha256_file(log) != result.get("log_sha256"):
            raise validator.ValidationError(f"captured log changed: {gate}")
        status = "passed" if result.get("exit_code") == 0 else "failed"
        receipt = {
            "schema_version": 1, "gate": gate, "status": status, "exit_code": result["exit_code"],
            "manifest_sha256": manifest, "source_files": sources,
            "source_algorithm": "sha256 of LF-normalized source text",
            "provenance": metadata["provenance"],
            "log": {"name": log.name, "bytes": log.stat().st_size, "sha256": validator.sha256_file(log)},
            "summary": result.get("summary", {}),
        }
        validator.reject_absolute_paths(receipt)
        relative = f"docs/validation/client-header-{gate}.json"
        if not (root / relative).resolve().is_relative_to(root / "docs" / "validation"):
            raise validator.ValidationError("receipt destination escapes the candidate")
        prepared.append((gate, relative, receipt))
    if not prepared:
        raise validator.ValidationError("result batch contains no Header release gate")
    for gate, relative, receipt in prepared:
        path = root / relative
        write_json(path, receipt)
        metadata["validation"][gate] = {
            "status": receipt["status"], "manifest_sha256": manifest,
            "report": relative, "report_sha256": validator.sha256_file(path),
        }
    write_json(metadata_path, metadata)
    return [gate for gate, _, _ in prepared]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--results", type=Path, required=True)
    args = parser.parse_args()
    try:
        results = json.loads(args.results.read_text(encoding="utf-8-sig"))
        if not isinstance(results, list):
            raise validator.ValidationError("results must be an array of captured checks")
        print(json.dumps({"recorded": record(args.root, results)}))
        return 0
    except (validator.ValidationError, OSError, ValueError, KeyError, TypeError) as exc:
        print(f"error: {exc}")
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
