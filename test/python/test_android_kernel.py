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
        self.tmp = tempfile.TemporaryDirectory(prefix="p7-include-")
        self.addCleanup(self.tmp.cleanup)
        root = Path(self.tmp.name)
        self.repo, self.header, self.sdk, self.traces, self.view = (root / n for n in ("core", "headers", "sdk", "traces", "include"))
        for path in (self.repo, self.header, self.sdk, self.traces, self.view):
            path.mkdir()
        self.mc_names = ("mc/world/actor/Actor.h", "mc/client/game/ClientInstance.h", "mc/client/player/LocalPlayer.h")
        for name in self.mc_names:
            self.write(self.header / "src-android" / name, "// frozen " + name + "\n")
        self.pl = self.sdk / "src-android/pl/android/Mod.h"
        self.write(self.pl, "// frozen public SDK\n")
        self.backend = self.repo / "src-android/ll/core/KernelLifecycle.h"
        self.shared = self.repo / "src/ll/api/Global.h"
        self.write(self.backend, "// platform implementation\n")
        self.write(self.shared, "// original shared interface\n")
        self.write(self.view / "ll/api/Global.h", self.shared.read_text(encoding="utf-8"))
        self.s, self.pl_commit = (self.commit(path) for path in (self.header, self.sdk))
        self.config = {"repository": str(self.repo), "inputs": {"header_root": str(self.header), "preloader_root": str(self.sdk)},
                       "commits": {"S": self.s, "PL": self.pl_commit}, "phase": "P7-G3", "source_layout": "shared-v1",
                       "role": "kernel", "sources": ["src/ll/api/event/Event.cpp", "src-android/ll/core/main_android.cpp"],
                       "include_roots": [str(self.view)],
                       "ll_headers": {"ll/api/Global.h": {"source": "src/ll/api/Global.h", "sha256": inputs.sha(self.shared)}}}
        self.first_trace = next(iter(sorted(binary.source_names(self.config))))
        for name in binary.source_names(self.config):
            lines = [self.view / "ll/api/Global.h", self.backend, self.pl]
            if name == self.first_trace:
                lines += [self.header / "src-android" / n for n in self.mc_names]
            self.write(self.traces / (name + ".txt"), "\n".join(map(str, lines)) + "\n")

    @staticmethod
    def write(path, text):
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(text, encoding="utf-8", newline="\n")

    @staticmethod
    def commit(path):
        for args in (("init",), ("config", "user.name", "Fixture"), ("config", "user.email", "fixture@example.invalid"),
                     ("config", "core.autocrlf", "false"), ("config", "commit.gpgsign", "false"),
                     ("add", "."), ("commit", "-m", "frozen input")):
            inputs.git(path, *args)
        return inputs.git(path, "rev-parse", "HEAD")

    def append(self, path):
        with (self.traces / (self.first_trace + ".txt")).open("a", encoding="utf-8") as stream:
            stream.write(str(path) + "\n")

    def test_exact_shared_backend_and_git_sources_are_accepted(self):
        result = binary.verify_traces(self.config, self.traces)
        self.assertEqual(result["mc_unique_count"], 3)
        self.assertTrue(result["all_mc_from_S"])
        self.assertEqual(len(result["units"]), 2)

    def test_byte_identical_project_mc_shadow_is_rejected(self):
        shadow = self.repo / "src-android/ll/core/mc/world/actor/Actor.h"
        self.write(shadow, (self.header / "src-android" / self.mc_names[0]).read_text(encoding="utf-8"))
        self.append(shadow)
        with self.assertRaisesRegex(inputs.InputError, "outside Header S"):
            binary.verify_traces(self.config, self.traces)

    def test_changed_mc_blob_is_rejected(self):
        self.write(self.header / "src-android" / self.mc_names[0], "// changed Header bytes\n")
        with self.assertRaisesRegex(inputs.InputError, "Git blob"):
            binary.verify_traces(self.config, self.traces)

    def test_windows_mc_layer_cannot_enter_android(self):
        path = self.header / "src-client" / self.mc_names[0]
        self.write(path, "// Windows Header\n")
        self.append(path)
        with self.assertRaisesRegex(inputs.InputError, "wrong platform"):
            binary.verify_traces(self.config, self.traces)

    def test_shared_ll_requires_controlled_view(self):
        self.append(self.shared)
        with self.assertRaisesRegex(inputs.InputError, "unapproved LL"):
            binary.verify_traces(self.config, self.traces)

    def test_changed_shared_source_or_view_is_rejected(self):
        for path in (self.shared, self.view / "ll/api/Global.h"):
            with self.subTest(path=path):
                original = path.read_text(encoding="utf-8")
                self.write(path, "// changed shared header\n")
                with self.assertRaisesRegex(inputs.InputError, "changed after configuration"):
                    binary.verify_traces(self.config, self.traces)
                self.write(path, original)

    def test_android_backend_cannot_shadow_original_interface(self):
        shadow = self.repo / "src-android/ll/api/Global.h"
        self.write(shadow, self.shared.read_text(encoding="utf-8"))
        self.append(shadow)
        with self.assertRaisesRegex(inputs.InputError, "shadows"):
            binary.verify_traces(self.config, self.traces)

    def test_applicable_client_ll_header_is_accepted_in_view(self):
        source = self.repo / "src-client/ll/core/Client.h"
        self.write(source, "// original client interface\n")
        view = self.view / "ll/core/Client.h"
        self.write(view, source.read_text(encoding="utf-8"))
        self.config["ll_headers"]["ll/core/Client.h"] = {"source": "src-client/ll/core/Client.h", "sha256": inputs.sha(source)}
        self.append(view)
        result = binary.verify_traces(self.config, self.traces)
        self.assertIn("src-client/ll/core/Client.h", result["units"][self.first_trace]["authenticated_headers"])

    def test_missing_trace_is_rejected(self):
        (self.traces / (self.first_trace + ".txt")).unlink()
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)

    def test_every_added_source_requires_its_compilation_trace(self):
        self.config["sources"].append("src/ll/api/io/Logger.cpp")
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)
        self.write(self.traces / "src_ll_api_io_Logger_cpp.txt", str(self.view / "ll/api/Global.h") + "\n")
        self.assertEqual(len(binary.verify_traces(self.config, self.traces)["units"]), 3)
        self.write(self.traces / "Unlisted_cpp.txt", str(self.backend) + "\n")
        with self.assertRaisesRegex(inputs.InputError, "include traces"):
            binary.verify_traces(self.config, self.traces)

    def test_old_or_unknown_source_formats_are_rejected(self):
        for phase, layout in (("G5", "platform-v1"), ("P7-G3", "platform-v1"), ("P7-G0-G2", "shared-v1"), ("unknown", "shared-v1")):
            with self.subTest(phase=phase, layout=layout), self.assertRaisesRegex(inputs.InputError, "unsupported shared-core"):
                binary.verify_traces(dict(self.config, phase=phase, source_layout=layout), self.traces)

    def test_changed_pl_sdk_is_rejected(self):
        self.write(self.pl, "// changed SDK\n")
        with self.assertRaisesRegex(inputs.InputError, "Git blob"):
            binary.verify_traces(self.config, self.traces)

    def test_original_api_example_can_use_frozen_mc_header(self):
        self.config["role"] = "example"
        self.assertEqual(binary.verify_traces(self.config, self.traces)["mc_unique_count"], 3)


if __name__ == "__main__":
    unittest.main()
