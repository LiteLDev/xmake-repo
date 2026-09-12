# Android P7 validation

Status: G0–G2 implementation in progress. This is not a P7 completion record.
G3–G8 have not passed. Full inputs and logs are outside the repository under
`levilamina-p7-validation-20260910`.

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
  passed on that actual checkout. Header `main` and the original upstream
  checkout remain unchanged.
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

The follow-up PL review fixed four concrete issues: lifecycle callbacks now catch exceptions in exception-enabled Mod wrappers; the loader closes a library if registration discovery or registry insertion throws; failed loads always attempt their unload callback even when guarded resources are present; and a failed close keeps the Entry and handle resident. The registry releases its mutex during load/unload callbacks and rejects same-id concurrent loads. Seven host CMake tests pass, and the Android PL target builds with the exception-enabled ModLoader/JNI boundary.

The LL follow-up review also added an Android `createExceptionPtr` definition with explicit unsupported semantics (it returns empty because Android has no Windows SEH record), and KernelLifecycle marks a load in progress before releasing its mutex around ModRegistrar callbacks. The post-fix Android debug build and ELF link/strip verification passed; release verification is recorded separately after completion.

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

PL now points to `8ebd46fcd8914dc7f5ae8c63abbdb78347097fd3`, including failed-parent
retention, explicit close-failure ownership, callback exception containment and the expected ABI correction. The Launcher gitlink matches it.
Launcher APK assembly and the existing Java unit suite passed. The corrected
APK was installed with application data preserved on vivo `10AF6D0YNL00439`.
Its SHA256 is `acb0d22b19cd9a5033702e0776b03a81ea78816d8aeebdf618829f9ff8a41c37`.
The APK-derived provider build ID is `72b625c27d3418cba132be0ad460e4e0990df549`;
the rebound BMB SHA256 is
`7d88b516ad36f9eec5379b31f9b157a4705a0fb79b3cfc2ca2c3bf4b2c341cf7`.
The fixed creator preserved the original dataset/whitelist identities.

The first APK crashed in PL's Expected<void> return before LL loaded. The
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
runtime receipt is still pending. `Logger::flush()` remains sink-only and does
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
Local PL/P5/Header commits exist; recent GitHub pushes timed out, so remote
publication remains pending.

## Gates still open

Implementation source is committed as `c4921d7eae33f6275d31cfce93885c9a564da132`
(shared foundations) and `38eaa99793dc39ca2c10ced6a226087f9711d5d3` (Android
runtime and fixtures). Launcher is committed as
`9af3e0dfc15980d02ca8e8f6de5f26cfff2f72b7`. Post-commit debug/release builds,
P5 linking, stripping and visibility checks passed. The final FileSink/type-
visibility example still needs its device receipt; the user paused device work
on 2026-09-12. First-batch closure and remote publication remain pending.
The compact record is `validation/p7/g0-g2-summary.json`.

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
