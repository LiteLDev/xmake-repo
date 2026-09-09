from pathlib import Path
import json
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[2] / "scripts"))
import sync_core_headers as core


class CoreMergeTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix="ll-core-sync-")
        self.addCleanup(self.temp.cleanup)
        self.repo = Path(self.temp.name)
        self.git("init", "-b", "header")
        self.git("config", "user.name", "Fixture")
        self.git("config", "user.email", "fixture@example.invalid")
        self.git("config", "core.autocrlf", "false")
        self.write(".gitattributes", "*.h text eol=crlf\n")
        self.write(".github/workflows/build.yml", "name: core\n")
        self.write("xmake.lua", "-- H harness\n")
        for name, contents in {
            "Thing.h": "class Thing {};\n",
            "Remove.h": "struct Remove {};\n",
            "OldName.h": "struct Renamed {};\n",
            "Clash.h": "struct CommonPrecedence {};\n",
            "_HeaderOutputPredefine.h": "#pragma once\n",
        }.items():
            self.write("src/mc/" + name, contents)
        self.commit("H")
        self.h = self.rev()
        self.git("checkout", "-b", "upstream-main")
        self.write("xmake.lua", "-- full M core\n")
        self.write("src/mc/Thing.h", "class Thing { public: int extension(); };\n")
        self.git("rm", "src/mc/Remove.h")
        self.git("mv", "src/mc/OldName.h", "src/mc/NewName.h")
        self.write("src/mc/New.h", "struct Added {};\n")
        self.write("src-client/mc/Clash.h", "struct ShadowedPlatformDeclaration {};\n")
        self.write("src/mc/Thing.cpp", '#include "mc/Thing.h"\n')
        self.write("src/ll/Core.cpp", "int ll_core = 1;\n")
        self.commit("M core extensions")
        self.m = self.rev()
        self.git("checkout", "header")
        h_layers = core.layers(core.blobs(self.repo, {n: v for n, v in core.tree(self.repo, self.h).items() if core.is_header(n)}))
        self.android = {"mc/Thing.h": b"struct Thing { long android_field; };\n", "mc/_HeaderOutputPredefine.h": b"#pragma once\n"}
        s_layers = core.headers.repartition({"client": h_layers["src"], "server": h_layers["src"], "android": self.android})
        for path in (self.repo / "src/mc").glob("*.h"):
            path.unlink()
        for layer, entries in s_layers.items():
            for name, data in entries.items():
                self.write(f"{layer}/{name}", data.decode())
        self.write("test/main.cpp", "int main() {}\n")
        self.write("header-release.json", json.dumps({
            "provenance": {"base_release_commit": self.h, "upstream_header_commit": self.h},
            "manifest": {"sha256": "fixture"},
        }))
        self.commit("S published headers")
        self.s = self.rev()
        self.git("checkout", "-b", "feat/android-minimal-kernel", self.m)
        merged = subprocess.run(["git", "-C", str(self.repo), "merge", "--no-ff", "--no-commit", self.s], capture_output=True)
        self.assertIn(merged.returncode, (0, 1))

    def git(self, *args):
        return core.git(self.repo, *args)

    def rev(self):
        return self.git("rev-parse", "HEAD").decode().strip()

    def write(self, path, data):
        target = self.repo / path
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(data, encoding="utf-8", newline="\n")

    def commit(self, message):
        self.git("add", "-A")
        self.git("commit", "-m", message)

    def run_sync(self, mode="apply", **refs):
        return core.run(self.repo, mode, refs.get("main", self.m), refs.get("header", self.h), refs.get("release", self.s), None)

    def test_real_merge_preserves_extensions_add_delete_rename_and_android(self):
        result = self.run_sync()
        self.assertEqual(result["effective_headers"]["android"], core.headers.identity(self.android))
        for layer in ("src-client", "src-server"):
            self.assertIn(b"extension", (self.repo / layer / "mc/Thing.h").read_bytes())
            self.assertFalse((self.repo / layer / "mc/Remove.h").exists())
            self.assertFalse((self.repo / layer / "mc/OldName.h").exists())
            self.assertTrue((self.repo / layer / "mc/NewName.h").exists())
        self.assertEqual((self.repo / "src/ll/Core.cpp").read_text(), "int ll_core = 1;\n")
        self.assertEqual(self.git("diff", "--name-only", "--diff-filter=U"), b"")
        self.commit("real M + S integration")
        for ancestor in (self.m, self.h, self.s):
            self.git("merge-base", "--is-ancestor", ancestor, "HEAD")

    def test_idempotence_before_and_after_merge_commit(self):
        self.run_sync()
        before = self.git("write-tree")
        self.assertEqual(self.run_sync()["changed"], 0)
        self.assertEqual(before, self.git("write-tree"))
        self.commit("merge")
        head = self.rev()
        self.assertEqual(self.run_sync()["changed"], 0)
        self.assertEqual(head, self.rev())
        self.assertEqual(self.git("status", "--porcelain"), b"")

    def test_add_add_header_conflict_uses_actual_upstream_include_precedence(self):
        self.assertTrue(self.git("ls-files", "--unmerged", "--", "src-client/mc/Clash.h"))
        self.run_sync()
        self.assertEqual((self.repo / "src-client/mc/Clash.h").read_text(), "struct CommonPrecedence {};\n")

    def test_untracked_header_collision_is_preserved(self):
        # A new upstream-only file does not necessarily collide in this merge, so
        # deliberately remove its index entry and replace it with untracked work.
        path = "src-client/mc/New.h"
        self.git("update-index", "--force-remove", "--", path)
        self.write(path, "// user work\n")
        with self.assertRaisesRegex(core.headers.SyncError, "untracked"):
            self.run_sync()
        self.assertEqual((self.repo / path).read_text(), "// user work\n")

    def test_wrong_header_ancestor_refused(self):
        with self.assertRaises(core.headers.SyncError):
            self.run_sync(header=self.m)

    def test_parallel_fork_advance_does_not_change_frozen_s(self):
        self.git("update-ref", "refs/heads/publication-main", self.m)
        result = self.run_sync()
        self.assertEqual(result["commits"]["S"], self.s)
        self.assertEqual(self.git("rev-parse", "publication-main").decode().strip(), self.m)

    def test_changed_core_source_refused_on_repeat(self):
        self.run_sync()
        self.commit("merge")
        self.write("src/ll/Core.cpp", "// user subsequent work\n")
        with self.assertRaisesRegex(core.headers.SyncError, "source drifted"):
            self.run_sync()
        self.assertEqual((self.repo / "src/ll/Core.cpp").read_text(), "// user subsequent work\n")

    def test_unverified_header_changes_are_not_silently_replaced(self):
        self.git("merge", "--abort")
        self.git("checkout", "header")
        self.write("src-client/mc/Thing.h", "// newer header input\n")
        self.commit("invalid S mutation")
        changed = self.rev()
        with self.assertRaisesRegex(core.headers.SyncError, "faithful H"):
            self.run_sync(mode="verify", release=changed)


if __name__ == "__main__":
    unittest.main()
