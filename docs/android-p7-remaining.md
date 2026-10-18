# Remaining Android P7 work

Implementation baseline, October 18, 2026: LL bb5df16320, Header S7
84f07b53a3, generator 7760b5d, prelink 21e6c34, preloader c8e6074,
Launcher 60fc1c7. The producer preloader commit is deliberately different
from the frozen public SDK commit 7cf14db1. Existing P7.24 and version-binding
receipts certify their own candidates, not the work below.

## Module inventory

The authoritative Android translation-unit list is
config/android-kernel-inputs.lock.json:sources.kernel. Installed headers do
not establish that out-of-line implementations are linked or operational.

| Group | Starting status | Remaining work |
| --- | --- | --- |
| base, Expected, Version, reflection | Shared templates and selected implementations used | Exercise actual consumers; no blanket API certification |
| utils, memory allocation, modules, NBT | Selected original implementations linked | Add only called platform functions; preserve existing ABI tests |
| Mod discovery/registration, Logger/i18n | Original implementations linked | Callback/task/sink drain and ordinary Mod unload remain open |
| EventBus, Console, client join/exit | Original implementations linked | In-flight snapshots, emitter/type ownership and remaining event sources |
| ServiceManager and ServiceEvents | Not in Android source list | Link the original registry and events; test identities and invalidation |
| InplaceExecutor | Not in Android source list | Link original implementation and test inline execution/exception semantics |
| KeyValueDB | Headers only | Build the exact Header dependency source, link original wrapper, test persistence |
| Bedrock services, PlayerInfo/ServerInfo | Not linked | Verify MC hooks, object lifetimes and world/menu invalidation |
| chrono, client/server executors, coro consumers | Only ThreadPoolExecutor linked | Tick hooks, timers, cancellation and no-tick shutdown |
| Config, language-change, commands | Core Config and command implementations not linked | Respect Dispatcher dependencies; original permissions, registration and closures |
| GameVersion | Not linked | Frozen BMB lacks getBuildInfo/destructor records; independent input correction required |
| forms/UI, packets/network | Not linked | Original APIs, session/callback lifetimes, authenticated imports and TLS dependencies |
| input/render, resource/behavior packs | Not enabled on Android | Existing client implementation only; verify target ABI and safe hook lifecycle |
| Memory/Closure and Hook concurrency | Selected Symbol/Hook functions linked | Architecture-specific code and safe mutation proof below |
| Windows crash reporting, AppManifestFix, server statistics | Not applicable | Do not port Windows process/UI machinery or add telemetry |
| applicable tweaks | Not enabled | Only concrete compatibility dependencies, not unrelated original bug fixes |

## Hook concurrency design and review gate

Current facts: LL Hook.cpp creates GlobalThreadPauser after Default; its Android
constructor does nothing. PL FuncProxy serializes writers with a mutex, but
calls into detours do not take that mutex. rebuild writes original pointers,
and unhook can null them and delete the trampoline while a caller is active.
The fixed GlossHook archive has no established concurrent-mutation contract.
Successful single-thread fixtures do not prove safe runtime mutation.

Required contract, retaining the existing LL/PL interfaces:

1. Authenticate and inspect the existing backend before selecting a mechanism.
   Prove entry-patch atomicity, instruction-cache publication, trampoline lifetime,
   and concurrent chain updates/removal using own functions. A writer mutex or
   a counter entered inside the removable Mod detour cannot protect entry.
2. Prefer an already-supported backend rendezvous. If absent, design a minimal
   Android platform backend in the original PL/LL locations. It must define
   thread enumeration/creation races, signal ownership, blocked signals, PC and
   trampoline handling, nesting, timeout and rollback before any patch is written.
   Do not introduce a guessed signal-based global stop into production.
3. Separate writer admission, safe publication and reclamation. Keep origin and
   retired executable memory alive until all possible old-chain callers finish.
   Reentrant mutation/unload must fail explicitly if waiting would include self.
4. Failure before publication leaves the old chain usable; failure after
   publication retains resources and reports failure. Unsupported register options
   remain explicit failures. Never turn the empty pauser into evidence of safety.
5. Review the concrete selected backend and race tests before implementation.
   Until this proof passes, do not enable new runtime physical hooks or certify
   general runtime hook mutation. Windows behavior remains the reference.

## Shared drain and unload design and review gate

Use original EventBus, ModRegistrar/Registry/Manager, executors and Logger;
do not introduce another owner registry or Android lifecycle framework.

1. In the original objects, close admission for the target Mod, reject a request
   originating inside its own callback, and retain the Mod/SO and dependencies.
   Do not hold registrar/registry/manager locks while waiting or calling user code.
2. EventBus removes registrations, then waits for in-flight publications and
   their snapshots, event factories, emitters and type identities. Shared_ptr
   reference counts alone do not identify every owner or make concurrent code safe.
3. Executors stop accepting affected work, cancel timers, destroy queued Mod
   closures and wait for running work. A barrier queued on one worker does not
   imply all earlier work on other workers has completed. Shutdown cannot depend
   on a future world tick while the game is in the menu/background.
4. Services, commands, UI sessions, network callbacks, formatter/sink objects and
   cross-Mod references must be released before dlclose. Unmanaged threads and
   external callbacks remain the Mod's lifecycle responsibility; success requires
   that responsibility to have been fulfilled, not a claim to detect arbitrary code.
5. Drain logger tasks separately from sink flush; release Mod-defined destructors
   while their code is mapped. Preserve LL-owned failure diagnostics until last.
6. Execute disable/unload in reverse dependency order. On failure preserve the
   original record, handle and required dependencies; do not clear a failed entry.
   Only free the library after every relevant owner and Hook gate passes.
7. Ordinary Mod unload and parent LL unload have distinct proofs. The parent
   needs a host/PL return boundary after its final callback has returned. No LL
   code may dlclose itself or infer physical unload from process termination.

Any required public extension must be documented with all current callers and
reviewed before implementation; no concrete new public API is approved by this
design outline. Existing Expected/optional_ref/registration contracts stay intact.

### Review findings before implementation

The current design is not approved to remove the unload refusal:

- An active-call counter entered in a detour cannot protect the instructions
  before counter admission. A new safe-patch backend must first close this gap.
- Counting only active listener invocations misses caller-held ListenerPtr,
  event factories/type records, service shared_ptr and queued function objects.
  Their destructors may still execute in the child SO after callbacks stop.
- A lease released by a base-class destructor can reach zero before the derived
  destructor returns into the child SO. Reclamation needs an LL-owned out-of-line
  destruction boundary that returns from the child destructor before releasing
  the last lifetime hold, not just another shared_ptr member in ListenerBase.
- The smallest shared-owner proposal is private admission/active-call/object
  holds in the original Mod implementation, consumed by the original managers,
  EventBus and affected executors. A separate global owner registry is rejected.
  The detailed field/method changes require a complete caller/destructor trace
  before implementation; checking container emptiness is insufficient.
- Throwing from GlobalThreadPauser alone is rejected: HookRegistrar constructs
  and destroys it inside noexcept functions. Failure propagation must be reviewed
  through the registrar and emitter lifecycle before changing that behavior.

The available pinned backend input is libGlossHook.a, not its matching source.
Its symbol inventory provides no declared pause/rendezvous interface; this is
not a proof of all its internals. Existing single-thread priority/origin/unhook
tests cannot close the race proof. Keep production Hook/unload behavior unchanged
and do not enable dependent physical event sources in this foundation batch.

## Foundation implementation

The original ServiceManager/ServiceEvents, InplaceExecutor and KeyValueDB are
added to the authenticated kernel source list. Only the database wrapper needs
portability changes: filesystem UTF-8 conversion preserves the original Windows
encoding and avoids Android wide-path conversion; a local DB pointer is adopted
by unique_ptr because the frozen NDK lacks std::out_ptr. No compatibility library
or new public API is added.

The private xmake LevelDB package consumes commit
3791effb6692e0c83da782210aa336a3dd436f30 from the authenticated runtime lock and
builds that checkout's original CMake project. It checks the clean source before
installation; normal P7 input authentication checks it again even when cached.
The archive is scanned by the same prelink invocation that scans LL objects.
This source has additional compression enum values absent from stock LevelDB
1.23; substituting the generic package would mix two different header/library
inputs. The current build detects no external Snappy/Zstd/zlib codecs. New DB
round trips use the original format's uncompressed blocks; reading externally
compressed databases is not certified and remains a delivery-scope gap.

Original DB tests cover batches, reopen/binary values/iteration, missing/locked
databases, and an Android-only Unicode-path case. Windows LevelDB uses
CreateFileA, so the attempted host Unicode-path test failed and its log is kept;
the original wrapper also passed UTF-8 to that backend. No Windows Unicode-path
fix is included. The portable host test set exercises ASCII paths; it does not
claim the Android ABI. The original API example additionally checks the shared
service registry, invalidation, inline executor and DB reopen, writing a separate
p7-foundation.json receipt. Its previous-run flag permits a real process-restart
persistence check without deleting the test database or user data.

## Ordered delivery and acceptance

1. Freeze inputs and dependency access; link/test the dependency-closed non-Hook
   foundation batch. Header-only APIs are exercised through actual consumers.
2. Review/implement proven Hook and drain backends with own-function/cross-SO tests.
3. Bedrock services -> tick/event/executor/coro -> Config/language/commands ->
   UI/network/input/packs -> integrate each owner into the same unload boundary.
4. Install the final SDK, compile the original API example using only that SDK,
   produce normal packages and verify failed publication retains old outputs.
5. Freeze the final sources; run affected original tests, Windows client/server
   debug/release, Android debug/release and strip/provenance/P5 checks. After build
   rule changes, run the existing canonical-path two-clean-build comparison.
6. Bind actual mapped hashes on vivo; test Ready/world round trips/background/
   normal quit/restart. Test SO reclamation separately. G3-G8 stay open on any
   critical gap. P5R stays deferred; local commits only, no push or main merge.

The first dependency-access probe timed out connecting to GitHub; it does not
establish authentication failure or missing recipes. ADB initially has no device.
These are external gates, not substitutes for implementation acceptance.
