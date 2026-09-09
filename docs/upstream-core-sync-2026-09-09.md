# Upstream core integration, 2026-09-09

The core branch uses the upstream workflow: merge the generated Header release,
retain upstream main's existing Header implementations and API extensions, then
validate and fix the integrated core. Generated declarations do not replace these
extensions wholesale. Android declarations remain pinned to the validated release.

## Inputs and branch roles

- M: `c9a3b9cb0507cfb072f3d33be4324d1642c24889`.
- H: `48f5fbfc2cbd539c08316d855555ce084478a678`.
- S: `6d5f02513384b051436fa0a26902894d10f6205a`.
- D: `a1e1f0d7be65959a4c68822cb861b3365ae43755`.

S and the immutable D archive tag were published with an ordinary atomic push.
Header main is clean and its local/remote divergence was 0/0 after publication.
The core branch starts at M and performs an ordinary `--no-ff --no-commit` merge
of S. H is already an ancestor of both parents. There is no unrelated-history,
ours-strategy, squash, or placeholder ancestry merge in this step.

`config/upstream-sync.lock.json` records immutable inputs and the actual effective
Header identities. It does not refer to the commit containing itself. Android
implementation and binary validation are later changes; they are not included in
the synchronization resolution.

## Header resolution and complete audit

S's Windows declarations match H with the previously validated, reversible
predefine trailing-space adjustment. M already contains H. Consequently the
Windows result is H plus M's existing edits, which is exactly M's effective view.
The core resolver repartitions these two Windows views together with S's Android
view. It never derives Android declarations from the Windows edits.

| Effective view | Header count | SHA-256 of logical path and Git bytes |
| --- | ---: | --- |
| Windows client | 20,897 | A787187BF9CCA9A6624C418D1405B35BB522ACA3989C1E4A493892415AEB36E1 |
| Windows server | 20,824 | A85654B59CBCA623FCE764371693BF644570096CFF5C11F8FCEDDAD82F368806 |
| Android | 17,367 | 4C68F48A202CBF892C316EA86B5FAE33FA77444A5033A2A34A52382BB31B45F2 |

The resulting physical tree has 55,394 Headers. Both Windows views are compared
over all paths and bytes; no `mc/**` subtree is exempt. Android's path set and bytes
remain S's. Windows-only changes move out of common storage when Android differs.
Root M's common-first include order still produces the exact recorded views.

`docs/validation/upstream-core-header-adaptations.json` enumerates all 1,181
platform/path differences from H to M, with source hashes, change types, hunk
locations and patch hashes. The adjacent `.patch` stores every complete diff,
including added/deleted declarations and missing-final-newline markers.

- Client: 122 final-newline-only entries, one predefine entry, 471 other edits.
- Server: 122 final-newline-only entries, one predefine entry, 464 other edits.
- The same common edit is intentionally audited in both consuming platform views.
- Type declarations, helper implementations and API extensions are classified as
  upstream MC source edits; they are not excused as infrastructure differences.

Examples include the real `optional_ref` implementation, Actor's LL-facing
methods, custom NBT interfaces, and M's two renderer include fixes and empty
`LinearAllocator::deallocate` implementation. They are retained from M, not new
Android source-compatibility inventions. Compile success alone does not prove
that all of these APIs work against a running game.

## Predefine, PCH and source conflicts

The only predefine path is `mc/_HeaderOutputPredefine.h`, separately present in
the Windows platform layers. Its complete H-to-M hunks remain in the audit:

1. The macro/include hunk uses `ll/api/base/Macro.h` and `LL_SHARED_IMPORT`, retaining
   core's calling-convention macros, warnings and standard-library includes.
2. Expected/fmt/alias headers retain core's `nsel_CONFIG_SELECT_EXPECTED`,
   `ll/api/base/Alias.h`, `StdInt.h` and `fmt/std.h` integration.
3. Incomplete Windows and winrt types use M's `TypedStorageType` specializations.
   These storage-related edits are recorded explicitly, not generalized into
   permission to weaken storage checks or change Android storage types.
4. Primitive aliases, `optional_ref`, vector definitions and `brstd::function_ref`
   come from M's real implementation headers. Their type changes are included in
   the full audit and Windows builds.
5. The standalone Header harness's storage/PayloadPacket definitions are replaced
   by M's LL implementations. PCH `src/ll/api/Global.h` and its dependencies remain
   exactly M; Android does not consume this PCH.

At integration commit `101e7399401c51c50f6bad2e92bb8d3a27e33410`, M's `src/ll`,
platform LL sources, `src-test`, all MC `.cpp` files and root xmake entry retain
their original paths and bytes. This also repairs merge rename
heuristics that relocated some MC implementation files while S split Headers
across platforms. The resolver checks every non-Header source file against M.

Root `.github/workflows/build.yml` remains M's complete core workflow. The
`.gitattributes` resolution retains M's text/binary rules and S's explicit
materialization rules. `test/main.cpp` retains the S Header harness. Header release
validation is run against the detached S checkout using its own root harness;
the core tree is not falsely certified by S's Header-only metadata/receipts.

## Source compatibility after the merge

The first integrated server/release build exposed a local include whose Header
had moved into a platform layer. A scan of all original source/Header quote
includes found three affected `.cpp` include sites and no affected Header sites:

| Source | Original include | Qualified include |
| --- | --- | --- |
| `src/mc/util/MolangVariableMap.cpp` | `MolangVariableMap.h` | `mc/util/MolangVariableMap.h` |
| `src/mc/world/actor/Actor.cpp` | `provider/ActorEquipment.h` | `mc/world/actor/provider/ActorEquipment.h` |
| `src/mc/world/actor/Mob.cpp` | `provider/ActorEquipment.h` | `mc/world/actor/provider/ActorEquipment.h` |

These three one-line changes use the existing include roots to find the same M
declarations in their platform layers. Header bytes, APIs, bodies, layouts and
calling conventions are unchanged. The patch is a separate commit following the
real merge; `config/upstream-core-compatibility.json` records original/result
source hashes and the exact include substitutions. The synchronization helper
describes the initial merge; subsequent source changes must retain this separate
audit rather than be reset to M to make a check pass.

## Validation status

G1-H is complete, including a fresh original-ELF HeaderVerifier pass (zero issues).
All eight pure-M Windows build combinations and 36 Python tests have passed.
The integrated Windows matrix is being rerun with the three include fixes above.
G2 and later gates are not complete.

Pure M client/server debug/release, both with tests enabled and disabled, compile and link locally.
The local compiler is clang-cl 21.1.0, xmake 3.0.7, and installed MSVC 14.51.36231
(VS 2026). Upstream CI currently selects LLVM 22; local evidence is not presented
as that CI result. Windows bedrockdata versions are M's 26.40.5-client.2 and
26.40.8-server.2; preloader is 1.16.2.

Two environment failures were preserved before the successful baseline:

- A long absolute build path exceeded Windows' process command-line limit in
  upstream prelink. A C-drive directory junction shortens only artifact paths.
- A cached cpr library required STL exports absent from MSVC 14.44. Selecting the
  already installed 14.51 toolset resolved linking without editing core sources.

Tests-enabled configuration initially failed building GoogleTest 1.17.0 because
its warnings-as-errors flags reject clang's character-conversion warning. This
dependency build issue was resolved by building that exact package with process-local
`CL=/clang:-Wno-error=character-conversion`. The warning remains visible; the flag
was scoped to the package install and is absent from core builds. No source,
library version, or test assertion was changed. Existing
LL tests execute through the game server-thread executor; a tests-enabled DLL
build does not count as executing those tests in Minecraft.

Large logs, resolved package details, artifact hashes and commands are retained
in the external `levilamina-p6-validation-20260908/resume-20260909` evidence tree.
The source repositories for PL, P5, BMB, Launcher and the original upstream
Header checkout remain protected.
