# Android P7 Windows-mode reconvergence

Current candidate: October 17, 2026. The final offline checks below passed;
device acceptance, full Windows PL rebuild and remaining SDK/P7 gates are open.
P7-G3 through G8 are not accepted. This record replaces the intermediate
AndroidParent/static-symbol design description; its original candidate snapshot
and historical build receipts remain in the external evidence directory.

Final offline evidence:
- Fresh Android debug kernel/example at A:/p7finald17 passed. Two clean release
  builds at the fixed A:/p7final17 path passed, with all 14 generated import,
  unstripped compiler and stripped artifacts byte-identical. Config, empty
  compiler-object directories, fresh receipts and actual outputs were checked.
- Actual release .debug_info/.symtab sections exist before strip and are absent
  after strip. The production C++ runtime ELF reader passed against debug/release,
  plain/stripped kernel/example files and the focused negative cases.
- All 16 current Python checks, six PL host tests including real BMB data,
  current-pair P5 checks and 64 Launcher app tests passed. The final APK/provider,
  BMB and stripped LL/example are bound in final-candidate-inputs.json.
- Windows client debug/release passed. Windows prelink v0.8.5's local Git tag
  (5d52ba0e) explicitly requires BMB v0.8.2; the P7 default's stale 0.8.0 pin is
  corrected. The candidate Windows source profile authenticated the real Windows
  data and consumed 224 actual LL objects plus 13 static libraries. Its 1279174-byte
  import library exactly matches both installed Windows tools (SHA-256
  94C8114A7449F1801F70E3368B9F7F2CD28FEB587CA1E175D26E49CF9E38188F).
  windows-real-prelink-results.json records the dependency/source/binary identities.

The corrected APK has not been installed because the vivo disconnected. The
phone still has the earlier test candidate whose game startup failed. Earlier
own-target device receipts keep their original provider hashes. Current Ready,
world, background/restore and normal-close/restart remain unverified; general
SO unload and runtime thread pause remain unsupported. Nothing is committed or
pushed as an accepted candidate.

## Windows Baseline And Necessary Differences

| Responsibility | Windows baseline | Current Android candidate |
| --- | --- | --- |
| Core initialization | namespace ll, leviLaminaMain, DLL process attach | Same namespace/function/order, ELF constructor entry |
| Ready | LL_AUTO_TYPE_INSTANCE_HOOK and &MinecraftGame::_initFinish | Same macro/member identifier and fully qualified shared_ptr parameter |
| Ready ordering | enableAllMods -> Running -> origin | Same ordering, no Android Ready state or duplicate installer |
| Normal stop | WndProc_PC::$onDestroy, Stopping -> disableAllMods -> Default -> origin | Existing RapidShutdown::_rapidShutdown static Hook, same sequence and exact Header argument ownership |
| Client events | Original Client*.cpp and Emitter/HookRegistrar | Same sources and event types; preserve all serialized reference fields |
| PL loading | PreLoader.cpp loads preload-native libraries with LoadLibrary | Corresponding PreLoader.cpp uses dlopen; no second Mod table or lifecycle |
| PL Hook | src/pl/Hook.cpp and FunctionProxy interface | Directly compile the same Hook.cpp; AArch64 backend implements the same private interface |
| Build | before_link generates imports; xmake performs final link | Same phases; after_link runs the existing ELF/provenance checks |
| BMB | Producer builds symbol records; reader consumes them | Existing BMB3 producer/rebind and reader; ELF addresses, build-id and Itanium symbols stay in platform data |
| Analyzer | TinyAst/TinyTypes, DumpWriter, alignment/dependency analysis and transactional output | Frozen DwarfDumper reuses those components; ELF/DWARF parsing remains its backend |
| Header generator | RootData, Generator and the shared staged output | Android streaming input feeds the same model and Generator; platform layout/filter rules remain in generate/android |

AppManifestFix, WndProc_PC and the Windows CrashLogger implementation are
Windows-specific. They are not copied to Android or replaced by unrelated
features. Remaining Config/commands/resource-stack and other applicable LL
modules retain their separate P7 work and verification boundaries.

## Import Address Contract

The pinned Windows SymbolProvider v1.3.0 at 6c93ec45 has a PreloadBdsApi
initializer which fills the delay-import IAT before global constructors. This
is part of the Windows baseline, not just FunctionProxy::hook's proxy lookup.

The previous Android ELF passed local P5 lazy-import entry addresses to LL/PL.
The original P5 imports manifest instead described Minecraft addresses; merely
compiling LL's member-pointer macros could not prove the Hook target correct.

The frozen NDK's AArch64 PIC fixture demonstrates that a hidden ELF IFUNC
produces IRELATIVE and that taking its address loads the resolved GOT slot.
API28 Bionic source (android-9.0.0_r1/linker/linker.cpp, call_ifunc_resolver and
R_GENERIC_IRELATIVE) implements this loader operation before constructors.
Reference sources and the linked fixture are retained under the evidence root.

P5 now emits short IFUNC resolvers calling the existing SymbolProvider. The
loader owns import binding, corresponding to the Windows early-IAT operation.
The private lazy cache and argument-preservation forwarding body are removed.
Current imports manifests and notes use schema 3; current consumers were
updated together, without an old-format compatibility branch. No new public
PL API, instruction recognizer or proxy-mapping protocol is retained.

P5 directly scans target objects/static libraries and excludes definitions
provided by other inputs. The caller no longer merges them with ld.lld -r.
The production Python entry prepares imports and verifies the xmake-linked ELF;
it does not invoke the final clang++ link.

## Minecraft Phase Evidence

The frozen Android Minecraft 1.26.40.5 ELF has build-id
5893edc8d56c93cbdb50e0f9436320236b78c89d, file SHA-256
1CCBC128196E1A522B0000E81CBDCCF6CA3E7025F2D99E1640877D35B860665F,
and text SHA-256 f17aa60a840a88fc1212abfa92e362fec86b871126f30ae03000de8d90f3b0aa.

Current debug imports record:
- MinecraftGame::_initFinish: 0x955b5c8.
- RapidShutdown::_rapidShutdown: 0x93be808.
- ClientInstance::$onLevelExit: 0x9447c3c.
- ClientInstance::$onPlayerLoaded: 0x945af58.

android_main calls RapidShutdown::_rapidShutdown at 0x81843b8, transferring
the AppPlatform/IMinecraftGame unique_ptr owners, and subsequently calls
Bedrock::ApplicationInit::shutDown. The target notifies termination and
shuts down/destroys the game before destroying the platform. RapidShutdown.h
declares the exact static signature used by the original LL macro. JNI
nativeOnDestroy and nativeStopThis are bare ret stubs and are not used.
These are static phase/address facts, not observed device shutdown receipts.

## Shared Implementation And NBT

The saved generic EventBus/ModRegistrar/NativeModManager drain/unload candidate
was restored to the original implementation. Android's original unsupported
general-Mod unload result remains explicit. No flush, EventBus-idle result or
process residency is treated as full callback/task/SO draining.

The separate Symbol_android.cpp is removed. Original Symbol.cpp is reused;
Android diagnostic demangling uses its existing C++ runtime rather than a new
dependency or symbol-resolution fallback.

The October 17 NBT follow-up restores the original client event calls to
serializeRefObj. Windows-shaped value construction, assignment, nested indexing,
typed access and type predicates now live in this LL worktree's
src-android/mc/deps/nbt headers. No producer Header worktree or frozen S input is
modified. The controlled include view authenticates exactly Tag.h, EndTag.h,
CompoundTag.h and CompoundTagVariant.h as LL-owned extensions; all other MC
declarations still come from S. Coverage reports list those exceptions explicitly.

The helpers are inline, following the Windows custom headers. Android retains
the original 24-byte map storage and 48-byte variant storage. Value conversion
uses the existing MC factory/emplace and virtual copy operations. Constructors
start real C++ object lifetimes; out-of-class inline key destructors emit local
vtables under the AArch64 ABI. Variant destruction dispatches through the active
Tag's virtual destructor because some native complete destructors are folded.
There are no copied vptrs, imported MC data/vtables or new import exceptions.
Compilation and link evidence are distinct from native ownership/event tests.

## Inputs And Verification Boundary

Header S, MC, NDK 28.2.13676358, arm64-v8a, API28, C++23, exceptions/RTTI,
shared libc++ and 16 KiB alignment remain fixed. The source table and actual
provider/BMB/P5 identities are bound in config/android-kernel-inputs.lock.json.
Provider rebinding uses the existing BMB creator, preserves the dataset semantic
hash 24de49e07d047470edbf642578a9d4b448465cadde3569d11040a31e634929be,
and retains 528148 whitelist values. No whitelist entries were added.

The producer PL source is an uncommitted candidate. LL consumes the unchanged
public headers from the separate clean frozen PL SDK worktree at 7cf14db1;
that Header identity is distinct from the new provider's binary/source binding.

Earlier October 17 candidate evidence (see the dataset correction below):
- Fresh Android debug kernel/example at A:/p7adf17 passed ordinary xmake linking,
  provenance, schema-3 P5 verification and pre/post-strip checks. The example uses
  the normal add_deps("LeviLamina") relationship, including its link directory.
- Windows client debug/release at A:/p7wcd and A:/p7wcr passed. The original
  Windows PL translation units and public headers are unchanged; a complete
  Windows PL DLL build remains blocked by the unavailable private recipe.
- All 16 current Python input/source tests passed.
- PL's five host tests passed. On vivo V2454A (10AF6D0YNL00439), the own-target
  priority/origin/unhook executable passed using the final APK's provider,
  libfmt and frozen NDK libc++. P5's early-binding/address/ABI executable passed;
  its separate null-resolver executable exited with SIGTRAP=133 as required.
- Final provider-bound P5 regression passed 20 cases, including object/archive
  definition ordering, malformed/data/architecture/conflict refusals, five
  deterministic generated artifacts, pre/post-strip verification, unchanged
  Windows import-library bytes and NDK runtime ownership.
- Launcher passed 64 tests in nine suites with no failures/errors/skips and
  assembled the APK. Its fixed dataset counts now match the frozen manifest
  (540453/528148/465190); strict count checks remain enabled. Final APK SHA-256:
  E0C29D85C3D74FE14DBAC7693EA6D96B628AA8367587FDB2D24820A83E0FEBCD.
  Its provider is byte-identical to the LL lock input. Signing identity matches
  the previously installed APK. USB installation was rejected by the device;
  authorization has been requested before retrying.
- The previous installed APK, Mods, configuration and runtime package are backed
  up under device-before. The installed MC file differs in whole-file hash, but
  its build-id and .text SHA-256 exactly match the frozen runtime contract.

Two clean Android release builds and their deterministic comparison remain in
progress. Actual game Ready, world events and normal-close/restart remain open.
Runtime thread pause and complete SO unloading remain unsupported. No device
fixture or build receipt is substituted for those game gates.

## Frozen Toolchain Review

The production Windows input check exposed a dependency-cohort error, not a need
for a new format fallback. Existing cached BMB 0.8.0 libraries and the pinned
Android profile rejected production Windows data. The actual Windows v0.8.5 tag
uses v0.8.2. A clean reference at the existing September 7 BMB commit
e5bc15911aecb2c9fbf0aac6786050281218451f was compiled with the candidate Windows
sources and authenticated that data; its complete import output matches the
original tool. This source identity is recorded separately from the version
requirement: the remote BMB tag could not be retrieved and is not claimed verified.
Current main was not substituted for the frozen Windows input. No keys were
edited, no old-format branch was added, and installed package caches were not
patched. Private package publication/SDK delivery remains a separate gate.

### Dataset Synchronization And Current Candidate

The first installed APK stopped in native runtime-symbol configuration, before
LL loaded. The PL reader still pinned the September dataset's byte length,
counts and semantic hash. Launcher had the same stale counts. Updating only
the Java checks did not update PL's independent authenticated-reader boundary.
The failed launch screenshot is retained as device-first-launch.png; this is
not a passed Ready or game lifecycle test. Device logcat output and the native
return code were unavailable. The stale dataset is a proven rejection condition,
not proof that it was the only cause of the observed device failure.

PL's existing reader now pins the already-frozen P7 dataset: 17634332 bytes,
540453 membership entries, 528148 whitelist values, 465190 reverse-index values
and semantic SHA-256 24de49e07d047470edbf642578a9d4b448465cadde3569d11040a31e634929be.
The existing real-BMB test is enabled. Its obsolete Actor-vtable denial assertion
now checks the actual retained VTable record; the data/whitelist was not changed.
All six host tests pass with the new provider/BMB pair, including real decryption,
lookup, identity refusals, corrupt data, wrong architecture and resolver checks.
The existing Java failure message now includes its typed native error and code.
No fallback lookup, old-dataset branch or weakened comparison was added.

The rebuilt APK is apk-inputs/launcher-dataset-v2.apk (SHA-256
CD4375AF10B8142F2CECF08DE0A431804203ECC8AB74A7033D48F11EC3A2739B).
Its provider SHA-256 is
FF24F8357022A3F29B88516D120860B7FDB2682D8EC28E05864B78819A5F99E0.
The existing authenticated rebind tool produced runtime-v2/bedrock_runtime_data.bmb3,
SHA-256 5F9D38DDD10DC7E34875240F69534D3B65BB0C08A8CD272B7A97DCC30C69DC92,
with unchanged records, semantic hash and dataset provenance. The LL lock now
binds this pair. Ten current-pair P5 cases and five-artifact determinism pass;
the same unchanged prelink executable retains its Windows byte-oracle evidence.

Both earlier release builds passed, but different build-directory paths entered
the object DWARF, input hashes and final build-id. Their generated assembly,
object and archive were identical; cross-directory whole-ELF reproducibility is
not claimed. The new pair is being rebuilt in debug and twice from clean compiler
outputs at the same canonical release path A:/p7final17, with both runs saved.

The vivo disconnected before the corrected APK could be installed. ADB currently
has no device; reattachment was requested. Earlier own-target device tests belong
to their earlier provider hashes. Corrected-provider device tests and actual
Minecraft Ready/world/normal-close/restart remain open. Windows applicable code
has not changed since its passed client debug/release builds.

The final caller review also found LL's existing runtime ElfModule.cpp still
requiring note schema 2 and the removed PLGetModRegistration export. It now
requires schema 3, accepts the kernel's constructor entry, requires ll_mod_load
for ordinary Mods, and rejects the obsolete registration export. The same
production C++ reader is exercised by elf_module_tests.cpp against actual kernel
and example ELFs, including old-schema, wrong-role/SONAME and parent-identity
refusals. Its host run passed; no second format parser was introduced.

The Android xmake target explicitly keeps symbols before after_link; the existing
verification step produces and checks the separate stripped image. Device-only
APK dependencies are under apk-native-v2, outside the provider link directory,
so ordinary linking consumes the same static fmt archive that prelink scanned.
An earlier mixed-directory ELF rejection is retained in the build logs.

The attempted canonical-verified-* clean run is invalid: xmake clean --all
reset the platform configuration and produced no new Android compiler outputs.
canonical-verified-comparison.json is explicitly marked unaccepted. That command
also triggered updates to existing global xmake repository-cache metadata on C:;
this was unintended. No attempt was made to delete or rewrite that cache to hide
the update. Build artifacts and snapshots remain on A:. The final canonical-final-*
run instead checks the Android platform/output directory, cleans named targets,
requires fresh linked receipts and both actual compiler outputs, and compares
exactly 14 import/compiler/stripped artifacts.

The BMB reader at 194310d7 compiles the original src/bmb/BMBFile.cpp,
src/bmb/bmb3/BMB3.cpp and security implementation. The existing provider-rebind
tool preserves stored records, reverse index and semantic identity. No BMB wire,
reader or independent symbol-production pipeline was introduced in this batch.

BedrockAnalyzer at cf44b942 has DwarfDumper/main.cpp using TinyAst/TinyTypes,
PdbDumper's DumpWriter/AlignmentAnalyzer/DepGraph, and Utils/OutputTransaction.
MangleCore/OutputTransaction.h aliases that same transaction implementation.
The ELF/DWARF reader and FunctionSync retain their actual format/ABI duties.
No redundant replacement of these shared stages was found in the reviewed flow.

Header generator at 75b3cb1b uses src/app.rs::load_data and
src/data/loader.rs::load_triplet_data. The selective Android reader converts the
large DWARF input to OriginData/RootData. Both platform runs instantiate the same
Generator and use unify_three_platform_results and the shared staged output.
The second Generator instance separates actual platform layout/configuration;
it does not implement a second generator. generate/android retains layout,
representability, external-type and filtering rules. No production change to
these frozen tools is justified by this structural review. Full Header/SDK
delivery gates remain separate from this reviewed integration flow.

All new snapshots, build outputs and evidence are under:
A:/CuteKitten/Project/LeviMC/WORKTEMP/p7-windows-reconvergence-20261017.

## October 17 Android Event Ownership Correction

Android events now reside in src-android/ll/api/event, as explicitly requested
by the user. All 24 Windows client event files are copied there without changing
their implementation; android-event-copies.json authenticates every pair.
The enabled source list compiles the three Android client-event copies, and the
include view consumes Android event headers. No src-client event source enters
the Android target. Copying the other event files does not add them to the
validated minimal-kernel module set or prove their platform Hook contracts.
NBT extensions remain confined to this LL checkout. The IFUNC, module identity
and static-initialization fixes and device results are recorded in the existing
android-p7-validation.md and WORKTEMP/p7-nbt-helpers-20261017 evidence directory.
