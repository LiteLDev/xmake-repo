# Android P7 validation

October 18 client unification is in progress. LL and published MC headers now
use src/src-client/src-server; LL_PLAT_C still means Windows client and
LL_PLAT_A still means Android client. The prior October 17 device receipts below
remain tied to their original binaries. The current batch must obtain a new
frozen Header input, LL build/strip/determinism receipts and loaded-hash device
matrix before acceptance. No preloader or runtime data format changes are made.

P7 Hook scope is deliberately limited to the existing startup/single-thread
behavior. Android GlobalThreadPauser is an optional empty capability and
does not add concurrent Hook safety. Concurrent Hook mutation, in-flight
trampoline reclamation and arbitrary runtime Hook replacement are unsupported
and are reported as capability limits, not treated as failed implementation
work.

Current October 17 candidate: see android-p7-g0-reconvergence.md. The sections
below retain their historical source/input boundaries; the former PL lifecycle
adapter, guarded Hook layer and unload/drain candidate are absent from current
production sources. Their historical receipts do not validate the new candidate.

Final Android debug kernel/example and two clean release builds passed. All 14
release import/compiler/strip artifacts are byte-identical at the same canonical
path. Actual .debug_info/.symtab retention/removal and the production C++ runtime
reader were checked on debug/release plain/stripped files. Six PL host tests,
16 Python checks, current-pair P5 cases and 64 Launcher app tests passed.
Windows client debug/release passed; the corrected Windows prelink dependency
profile consumed 224 real objects and 13 archives and produced exactly the
original tool's import-library bytes. The default BMB requirement now matches
the actual v0.8.5 Windows tag's v0.8.2 requirement, not the stale 0.8.0 pin.

Earlier device own-target P5 ABI and PL Hook tests passed, including SIGTRAP=133
for the empty IFUNC resolver. They retain their earlier provider identities.
The first APK installed, but native runtime-symbol setup failed; a stale PL BMB
dataset pin was proven in source, without proving it was the only device failure.
The current runtime-v2 pair, constructor-based runtime reader and corrected APK
are not yet installed: the vivo disconnected. Actual game Ready/world/close
tests, full SO unload and runtime thread pause are not accepted by the
historical receipts. Full SO physical reclamation, concurrent Hook mutation and
runtime thread pause remain unsupported P7 capabilities.
Current artifacts are on A: under WORKTEMP/p7-windows-reconvergence-20261017;
the current short build directories are A:/p7finald17 and A:/p7final17. Earlier
A:/p7adf17, A:/p7arf17 and A:/p7arf217 retain their original provider bindings.

Status: G0–G2 first-batch acceptance completed on 2026-09-13. P7 is not complete.
The current candidate has the non-device foundation, Android Debug/Release, P5,
SDK-only compile and canonical clean-build gates recorded in
WORK-TEMP/validation/p7-remaining-20261018; P7ServiceTests also compiles and
links through the formal Android kernel. G3–G8 are not closed. Full inputs and
logs are outside the repository under
`C:/Users/ROG/levilamina-p7-validation-20260910` (historical device evidence) and
`C:/Users/ROG/levilamina-p7-validation-20260913` (reviewed candidate and host/device evidence).

The current clean staging retry did not produce a new package: the isolated
xmake configuration first rejected an invalid local recipe path, and the
authenticated LevelDB checkout then failed its fresh NDK r28c build on
deprecated aligned_storage treated as an error. The earlier candidate's
SDK install and SDK-only compile remain valid for that candidate; they do not
close G6 for the current source commit. No LevelDB source, warning policy or
fallback package was changed.

For delivery review, a reference staging receipt was produced from the already
verified stripped ELF pair bound to source commit d632211a98. It records the
SDK installation by reference and the exact kernel/example hashes under
WORK-TEMP/validation/p7-remaining-20261018/android-package-d632211a98-v3.
This is a candidate receipt, not a claim that the failed clean rebuild or
device deployment has passed.

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

## September 14: Android-only adaptation candidate

The user narrowed the work to Android adaptation and excluded repairs to existing
LL defects. The attempted generic EventBus cancellation/locking changes, thread
pool rewrite and Logger shutdown APIs were withdrawn before any commit or push.
Their earlier September 14 test results are not evidence for this candidate.
The current shared `src/ll`, client and server implementations match the accepted
P7 source baseline. Existing LL semantics and limitations are inherited.

The unused P6 Android implementation tree and its standalone fixture/packaging
scripts have now been removed from the working tree. The formal target is defined
only by `config/android-kernel-inputs.lock.json`; historical P6 documents and
receipts remain for provenance and are not current build inputs.

The Android PL parent now calls the original `ModRegistrar::disableAllMods()`
with the client sequence `Stopping -> disableAllMods -> Default`. It summarizes
the original public Mod states and saves its success/failure receipt. Repeated
host callbacks do not rerun disable; host diagnostics run outside the adapter
mutex. This is platform lifecycle wiring, not a replacement Mod manager or a
change to original LL cleanup. Android child/parent SO release remains refused.

The original-API Android example subscribes to `ConsoleOutputtedEvent` using
the existing EventBus. Its ordinary Logger emits a marker; the output listener
writes `data/p7-events.json` with the process ID, observed-event flag and whether
the callback ran off the load thread. The file starts with an unobserved receipt
for each load, so an earlier process is not proof. No log is emitted by the output
listener itself. This uses the existing Android output backend and introduces no
new game Hook or parallel event protocol. The example remains load-only.

The input-validation phase is now `P7-G3`; this labels the development candidate,
not a passed gate. Producer commits, frozen Header, MC/NDK/ABI and provider/BMB
identities remain unchanged. Current validators reject old phase receipts instead
of interpreting them as current evidence. This is still not a G6 SDK package.

Evidence is under `C:/Users/ROG/levilamina-p7-validation-20260914`. The old
uncommitted G4 experiment is preserved in `g4-experiment.patch` and is absent from
the target. The user chose to connect the vivo later; this run does not install
an APK, manipulate a world or count device acceptance. Current results and
remaining gates are summarized in `validation/p7/g3-android-adaptation.json`.

Both current Android modes passed compilation, P5 linking, pre/post-strip ELF
checks and Header/source validation for LL and the example. All 16 Python
source-format tests passed. The host test compiles the actual Android parent
adapter with isolated collaborators and passed phase ordering, disable-result
aggregation, exception/reentry handling and repeated receipts. It does not test
original manager internals or game shutdown. The candidate remains an uncommitted
worktree based on `0f63ac23c0`; source-file hashes and generated inputs identify
the built content. G3–G8 remain unpassed.

## October 16: client lifecycle reconvergence

The Android-only `KernelLifecycle` and `ClientLifecycle` adapters were removed
from the formal target. `main_android.cpp` now retains only the PL parent
registration boundary, validates the original paths, installs a direct
`MinecraftGame::_initFinish` hook, and loads ordinary Mods through the original
`ModRegistrar`. PL enable/disable do not activate ordinary Mods. The first
Minecraft Ready callback performs `enableAllMods`, sets `GamingStatus::Running`,
and forwards to the original function; repeated Ready callbacks only forward.

At that stage the Android source table used the original
`src-client/ll/api/event/client/Client*.cpp` implementations. The former
Android event copies, lifecycle host fixture and `P7ClientReadyHookTests` target
were removed so the build cannot silently compile a second client event or
lifecycle implementation.

Final parent unload uses the original registrar, EventBus state cleanup and
active-publication drain before removing the Ready hook. A concrete Android
normal-close target has not been added without frozen symbol evidence; device
Ready, world, normal-close and complete-unload gates remain open.

## October 17: NBT value helpers and original event serialization

NBT extensions now live only in this LL worktree's `src-android/mc/deps/nbt`.
The four LL-owned headers are `Tag.h`, `EndTag.h`, `CompoundTag.h` and
`CompoundTagVariant.h`; all Header producer worktrees and the frozen S input
remain unchanged. The controlled include view records these four overrides
and verifies their source and compiled hashes. Other MC headers still require S.

The original client events use `serializeRefObj` again, with no Android branch.
Value helpers follow the existing Windows custom headers: initializer lists,
scalar/string and nested compound assignment, copy/move, `at`, `get<T>`, type
predicates, `contains` and string access. Android's real map/variant storage and
virtual order remain intact. The previous out-of-line helpers were inlined so
prelink cannot misclassify LL value constructors as native MC imports.

Verification in `WORKTEMP/p7-nbt-helpers-20261017`:

- All 18 Python input/include-origin checks passed.
- Android kernel/example debug and release passed real object/archive prelink,
  ordinary xmake linking and both unstripped/stripped ELF checks. Each new
  `linked.json` lists the four LL headers explicitly. Old binary receipts do
  not certify this candidate; Windows-only Header files were not changed.
- The example's load check now exercises nested initialization, scalar reads,
  deep copy/move and string mutation, plus missing-key and wrong-type failures.
  These cases passed on vivo in process 24725, including the native NBT
  round-trip; its fresh event receipts are written only after these assertions.
- The current vivo APK, Mods and metadata were backed up on A:. The matching
  dataset-v2 APK, BMB and new release kernel/example were deployed with data
  retained; device library/BMB SHA-256 matched. Launch crashed before LL's
  constructor, in an IFUNC resolver reached during `.rela.dyn` processing.
  Its `bl pl_resolve_symbol_n@plt` reached the still-unrelocated PLT0 value
  `0xd6190`. The tombstone and disassembly are saved, not counted as an NBT pass.
- `ifunc-before-after.json` shows the pre-NBT release already had data IFUNC
  relocations while the resolver dependency used `.rela.plt`. This is static
  comparison evidence, not a successful old-candidate device run. Resolving
  that prelink ordering blocker required the follow-up below.

Ready, join/exit, background recovery, normal close and complete unload remain
unverified for these new binaries. No previous receipt or source identity was
rebound to manufacture a pass.

### October 17 follow-up: loader and initialization ordering

The IFUNC resolver now calls `pl_resolve_symbol_n` through its GLOB_DAT GOT
entry, avoiding a call through an unrelocated PLT. The final verifier requires
that relocation. On vivo the same external-provider fixture crashes with the
old generator (139), passes pointer/call checks with the fixed generator, and
traps on a null resolver (133). Five generated artifacts are deterministic;
the Windows real object/archive import-library byte oracle remains unchanged.
The fixed prelink SHA-256 is
`9BA757919A2869593D813BBB166CFFA8843554BB7A105AE8B7E9CDF4443400B7`.

LLDB then identified a loader-lock deadlock: Mod load joined a worker whose
module-identity query used `dladdr`. Android now uses the hidden linker symbol
`&__ehdr_start`, following Windows' `&__ImageBase` accessor. Actual constructor
worker fixtures pass on vivo. VS2022 before/after Windows accessor objects are
byte-identical. No PL lifecycle wrapper was added.

The next failure was Console listener registration. The old release ELF's
`.init_array` relocation order is preserved in `init-array-before.json`:
`leviLaminaEntry` at slot `0xdd870` precedes Console emitter initialization at
`0xdd878`. Windows invokes DllMain after C++ initialization. The Android entry
translation unit is now linked last, and its entry uses the final ordinary
static initializer after the existing Hook registrations in that unit.
The shared EventBus/emitter implementation remains unchanged. This ordering
candidate passed debug/release and device checks before the directory change
below; final directory-candidate results are recorded separately.

All evidence above is in `WORKTEMP/p7-nbt-helpers-20261017`. Earlier failure
records describe their original candidates, not the current execution stage.

### Android event file ownership

Following the user's directory correction, all 24 files under
`src-client/ll/api/event` are copied byte-for-byte to `src-android/ll/api/event`.
The current kernel source table compiles the Android ClientEvent,
ClientJoinLevelEvent and ClientExitLevelEvent copies. It no longer compiles any
`src-client` source. Other copied events retain their existing implementation;
copying them does not certify their Android ABI or activate additional Hooks.
The controlled include view selects the Android event headers, and its verifier
rejects an event header sourced from `src-client`. All 20 focused input/source
tests pass. The four LL-owned NBT extensions and original `serializeRefObj`
implementation remain unchanged.

Before that path change, release process 27311 passed full example load,
constructor/worker identity, NBT helpers, Ready/enable, Console output, world
join/exit reference serialization and background/resume. Separate join and exit
receipts are preserved. These earlier results are not rebound to the directory
candidate; its fresh builds and device receipts follow below.

The Android thread backend is now at
`src/ll/api/thread/GlobalThreadPauser_android.cpp`, beside `_win.cpp`, following
the user's requested ownership. Its implementation is unchanged. The Android
source table uses the new path. The desktop glob excludes `_android` files;
actual Windows source enumeration selects only GlobalThreadPauser_win.cpp and
rejects every `_android.cpp` input. That check passed using the existing Windows
configuration; it is not a full Windows DLL rebuild or proof of runtime thread
pausing support.

### Final directory-candidate verification

`build-debug-android-layout.log` and `build-release-android-layout.log` passed
kernel/example compilation, actual object/archive prelink, normal xmake linking,
source/include authentication and unstripped/stripped ELF verification. Both
ELFs retain the entry as their final static initializer. Android inputs select
the three Android event copies and the relocated thread backend; no src-client
source is compiled. The Windows source-selection check and 20 Python tests pass.

The final stripped release kernel SHA-256 is
`4B7D450C897C37B5B951204CD19AB3680FA5ADD8ECBD77E1AEEDEE23F64710BF`;
the example is
`DBCF2864F60D07292FD781CE203E4D380534191DA75D31B84CCBF9558350E349`.
Both actual private-cache modules mapped by process 24193 match those hashes.
That process passed load, constructor/worker identity, NBT ownership/value/error
checks, native round-trip, Ready/enable, original Console output, world join and
exit reference serialization, and Home/background/resume to live gameplay.
The game's own quit dialog produced its disabled receipt, then the process ended.
No force-stop was used. A fresh manual launcher/game start, process 30390,
passed load/NBT/Ready/enable again with the same kernel hash.

Process 21519 is excluded from this final matrix: source replacement retained
the old modification time and size, so the Launcher's metadata fingerprint
reused the previous kernel cache. Updating the deployed file's modification
time invalidated that cache through its existing path. No Launcher cache
implementation was changed. The final matrix uses actual mapped module hashes,
not just the external source hashes.

`final-android-layout-results.json` verifies the build artifacts and each
process-scoped receipt. Separate ready/join/exit/close/restart data directories
preserve the original observations. Temporary stay-awake was restored to 0 and
the LLDB forward/server removed. The game is left at its restarted main menu.

These results close this NBT/event/directory follow-up, not P7 as a whole.
The current source's final clean-build determinism, remaining applicable modules,
full Windows PL rebuild and SDK/package delivery gates remain separate.
Runtime thread pausing and complete SO unload are not certified by this run.

### Local source commits

The user requested local commits of this batch. The corresponding source
snapshots are prelink `21e6c34d30e06a50508eeb846583d1c173c983d2`, preloader
`c8e6074235d234c4dce661bc59c1ed96a91e5554`, and Launcher
`60fc1c7d3c255592c0d893a24e05d5ee94f42169`. The Launcher's preloader submodule
records that same preloader commit. The enclosing LL commit contains this
document and the tested LL source changes. These commits do not rebind the
frozen SDK inputs or rebuild/relabel the existing tested binaries. Nothing was
pushed, and the remaining P7 gates above stay open.
