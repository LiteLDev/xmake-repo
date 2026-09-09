# Android empty kernel (P6 G2)

The Android target is isolated before desktop dependencies and architecture rules.
`LeviLaminaAndroidKernel` compiles an explicit three-file source table and produces
`libLeviLamina.so`. It includes Actor, ClientInstance and LocalPlayer from detached
Header S, then registers an empty four-stage lifecycle with the frozen PL C++ SDK.
It logs successful transitions through the provided context and retains no temporary
context wrapper, game pointer, hook, listener or worker thread.

This is the G2 smoke kernel. The six final kernel APIs, runtime hooks, events, child
Mod loader and final P5 packaging are later gates. No G6 completion is claimed.

## Build contract

Use `scripts/Validate-AndroidKernel.ps1`, passing every declared input parameter.
`config/android-kernel-inputs.lock.json` pins M/H/S, PL/P5, Android dependency manifest,
runtime package identities, and the tested Windows-host NDK r28c tool binaries.
The script makes no dependency downloads or changes to the producer repositories.

The binary uses arm64-v8a/API28, C++20, shared libc++, hidden visibility, no exceptions
or RTTI, `-z defs`, and 16 KiB LOAD alignment. The P1 dependency lock remains API21.
Only `PLGetModRegistration` is dynamically defined/exported in this phase.

xmake 3.0.7's NDK loader selects the STL from configuration before target properties;
the wrapper therefore passes and the target requires `--runtimes=c++_shared`.
Setting the target runtime alone would select static libc++ and is rejected by the
ELF validator. Android input options are declared during the initial menu pass so
changing from a Windows configuration recognizes them correctly.

The include order is S/src-android, S/src, project/src-android, project/src, then PL
and exact dependency roots. Generated `mc/` Headers use clang's system-header prefix
for diagnostics, keeping the four ordinary include roots in their required order.
New LL code retains `-Wall -Wextra -Wpedantic -Werror`.

Each compilation writes an actual clang `-H` include trace. Paired cc1 arguments are
not independently auto-filtered, and compiler caching is disabled for this target.
Before linking, every observed MC file must belong to S's Android/common layer and
match its Git blob. PL files must match the frozen SDK; desktop LL includes and
foreign MC paths are rejected. This catches even a byte-identical shadow Header.

The frozen P5 executable authenticates the real manifest/BMB/provider/target and
classifies the three actual objects in dry-run mode. G2 requires zero MC function
imports. This dry run does not produce or certify the final five P5 artifacts.
After linking, the ELF verifier checks architecture, SONAME, API note, exact global
function export, shared-library dependencies, LOAD alignment and non-executable stack.

## Current validation

Final debug and release builds pass the include/P5/ELF gates with captured source
fingerprints. All eight Windows increment combinations pass; desktop native source
files remain byte-identical to the G1-K code. `docs/validation/p6-g2-host.json` records
these gates while explicitly leaving device lifecycle pending. Negative checks cover
18 missing/tampered/platform input cases, eight actual compiler contract violations,
a real compiler run with an identical foreign Actor Header, and nine malformed ELF
variants. Additional source-provenance unit tests use isolated Git fixtures.
All evidence is retained outside the repository; final receipt hashes are recorded
in that receipt.

The existing vivo and installed Launcher APK were identified and their APK/BMB/
manifest hashes matched the frozen inputs. The debug smoke package was staged and
atomically installed as a new `LeviLamina` package without replacing existing Mods.
Minecraft launch currently awaits the user's Launcher login; no device lifecycle
pass is claimed yet. The user is handling login, and the login preference is unchanged.

After device lifecycle checks finish, G2 can be marked
complete. The known G4 quiescence gate still applies before adding real MC hooks.
