from __future__ import annotations

import json
import os
from pathlib import Path
import stat
import tempfile
import unittest
from unittest import mock

from scripts import materialize_android_dependencies as materializer


COMMIT = "1" * 40


def manifest() -> dict:
    return {
        "schema_version": 1,
        "release_lane": "1.26.40.5",
        "target": materializer.EXPECTED_TARGET,
        "architecture": materializer.EXPECTED_ARCHITECTURE,
        "api_level": materializer.EXPECTED_API_LEVEL,
        "ndk_revision": materializer.EXPECTED_NDK_REVISION,
        "lock_hash": materializer.EXPECTED_LOCK_HASH,
        "compile_definitions": [],
        "dependencies": [
            {
                "name": "fixture",
                "repository": "https://github.com/example/fixture.git",
                "commit": COMMIT,
                "include_roots": ["include"],
                "required_headers": ["fixture/header.h"],
            }
        ],
        "unavailable": [],
    }


class FakeGit:
    def __init__(self, create_header: bool = True):
        self.create_header = create_header

    def __call__(self, arguments: list[str], cwd: Path | None = None) -> str:
        assert cwd is not None
        if arguments[1:3] == ["rev-parse", "HEAD"]:
            marker = cwd / ".fixture-head"
            return marker.read_text(encoding="utf-8") if marker.exists() else "0" * 40
        if arguments[1] == "checkout":
            (cwd / ".fixture-head").write_text(COMMIT, encoding="utf-8")
            if self.create_header:
                header = cwd / "include" / "fixture" / "header.h"
                header.parent.mkdir(parents=True)
                header.write_text("#pragma once\n", encoding="utf-8")
        return ""


class MaterializerTests(unittest.TestCase):
    def setUp(self) -> None:
        self.temporary = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary.name)
        self.manifest = self.root / "manifest.json"
        self.manifest.write_text(json.dumps(manifest()), encoding="utf-8")
        self.ndk = self.root / "ndk"
        glue = self.ndk / "sources" / "android" / "native_app_glue"
        glue.mkdir(parents=True)
        (glue / "android_native_app_glue.h").write_text("#pragma once\n", encoding="utf-8")
        (self.ndk / "source.properties").write_text(
            f"Pkg.Revision = {materializer.EXPECTED_NDK_REVISION}\n", encoding="utf-8"
        )
        self.output = self.root / "android-deps"
        self.runtime_lock = self.root / "runtime.json"

    def tearDown(self) -> None:
        self.temporary.cleanup()

    def test_materializes_and_reuses_a_valid_cache_deterministically(self) -> None:
        runner = FakeGit()
        first = materializer.materialize(self.manifest, self.ndk, self.output, self.runtime_lock, runner)
        first_bytes = self.runtime_lock.read_bytes()
        second = materializer.materialize(self.manifest, self.ndk, self.output, self.runtime_lock, runner)
        self.assertEqual(first, second)
        self.assertEqual(first_bytes, self.runtime_lock.read_bytes())
        self.assertEqual(first["lock_hash"], materializer.EXPECTED_LOCK_HASH)

    def test_rejects_non_exact_commit_and_path_escape(self) -> None:
        value = manifest()
        value["dependencies"][0]["commit"] = "main"
        with self.assertRaises(materializer.MaterializationError):
            materializer.validate_manifest(value)
        value = manifest()
        value["dependencies"][0]["include_roots"] = ["../escape"]
        with self.assertRaises(materializer.MaterializationError):
            materializer.validate_manifest(value)

    def test_missing_required_header_fails_without_publishing(self) -> None:
        with self.assertRaises(materializer.MaterializationError):
            materializer.materialize(
                self.manifest, self.ndk, self.output, self.runtime_lock, FakeGit(create_header=False)
            )
        self.assertFalse(self.output.exists())
        self.assertFalse(self.runtime_lock.exists())

    def test_corrupt_cache_is_replaced_after_full_validation(self) -> None:
        self.output.mkdir()
        (self.output / "sentinel.txt").write_text("corrupt", encoding="utf-8")
        materializer.materialize(self.manifest, self.ndk, self.output, self.runtime_lock, FakeGit())
        self.assertFalse((self.output / "sentinel.txt").exists())
        self.assertTrue((self.output / "fixture" / "include" / "fixture" / "header.h").is_file())

    def test_failed_replacement_preserves_previous_cache(self) -> None:
        self.output.mkdir()
        sentinel = self.output / "sentinel.txt"
        sentinel.write_text("preserve", encoding="utf-8")
        with mock.patch.object(
            materializer,
            "materialize_dependency",
            side_effect=materializer.MaterializationError("injected failure"),
        ):
            with self.assertRaises(materializer.MaterializationError):
                materializer.materialize(self.manifest, self.ndk, self.output, self.runtime_lock, FakeGit())
        self.assertEqual(sentinel.read_text(encoding="utf-8"), "preserve")

    def test_wrong_ndk_revision_is_rejected(self) -> None:
        (self.ndk / "source.properties").write_text("Pkg.Revision = 27.2.12479018\n", encoding="utf-8")
        with self.assertRaises(materializer.MaterializationError):
            materializer.materialize(self.manifest, self.ndk, self.output, self.runtime_lock, FakeGit())

    def test_remove_tree_clears_read_only_files(self) -> None:
        root = self.root / "read-only-tree"
        root.mkdir()
        value = root / "pack.idx"
        value.write_bytes(b"fixture")
        os.chmod(value, stat.S_IREAD)
        materializer.remove_tree(root)
        self.assertFalse(root.exists())


if __name__ == "__main__":
    unittest.main()
