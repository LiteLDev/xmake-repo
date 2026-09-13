# Android P7 validation

Status: G0–G2 first-batch acceptance completed on 2026-09-13. P7 is not complete.
G3–G8 have not passed. Full inputs and logs are outside the repository under
`C:/Users/ROG/levilamina-p7-validation-20260910` (historical device evidence) and
`C:/Users/ROG/levilamina-p7-validation-20260913` (reviewed candidate and host/device evidence).

## Fixed inputs and decisions

- LL base: `5bcf0f4a1907f75bf02691fe15993d00f8fefa5e`, branch
  `codex/p7-android-shared-core`.
- PL base: `d12886b33ff46364efcc42252ea2e124fff051d9`, branch
  `codex/p7-windows-api-parity`. Environment configuration was committed as
  `6652b0706ab3d6eb293f057a45005eb85205daf4`.
- Launcher base: `4c4c68ba6862a21e2409f35670c09572531f11f8`, separate worktree
  and branch `codex/p7-client-lifecycle`.
- Original Header S remains `6d5f02513384b051436fa0a26902894d10f6205a`.
  Necessary Header corrections were accepted at
  `2ae3e432d1e4b003e89194979c13e7e437685056` on `codex/p7-header-compat`
  and are consumed from a clean detached worktree. The validated-sync checker
  passed on that actual checkout. Header `main` remains unchanged. A September 13
  read-only check found the upstream reference checkout clean at `2faa4f21e6`,
  ahead of the historical `1bc96d524a`; this was not a P7 operation and does not
  change the frozen Header input. No reference branch was switched or reset.
- MC `1.26.40.5`; NDK `28.2.13676358`; arm64-v8a; API28; shared libc++;
  16 KiB ELF alignment. BMB creator `17cb32a1` and reader `194310d7` are unchanged.
  The separately authorized P5 public-dependency attribution correction is
  `b46b8ee62f27c0f7337b0d454fd10999366c0107`; its full regression and owned
  Android libc++ file/stream fixture passed. Its MC whitelist is unchanged.
- LL and its Mod SDK use C++23, exceptions and RTTI. Only the concrete MC-facing
  allocator implementation needs `-fno-rtti`, because the fixed MC interface
  does not export its base typeinfo. This does not change ordinary LL/Mod RTTI.
- On 2026-09-11 the user chose to restore the original
  `std::variant<std::string, std::uint16_t>` prerelease storage and remove the
  constant-evaluation requirement from PreRelease, Version and dependent
  VersionRequirement operations. Parsing, ordering, range and serialization
  semantics remain covered by runtime tests. The `_version` literal remains an
  inline runtime function. No custom Identifier storage or STL macro workaround
  remains.
- New member variables use `m` followed by PascalCase. Shared source changes
  must correspond to a concrete build or runtime obstacle.

`baseline.json` records full commits, branches, worktrees and remotes before
implementation. Remote tips were checked without replacing the accepted inputs.
`protected-prelink.patch` and its recorded hashes preserve the old dirty prelink
workspace; P6 inputs and ten-run evidence remain available.

## Necessary source changes

| Original responsibility | Android obstacle | Implementation and evidence |
| --- | --- | --- |
| PL Config | Empty paths before LL static initialization; duplicate Java/native load references | Stable PL environment storage and Launcher configuration before PL loads the parent; owned Android environment fixture passed |
| PL expected ABI | C++20 selected nonstd::expected while C++23 selected std::expected, changing the return convention of Expected<void> | Pin expected-lite's backend at the public boundary; seven host tests and the Android C++23 fixture passed; corrected APK reached LL initialization |
| SystemUtils / DynamicLibrary | Opaque dlopen handle differs from module identity; moves duplicated ownership | Android backend, transfer/clear ownership and retain handles on release failure; owned A/B SO fixture passed on vivo, including injected close failures |
| Version / VersionRequirement | NDK variant is not fully constexpr | Original storage restored; all 11 original/runtime tests passed on Windows and Android; MSVC client/server test compilation passed |
| Event / ConsoleOutputEvent | Android Header lacks LL NBT convenience operators | Shared `nbt[key]` expressions retained; Android operator support compiled and linked using existing P5 function imports; native round-trip passed in the original-API example on vivo in debug and release |
| Expected | CommandOutput binding pulls game commands into basic error handling | Existing logger/function output moved unchanged to ExpectedOutput.cpp and command binding to ExpectedCommandOutput.cpp |
| Mod | World path methods depend on a later client/world service binding | Existing world methods moved unchanged to ModWorld.cpp; not part of the initial G2 source closure |
| LeviLamina | Service UUID persistence depends on the separate MC UUID interface | Existing method moved unchanged to ServiceUuid.cpp; not part of the initial G2 source closure |
| Versions | Game BuildInfo query is independent of the client role/protocol queries | Existing getGameVersion moved unchanged to GameVersion.cpp; game query validation remains a later gate |
| ErrorUtils | Exception output was defined inside the Windows backend | Existing printCurrentException moved unchanged to shared ErrorOutput.cpp |
| Memory | Allocator operators included RTTI-dependent symbol/reflection headers | Existing allocation declarations and generic error/size functions extracted into Allocator.h/.cpp; Memory.h still exposes them; a no-RTTI consumer cannot call dynamic type-name reflection |
| StringUtils | Windows conversion backend and missing NDK floating from_chars | Shared string logic extracted; six Android floating-parser tests passed (formats, boundaries, subnormals, errors and caller floating environment) |
| NativeModManager | Process-wide loading scope and handle lookup lock block module identity during load | Thread-local nested scope, separate identity lookup lock and failed-owner/error retention; 31 original-manager checks passed on vivo, including reentrant A/B loading and custom exception lifetime |

| Native cache | External storage refreshed mtime during the first read; short reads and interrupted I/O caused false copy failures | Compare the full copied bytes against a stable source snapshot, with metadata checked before/after comparison; 10 owned device cases passed, including actual source-change rejection |
| Mod enable failure | State remained Disabled, so normal onDisable skipped rollback after a failed enable | Original Mod runs its registered disable callback on failure and aggregates cleanup errors; native manager retains the original Error while it owns the SO |
| C++ type exports | Method visibility did not export the vtable used by inline PatternFormatter constructors | Type visibility exports required vtables/RTTI, while unmarked methods stay hidden; post-commit debug/release link checks passed; required vtable public and unmarked internal getter hidden |

The September 13 review corrected the previous PL hardening: publish the existing
Entry before entering load, reserve both id and SO path through Loading state,
and retain a close failure even when registration/duplicate validation rejects the
Mod. There is no post-callback container insertion or separate loading-id set.
Failed-load cleanup now uses the same guarded-resource check as shutdown; it
must not destroy context/origin slots while provider leases still reach them.
Registration-discovery exceptions are destroyed before their SO can be closed.
This retains the registry's existing allocation contract; allocation exhaustion
and full shutdown callback draining are not newly supported capabilities.

All eight PL host test groups passed, including throwing callback wrappers,
optional lifecycle callbacks, worker queries during load, nested/duplicate-path
loading, rejected-close retention and guarded failed-load retention. The Android
provider and throwing-wrapper executable compiled. The common public PL headers
remain shared; the detailed platform contract is recorded in PL's
`docs/android-p7-environment.md`. Deprecated reverse symbol lookup and unsupported
register-save options are not counted as working Android capabilities.

KernelLifecycle now refuses to publish a successful load after a stop result and
does not call the host logger under its mutex. A host fixture compiled the actual
state implementation with isolated collaborators and passed load/stop races,
exception/log reentry and repeated-close receipt checks. This is not MC or Android
runtime evidence. The empty Android `createExceptionPtr` implementation was removed:
the SEH record converter is declared only for the existing Windows platforms.
Affected client/server Expected.cpp and SEH declaration compilation passed (two
units). Six new Android backend files were formatted with this project's rules;
functions moved unchanged from original shared/Windows files retained their bodies.

## Build and device evidence in progress

The formal Android target now compiles 45 shared/client/backend source files,
including the original managers, EventBus, Logger, sinks and thread pool. Debug and release
linking through P5 and both pre-strip/post-strip verification passed. The original
13 Planner tests passed on vivo. The original shared source table also compiled
as 31 units for each Windows client/server role (62 units total); the subsequent
rollback change passed four affected-unit checks. These are source compilation,
not the full G7 Windows target/game matrix. The P7 include/source validator's 16
Python tests passed; obsolete P6 source-table formats are rejected.

The accepted Android Header passed debug/release include-all builds, 48,057 typed
storage checks with zero failures (7,721 untyped fields remain unverified), a
final affected-header delta of 23 typed checks, and all 28 Header Python tests.
The selected HeaderVerifier classes report zero issues. Windows Header receipts
reuse the previous validated compile only after checking exact effective-header
and build-rule equality; these are not new Windows compiler runs.

The reviewed candidate uses LL `0b9fadd2395a9f575849482cbec56327419e5e43`, PL
`7cf14db14f13cf87a408ecaf09fc9dce9c6cc7ed`, and Launcher
`ecc602a0360802678e0a14c04fd058077f91b98d`. The Launcher gitlink matches PL.
A fresh Launcher output directory produced the APK and passed all 69 Java tests.
The applicationId and signing certificate match the existing installation, and
the APK's libc++ is byte-identical to the fixed NDK library. APK-extracted libraries
passed AArch64, SONAME, dependency and 16 KiB checks; the provider targets API28.

Current APK SHA256:
`6a9f8cbfbf2c1565819b20cf31fd90f581d9ffcc980526659b6d7ac909ac6c54`.
Provider build ID: `8e451cefa4d4d2efbd3d19c74abfe3c9597396cd`.
Rebound BMB SHA256:
`84d39a93fd28250898ba2706f6de4ee265bce6d1caec4989ce6f6f88c2022b22`.
The fixed creator authenticated all stored records/reverse indexes and preserved
dataset provenance, semantic identity and whitelist counts. Both LL modes were
rebuilt after the source commit, so the embedded version is `0b9fadd239`; their
P5 link, strip, public visibility and source/include checks passed on these inputs.

This corrects a source/artifact mismatch in the previous record: September 12
commits were listed alongside the September 11 APK/provider. That older APK
(`acb0d22b…`) and its device results remain historical evidence. The current
candidate subsequently passed the device acceptance recorded below.

In the September 11 device runs, the first APK crashed in PL's Expected<void> return before LL loaded. The
corrected APK reached shared LL initialization and the game menu. Actual process
maps contain one app `libc++_shared.so`, loaded from the APK's native library
directory. This does not count as Game Ready evidence.

The original manager discovered and ran the formal P7 example in debug and
release, producing `LeviLaminaP7Example/data/p7-load.json` with constructor and
worker identity, directories and actual NBT round-trip checks. Application maps
confirm private SO cache paths separate from these user-data paths.

The original DefaultSink wrote the configured `LeviLamina/data/logs/latest.log`
and Android console output. Its file is buffered: process force-stop can lose the
last buffer. A final example update adds the original FileSink at
`LeviLaminaP7Example/data/p7-example.log`, with Info-level sink flushing. Its final
runtime receipt now passes in both final debug and release. `Logger::flush()` remains sink-only and does
not prove queue drain.

The original-manager fixture passed 31 device assertions, covering reentrant A/B
load, static/worker identity, optional enable/disable callbacks, malformed JSON,
missing dependencies, malformed ELF, independent OS/architecture/SDK rejection,
load/enable exceptions, rollback and failure retention. Its resources are real
file streams; custom exception destructor markers prove original exceptions are
retained rather than merely converted to text. A failed rollback leaves the
resource and SO owned by the manager and reports an error.

Fixture lifecycle access is a test-only adapter linked into a separate fixture
host from the formal core objects. No test entry points enter the formal target.
The device evidence is `native-manager-fixtures/device-result.json`; tests do not
claim game Ready or complete unloading. The eleven owned fixture directories
were archived outside Mod discovery, and the formal release was restored.

Evidence is retained under `device-g2`, `launcher-apk-inputs`, `pl-expected-abi`,
`p5-sdk`, and `shared-runtime-debug` in the external validation directory.
The reviewed PL, Launcher and LL source commits were published with ordinary
pushes on September 13. No force push or Header-main merge was performed.

## Final first-batch device acceptance, September 13

The user resumed device work on vivo `10AF6D0YNL00439` (V2454A, Android API36).
The matching APK was installed with `adb install -r`; the previous APK, Mod
binaries/manifests and runtime package were backed up. The installed APK SHA256
matches the candidate. No application data was cleared and no world was entered.

- Formal debug (PID20928) and release (PID28810) both passed the original Mod
  registration, constructor/worker identity, directory and native NBT round trip.
  The original FileSink wrote its flushed Info message in both modes. Release
  receipt/log mtimes are newer than that launch, so an older log is not the proof.
- Each run's process maps and on-device hashes bind the actual PL, shared libc++,
  LL and example to their exact candidate files. There is one app libc++ image;
  private cached SO paths remain separate from the canonical user-data paths.
- The original-manager fixture host (PID26495), rebuilt from the same release
  objects, passed all 31 assertions. Startup logs independently confirm malformed
  manifest, missing dependency, invalid ELF and each OS/architecture/SDK rejection.
  Original error-lifetime markers and failed-resource ownership records were saved.
- Three PL suites ran successfully on Android: lifecycle registry, guarded
  ownership and throwing/optional C++ callback wrappers. Registry tests use owned
  fake close/hook backends to inject failures; this is not new MC-hook evidence.
- The cross-SO fixture links the final production SystemUtils object. Actual
  Android dlopen/dlclose, A/B constructor/thread identities, containers, exceptions,
  move ownership, injected close failure retention and loader diagnostics passed.

The eleven owned fixture directories and their data were archived outside
discovery at `p7-fixture-evidence/20260913-final-g2`. The formal release was restored
and verified at the Minecraft menu. The pre-existing Mod configuration hash is
unchanged. The final evidence entry is `device-final/acceptance.json`; the compact
repository record is `validation/p7/g0-g2-summary.json`.

This closes the bounded G0–G2 delivery. Local `candidate/index.json` describes its
accepted test inputs; it is not a G6 SDK release or proof that the old P6 package
publisher supports P7. The code and public ABI inputs did not change during the
device session. Earlier build-only receipts, including the frozen PL documentation,
describe their state before this device acceptance.

## Gates still open

The first batch supports the normal root-level native entry and the fixed LL/
platform shared dependency scope. Arbitrary inter-Mod DT_NEEDED libraries and
additional entry layouts are not a published SDK contract yet. Throw-site and
foreign-thread stack capture are also not validated Android capabilities; an
empty exception stack is not reported as a captured throw-site stack.

Test iterations stopped the app from the menu to replace candidates. They did
not enter a world and do not prove normal-close cleanup. Parent PL activation is
not game Ready; general Android child and parent unloading remain refused until
the shared callback/task/log drain is established.

G3–G8 remain unpassed: event drain, client Ready/world/exit integration, remaining
applicable modules, formal SDK/package, final regression and removal of the P6
parallel implementation. No full-client unload guarantee is claimed here.
