from __future__ import annotations

import copy
import hashlib
import json
from pathlib import Path
import subprocess
import tempfile
import unittest

from scripts import sync_upstream_headers as sync
from scripts import validate_header_release as release
from scripts import record_header_validation as recorder


class HeaderSyncTests(unittest.TestCase):
    def test_empty_include_files_keep_their_target_presence(self) -> None:
        for views in (
            {"client": {"mc/Empty.h": b""}, "server": {"mc/Empty.h": b""}, "android": {}},
            {"client": {"mc/Empty.h": b""}, "server": {}, "android": {"mc/Empty.h": b"class Empty {};\n"}},
        ):
            layers = sync.repartition(views)
            for platform in views:
                self.assertEqual(sync.effective(layers, platform), views[platform])

    def test_shared_client_type_uses_exclusive_platforms_and_one_definition(self) -> None:
        common = b"class Client {\n    int shared;\n"
        views = {"client": {"mc/Client.h": common + b"    int windows;\n};\n"},
                 "android": {"mc/Client.h": common + b"    long android;\n};\n"},
                 "server": {}}
        result = sync.repartition(views)
        data = result["src-client"]["mc/Client.h"]
        self.assertEqual(data.count(b"class Client {"), 1)
        self.assertEqual(data.count(b"int shared;"), 1)
        self.assertIn(b"defined(LL_PLAT_C) || defined(LL_PLAT_A)", data)
        for platform in views:
            self.assertEqual(sync.effective(result, platform), views[platform])

    def test_existing_preprocessor_groups_and_missing_final_newline_are_lossless(self) -> None:
        windows = b"class Type {\n#if defined(FEATURE)\n int a;\n#else\n int b;\n#endif\n};"
        android = b"class Type {\n long android;\n};"
        data = sync.merge_declarations(windows, android, "defined(LL_PLAT_A)")
        self.assertEqual(sync.project_declarations(data, "client"), windows)
        self.assertEqual(sync.project_declarations(data, "android"), android)
        self.assertIn(b"#if defined(FEATURE)\n int a;\n#else\n int b;\n#endif\n", data)

    def test_unknown_or_unbalanced_generated_selectors_are_rejected(self) -> None:
        for data in (b"#if UNKNOWN // @header-generator platform\n", b"#else // @header-generator platform\n"):
            with self.assertRaises(sync.SyncError):
                sync.project_declarations(data, "android")

    def test_staging_preserves_android_and_records_new_windows_sources(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary) / "repo"
            root.mkdir()
            def git(*args: str) -> str:
                return subprocess.run(["git", "-C", str(root), *args], capture_output=True, check=True).stdout.decode().strip()
            git("init", "-q")
            git("config", "user.name", "Header fixture")
            git("config", "user.email", "header-fixture@example.invalid")
            (root / ".gitattributes").write_text("*.h text eol=crlf\n")
            for layer in sync.SOURCE_LAYERS:
                file = root / layer / "mc" / ("Common.h" if layer == "src" else f"{layer}.h")
                file.parent.mkdir(parents=True)
                file.write_bytes(b"#pragma once\n")
            dependency = b"{}\n"
            (root / "android-dependencies.lock.json").write_bytes(dependency)
            old = {
                "schema_version": 1, "release": "fixture",
                "inputs": {"android": {"build_id": "fixed"}, "windows_client": {"sha256": "old"}, "windows_server": {"sha256": "old"}},
                "android_toolchain": {"dependency_manifest_sha256": hashlib.sha256(dependency).hexdigest().upper()},
                "validation": {"old_pass": True},
            }
            (root / "header-release.json").write_text(json.dumps(old))
            (root / "xmake.lua").write_text('add_includedirs("src", "src-client")\nadd_includedirs("src", "src-server")\n')
            git("add", ".")
            git("commit", "-qm", "base")
            base = git("rev-parse", "HEAD")
            (root / "src-client/mc/src-client.h").write_bytes(b"#pragma once\n// new client\n")
            (root / "src/mc/_HeaderOutputPredefine.h").write_bytes(b'#include "concurrentqueue.h" \n')
            git("add", ".")
            git("commit", "-qm", "upstream")
            header = git("rev-parse", "HEAD")
            stage = Path(temporary) / "staging"
            sync.stage(root, base, header, stage)
            sync.verify_fidelity(root, base, header, stage)
            release.validate_release(stage)
            metadata = json.loads((stage / "header-release.json").read_text())
            self.assertEqual(metadata["historical_baseline"]["metadata"], old)
            self.assertNotIn("sha256", metadata["inputs"]["windows_client"])
            self.assertEqual(metadata["inputs"]["windows_client"]["commit"], header)
            self.assertEqual(len(metadata["provenance"]["infrastructure_adjustments"]), 2)
            self.assertEqual(sync.project_declarations((stage / "src/mc/_HeaderOutputPredefine.h").read_bytes().replace(b"\r\n", b"\n"), "client"), b'#include "concurrentqueue.h"\n')
            self.assertEqual(sync.project_declarations((stage / "src-client/mc/src-android.h").read_bytes().replace(b"\r\n", b"\n"), "android"), b"#pragma once\n")
            self.assertFalse((stage / "src-android").exists())
            git("checkout", "-qb", "codex/sync-upstream-header", base)
            git("merge", "--no-ff", "--no-commit", header)
            unrelated = root / "src-client/mc/User.h"
            unrelated.write_bytes(b"// preserve untracked user work\n")
            with self.assertRaises(sync.SyncError):
                sync.apply(root, base, header, stage)
            self.assertEqual(unrelated.read_bytes(), b"// preserve untracked user work\n")
            unrelated.unlink()
            sync.apply(root, base, header, stage)
            current = json.loads((root / "header-release.json").read_text())
            current["validation"]["python"] = {"status": "failed"}
            (root / "header-release.json").write_text(json.dumps(current), encoding="utf-8")
            second = sync.apply(root, base, header, stage)
            self.assertEqual((second["changed"], second["removed"]), (0, 0))
            self.assertEqual(json.loads((root / "header-release.json").read_text()), current)
            self.assertEqual(git("rev-parse", "HEAD"), base)
            with self.assertRaises(sync.SyncError):
                sync.stage(root, base, header, stage)

    def test_three_platform_partition_preserves_deletions_and_renames(self) -> None:
        views = {
            "client": {"mc/Common.h": b"same\n", "mc/New.h": b"windows\n"},
            "server": {"mc/Common.h": b"same\n", "mc/New.h": b"windows\n"},
            "android": {"mc/Common.h": b"same\n", "mc/Old.h": b"android\n"},
        }
        layers = sync.repartition(views)
        self.assertEqual(layers["src"]["mc/Common.h"], b"same\n")
        self.assertIn("mc/New.h", layers["src"])
        for platform in views:
            self.assertEqual(sync.effective(layers, platform), views[platform])

    def test_upstream_common_precedence_is_explicit(self) -> None:
        layers = {name: {} for name in release.LAYERS}
        layers["src"]["mc/A.h"] = b"visible"
        layers["src-client"]["mc/A.h"] = b"shadowed"
        with self.assertRaises(sync.SyncError):
            sync.effective(layers, "client")
        self.assertEqual(sync.effective(layers, "client", common_first=True)["mc/A.h"], b"visible")

    def test_cross_platform_case_collision_is_rejected(self) -> None:
        with self.assertRaises(sync.SyncError):
            sync.repartition({"client": {"mc/A.h": b""}, "server": {}, "android": {"mc/a.h": b""}})

    def test_unsafe_paths_are_rejected(self) -> None:
        for path in ("src/mc/../../out.h", "/src/mc/A.h", "src/mc/C:/out.h", "src/ll/A.h", "src/mc/link.so"):
            with self.subTest(path=path), self.assertRaises(sync.SyncError):
                sync.safe_header(path)

    def test_git_reader_ignores_checkout_crlf_attributes_and_rejects_symlinks(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            def git(*args: str, input: bytes | None = None) -> bytes:
                return subprocess.run(["git", "-C", str(root), *args], input=input, capture_output=True, check=True).stdout
            git("init", "-q")
            git("config", "user.name", "Header fixture")
            git("config", "user.email", "header-fixture@example.invalid")
            (root / ".gitattributes").write_text("*.h text eol=crlf\n")
            header = root / "src/mc/A.h"
            header.parent.mkdir(parents=True)
            header.write_bytes(b"#pragma once\r\n")
            git("add", ".")
            git("commit", "-qm", "fixture")
            commit = git("rev-parse", "HEAD").decode().strip()
            self.assertEqual(sync.read_layers(root, commit)["src"]["mc/A.h"], b"#pragma once\n")
            blob = git("hash-object", "-w", "--stdin", input=b"../../outside").decode().strip()
            git("update-index", "--add", "--cacheinfo", f"120000,{blob},src/mc/Link.h")
            git("commit", "-qm", "link fixture")
            with self.assertRaises(sync.SyncError):
                sync.read_layers(root, git("rev-parse", "HEAD").decode().strip())


class SyncMetadataTests(unittest.TestCase):
    def setUp(self) -> None:
        self.temporary = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary.name)
        for layer in release.LAYERS:
            path = self.root / layer / "mc" / f"{layer}.h"
            path.parent.mkdir(parents=True)
            path.write_bytes(b"#pragma once\r\n")
        dependency = b"{}\n"
        (self.root / "android-dependencies.lock.json").write_bytes(dependency)
        dependency_hash = hashlib.sha256(dependency).hexdigest().upper()
        self.layers = {layer: release.collect_layer(self.root, layer) for layer in release.LAYERS}
        count, digest = release.compute_release_manifest(self.root, self.layers)
        identities = {
            platform: release.effective_git_identity(release.build_effective(self.layers["src"], self.layers[layer], platform))
            for platform, layer in release.PLATFORM_LAYERS.items()
        }
        self.metadata = {
            "schema_version": 1, "release": "fixture",
            "layers": {layer: len(paths) for layer, paths in self.layers.items()},
            "manifest": {"rows": count, "sha256": digest},
            "inputs": {"android": {"build_id": "unchanged"}},
            "android_toolchain": {"dependency_manifest_sha256": dependency_hash},
            "provenance": {
                "kind": "upstream-header-sync", "base_release_commit": "a" * 40,
                "upstream_header_commit": "b" * 40, "effective_views": identities,
                "android_dependency_manifest_sha256": dependency_hash,
            },
            "historical_baseline": {"commit": "a" * 40, "metadata": {"inputs": {"android": {"build_id": "unchanged"}}}},
            "validation": {gate: {"status": "pending"} for gate in release.SYNC_GATES},
        }
        for platform in ("client", "server"):
            self.metadata["inputs"][f"windows_{platform}"] = {
                "source_kind": "git-header", "commit": "b" * 40, "effective_view": identities[platform],
            }

    def tearDown(self) -> None:
        self.temporary.cleanup()

    def validate(self) -> None:
        (self.root / "header-release.json").write_text(json.dumps(self.metadata), encoding="utf-8")
        release.validate_release(self.root)

    def test_candidate_is_valid_but_unvalidated_candidate_cannot_publish(self) -> None:
        self.validate()
        with self.assertRaises(release.ValidationError):
            release.require_sync_validation(self.metadata)

    def test_content_change_cannot_be_hidden_by_recomputing_physical_manifest(self) -> None:
        (self.root / "src-client/mc/src-client.h").write_bytes(b"changed\r\n")
        _, self.metadata["manifest"]["sha256"] = release.compute_release_manifest(self.root, self.layers)
        with self.assertRaises(release.ValidationError):
            self.validate()

    def test_dependency_drift_and_android_input_relabeling_are_rejected(self) -> None:
        original = copy.deepcopy(self.metadata)
        self.metadata["inputs"]["android"]["build_id"] = "wrong"
        with self.assertRaises(release.ValidationError):
            self.validate()
        self.metadata = original
        (self.root / "android-dependencies.lock.json").write_bytes(b"changed")
        with self.assertRaises(release.ValidationError):
            self.validate()

    def test_old_pass_flags_and_old_windows_dump_hash_are_rejected(self) -> None:
        original = copy.deepcopy(self.metadata)
        self.metadata["validation"] = {"windows_effective_oracle": True}
        with self.assertRaises(release.ValidationError):
            self.validate()
        self.metadata = original
        self.metadata["inputs"]["windows_client"]["sha256"] = "old-pdb"
        with self.assertRaises(release.ValidationError):
            self.validate()

    def test_pass_requires_current_subject_and_existing_report(self) -> None:
        self.metadata["validation"]["python"] = {"status": "passed", "manifest_sha256": "stale"}
        with self.assertRaises(release.ValidationError):
            self.validate()
        self.metadata["validation"]["python"]["manifest_sha256"] = self.metadata["manifest"]["sha256"]
        self.metadata["validation"]["python"]["report"] = "docs/validation/../../outside.json"
        with self.assertRaises(release.ValidationError):
            self.validate()

    def test_infrastructure_exception_cannot_change_android_or_arbitrary_headers(self) -> None:
        for platform, path in (("android", "mc/_HeaderOutputPredefine.h"), ("client", "mc/src-client.h")):
            self.metadata["provenance"]["infrastructure_adjustments"] = [{
                "platform": platform, "path": path, "kind": "concurrentqueue-include-trailing-space",
            }]
            with self.subTest(platform=platform), self.assertRaises(release.ValidationError):
                self.validate()

    def test_receipt_status_and_source_content_are_verified(self) -> None:
        source = self.root / "xmake.lua"
        source.write_bytes(b"build inputs\n")
        report = self.root / "docs/validation/python.json"
        report.parent.mkdir(parents=True)
        receipt = {
            "gate": "python", "status": "passed", "manifest_sha256": self.metadata["manifest"]["sha256"],
            "source_files": {"xmake.lua": release.sha256_file(source)},
        }
        report.write_text(json.dumps(receipt), encoding="utf-8")
        self.metadata["validation"]["python"] = {
            "status": "passed", "manifest_sha256": self.metadata["manifest"]["sha256"],
            "report": "docs/validation/python.json", "report_sha256": release.sha256_file(report),
        }
        self.validate()
        source.write_bytes(b"build inputs\r\n")
        self.validate()
        source.write_bytes(b"changed build inputs\n")
        with self.assertRaises(release.ValidationError):
            self.validate()
        source.write_bytes(b"build inputs\n")
        receipt["status"] = "failed"
        report.write_text(json.dumps(receipt), encoding="utf-8")
        self.metadata["validation"]["python"]["report_sha256"] = release.sha256_file(report)
        with self.assertRaises(release.ValidationError):
            self.validate()

    def test_recorder_rejects_stale_results_before_writing_receipts(self) -> None:
        self.validate()
        source = self.root / "xmake.lua"
        source.write_bytes(b"build\n")
        log = self.root / "captured.log"
        log.write_bytes(b"actual tool output\n")
        result = {
            "check": "python", "exit_code": 0, "manifest_sha256": self.metadata["manifest"]["sha256"],
            "source_files": {"xmake.lua": release.text_source_sha256(source)},
            "log": str(log), "log_sha256": release.sha256_file(log),
        }
        source.write_bytes(b"changed\n")
        with self.assertRaises(release.ValidationError):
            recorder.record(self.root, [result])
        self.assertFalse((self.root / "docs/validation").exists())
        source.write_bytes(b"build\n")
        result["exit_code"] = 1
        recorder.record(self.root, [result])
        metadata = json.loads((self.root / "header-release.json").read_text())
        self.assertEqual(metadata["validation"]["python"]["status"], "failed")
        release.validate_release(self.root)


if __name__ == "__main__":
    unittest.main()
