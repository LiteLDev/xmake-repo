from __future__ import annotations

import json
from pathlib import Path
import tempfile
import unittest

from scripts import validate_header_release as validator


class ReleaseValidatorTests(unittest.TestCase):
    def setUp(self) -> None:
        self.temporary = tempfile.TemporaryDirectory()
        self.root = Path(self.temporary.name)
        for layer in validator.LAYERS:
            (self.root / layer / "mc").mkdir(parents=True)
        (self.root / "src" / "mc" / "Common.h").write_text("#pragma once\n", encoding="utf-8")
        for platform, layer in validator.PLATFORM_LAYERS.items():
            (self.root / layer / "mc" / f"{platform.title()}.h").write_text(
                '#pragma once\n#include "mc/Common.h"\n', encoding="utf-8"
            )
        self.write_metadata()

    def tearDown(self) -> None:
        self.temporary.cleanup()

    def layers(self) -> dict[str, dict[str, Path]]:
        return {layer: validator.collect_layer(self.root, layer) for layer in validator.LAYERS}

    def write_metadata(self) -> None:
        layers = self.layers()
        rows, digest = validator.compute_release_manifest(self.root, layers)
        metadata = {
            "schema_version": 1,
            "release": "1.26.40.5",
            "layers": {layer: len(paths) for layer, paths in layers.items()},
            "manifest": {"rows": rows, "sha256": digest},
        }
        (self.root / "header-release.json").write_text(json.dumps(metadata), encoding="utf-8")

    def test_valid_fixture_passes(self) -> None:
        summary = validator.validate_release(self.root)
        self.assertEqual(summary["release"], "1.26.40.5")

    def test_case_collision_is_rejected(self) -> None:
        (self.root / "src-client" / "mc" / "common.h").write_text("#pragma once\n", encoding="utf-8")
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)

    def test_non_identical_overlap_is_rejected(self) -> None:
        (self.root / "src-client" / "mc" / "Common.h").write_text("different\n", encoding="utf-8")
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)

    def test_missing_include_is_rejected(self) -> None:
        (self.root / "src-server" / "mc" / "Server.h").write_text(
            '#include "mc/Missing.h"\n', encoding="utf-8"
        )
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)

    def test_hard_deny_and_synthetic_paths_are_rejected(self) -> None:
        denied = self.root / "src-client" / "mc" / "Xal" / "Type.h"
        denied.parent.mkdir()
        denied.write_text("#pragma once\n", encoding="utf-8")
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)

    def test_legitimate_lambda_word_is_not_treated_as_a_synthetic_type(self) -> None:
        header = self.root / "src-client" / "mc" / "WrappedLambdaDensityCalculator.h"
        header.write_text("#pragma once\n", encoding="utf-8")
        self.write_metadata()
        validator.validate_release(self.root)

    def test_metadata_mismatch_and_absolute_path_are_rejected(self) -> None:
        metadata_path = self.root / "header-release.json"
        metadata = json.loads(metadata_path.read_text(encoding="utf-8"))
        metadata["manifest"]["rows"] += 1
        metadata_path.write_text(json.dumps(metadata), encoding="utf-8")
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)
        self.write_metadata()
        metadata = json.loads(metadata_path.read_text(encoding="utf-8"))
        metadata["machine_path"] = "C:\\private\\file"
        metadata_path.write_text(json.dumps(metadata), encoding="utf-8")
        with self.assertRaises(validator.ValidationError):
            validator.validate_release(self.root)


if __name__ == "__main__":
    unittest.main()
