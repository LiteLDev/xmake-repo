# Android platform core during P6 validation

The platform layout follows client/server `ll/core`: `main_android.cpp` owns
registration, root core modules own lifecycle/context, `io/Output_android.cpp`
provides the output backend, and `memory/` contains the narrow runtime-symbol and
hook transaction modules. The C API glue remains in `api/android`. No command,
statistics, Windows entry hook or other unrelated module is copied into Android.

`src/ll` remains unchanged at tree `34da55c4bbbfeaca8b388407155f2f25dbdf71a1`.
Its complete compatibility port is a later phase. Client/server platform sources
are also unchanged by this layout refactor. The explicit Android source table
contains eight translation units; historical G3 receipts with seven sources refer
to their original commits and remain valid historical evidence.

`validation/p6-platform-layout.json` records debug/release, all 49 Python tests,
host and actual AArch64 fixtures, and the Launcher regression. PID 16621 loaded,
refused activation without resources, and unloaded on normal game-menu quit.
This directory refactor does not enable Minecraft hooks or complete G4.

## Approved continuation contract

The user authorized minimal changes in isolated PL/Launcher worktrees and new
provider/APK/runtime identities. Two provider-owned forwarding gateways and their
trampolines may remain for process lifetime. Successful shutdown must instead
prove zero LL bindings, callbacks, child handles and retained LL context. Gateways
must have no LL addresses/references after successful retirement. These counts
are reported separately; physical gateway removal is not claimed.

The original frozen-contract blocker describes the previous acceptance boundary.
Its implementation replacement is still subject to G4 host/device concurrency
validation, followed by G5 events/loader and G6-G9 packaging/runtime evidence.
