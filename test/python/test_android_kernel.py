from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / "scripts"))
import android_kernel_binary as binary
import android_kernel_inputs as inputs


class KernelInputTests(unittest.TestCase):
    def test_missing_and_relative_inputs_are_rejected(self):
        for value in ("", "relative.so"):
            with self.subTest(value=value), self.assertRaises(inputs.InputError):
                inputs.required_path(value, "provider")

    def test_tampered_bytes_are_rejected_even_at_same_size(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "provider.so"
            path.write_bytes(b"valid")
            expected = {"bytes": 5, "sha256": inputs.sha(path)}
            path.write_bytes(b"other")
            with self.assertRaisesRegex(inputs.InputError, "SHA-256"):
                inputs.check_file(path, expected, "provider")

    def test_duplicate_metadata_is_rejected(self):
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "manifest.json"
            path.write_text('{"api":28,"api":21}', encoding="utf-8")
            with self.assertRaisesRegex(inputs.InputError, "duplicate"):
                inputs.read_json(path)


class IncludeTraceTests(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory(prefix="p6-include-")
        self.addCleanup(self.tmp.cleanup)
        root = Path(self.tmp.name)
        self.repo, self.header, self.sdk, self.traces = (root / n for n in ("core", "headers", "sdk", "traces"))
        for path in (self.repo, self.header, self.sdk, self.traces):
            path.mkdir()
        self.mc_names = ("mc/world/actor/Actor.h", "mc/client/game/ClientInstance.h", "mc/client/player/LocalPlayer.h")
        for name in self.mc_names:
            self.write(self.header / "src-android" / name, "// frozen " + name + "\n")
        self.pl = self.sdk / "src-android/pl/android/Mod.h"
        self.write(self.pl, "// frozen public SDK\n")
        self.ll = self.repo / "src-android/ll/core/CompilationContract.h"
        self.write(self.ll, "// project contract\n")
        self.s, self.pl_commit = (self.commit(path) for path in (self.header, self.sdk))
        self.config = {"repository": str(self.repo), "inputs": {"header_root": str(self.header), "preloader_root": str(self.sdk)},
                       "commits": {"S": self.s, "PL": self.pl_commit}}
        for name in binary.SOURCE_NAMES:
            lines = [self.ll, self.pl]
            if name == "HeaderSmoke":
                lines += [self.header / "src-android" / n for n in self.mc_names]
            self.write(self.traces / (name + ".txt"), "\n".join(map(str, lines)) + "\n")

    @staticmethod
    def write(path, text):
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text, encoding="utf-8", newline="\n")

    @staticmethod
    def commit(path):
        for args in (("init",), ("config", "user.name", "Fixture"), ("config", "user.email", "fixture@example.invalid"),
                     ("config", "core.autocrlf", "false"), ("add", "."), ("commit", "-m", "frozen input")):
            inputs.git(path, *args)
        return inputs.git(path, "rev-parse", "HEAD")

    def append(self, path):
        with (self.traces / "HeaderSmoke.txt").open("a", encoding="utf-8") as stream:
            stream.write(str(path) + "\n")

    def test_exact_git_sources_are_accepted(self):
        result = binary.verify_traces(self.config, self.traces)
        self.assertEqual(result["mc_unique_count"], 3)
        self.assertTrue(result["all_mc_from_S"])

    def test_byte_identical_project_mc_shadow_is_rejected(self):
        shadow = self.repo / "src-android/ll/core/mc/world/actor/Actor.h"
        self.write(shadow, (self.header / "src-android" / self.mc_names[0]).read_text())
        self.append(shadow)
        with self.assertRaisesRegex(inputs.InputError, "outside Header S"):
            binary.verify_traces(self.config, self.traces)

    def test_changed_mc_blob_is_rejected(self):
        self.write(self.header / "src-android" / self.mc_names[0], "// same checkout, changed bytes\n")
        with self.assertRaisesRegex(inputs.InputError, "Git blob"):
            binary.verify_traces(self.config, self.traces)

    def test_windows_layer_cannot_enter_android(self):
        path = self.header / "src-client" / self.mc_names[0]
        self.write(path, "// Windows Header\n")
        self.append(path)
        with self.assertRaisesRegex(inputs.InputError, "wrong platform"):
            binary.verify_traces(self.config, self.traces)

    def test_desktop_ll_header_is_rejected(self):
        path = self.repo / "src/ll/api/Global.h"
        self.write(path, "// desktop PCH\n")
        self.append(path)
        with self.assertRaisesRegex(inputs.InputError, "unapproved LL"):
            binary.verify_traces(self.config, self.traces)

    def test_missing_trace_is_rejected(self):
        (self.traces / "KernelEntry.txt").unlink()
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)

    def test_g3_requires_every_new_translation_unit(self):
        self.config["phase"] = "G3"
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)
        for name in binary.SOURCE_NAMES_G3 - binary.SOURCE_NAMES:
            self.write(self.traces / (name + ".txt"), str(self.ll) + "\n")
        result = binary.verify_traces(self.config, self.traces)
        self.assertEqual(len(result["units"]), 7)
        (self.traces / "KernelApi.txt").unlink()
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)

    def test_unknown_phase_cannot_relax_the_source_contract(self):
        self.config["phase"] = "unknown"
        with self.assertRaisesRegex(inputs.InputError, "unsupported kernel phase"):
            binary.verify_traces(self.config, self.traces)

    def test_platform_layout_requires_entry_and_output_units(self):
        self.config.update(phase="G3", source_layout="platform-v1")
        (self.traces / "KernelEntry.txt").unlink()
        for name in binary.SOURCE_NAMES_G3_PLATFORM - {"KernelLifecycle", "HeaderSmoke"}:
            self.write(self.traces / (name + ".txt"), str(self.ll) + "\n")
        self.assertEqual(len(binary.verify_traces(self.config, self.traces)["units"]), 8)
        (self.traces / "Output_android.txt").unlink()
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)

    def test_changed_pl_sdk_is_rejected(self):
        self.write(self.pl, "// changed SDK\n")
        with self.assertRaisesRegex(inputs.InputError, "Git blob"):
            binary.verify_traces(self.config, self.traces)


if __name__ == "__main__":
    unittest.main()
