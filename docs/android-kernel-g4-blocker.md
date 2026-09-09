# P6 G4: tested transactions, blocked Minecraft activation

`RuntimeSymbols` and `HookTransaction` are compiled by the native fixtures only.
They are not in the production kernel's explicit seven-source list. No real
Minecraft hook is installed by this stage.

RuntimeSymbols resolves only the two approved names with their exact lengths,
clears the result at every attempt and publishes the typed pair only after both
lookups succeed. HookTransaction takes the public PL hook/unhook functions,
installs Actor then ClientInstance at PriorityNormal (200), and rolls back in
reverse order. Its nonmovable member origin slots stay stable while installed.
A zero return with a null origin is an owned failed installation requiring
cleanup. Failed unhook leaves ownership and origin storage intact; the containing
transaction and SO must be retained until clean.

`validation/p6-g4-fixtures.json` records host and AArch64 fake-backend checks for
resolver failures, invalid inputs, repeated installation, origin rewriting/null,
reverse rollback, cleanup failures and quiescence refusal. G3 separately verifies
that a lifecycle backend with residual resources cannot unload its parent.
There is no claim that a production HookTransaction backend is integrated yet.

The device-owned test loads the frozen actual provider through public dlopen and
uses only its public pl_hook/pl_unhook exports. Its two private test functions
have exact Actor/ClientInstance-shaped calling types but no Minecraft layout or
behavior. All calls occur synchronously on one thread; installation and removal
occur strictly between calls, and no other caller can enter these private targets.
The test preserves the original calls, non-null/null return values, after-call
counts, reverse removal and final empty origin slots. That proof is limited to
these owned call sites and cannot be applied to Minecraft threads.

## Why the real gate remains blocked

Frozen PL `7e80428d4b298653fc050a8d03e54ac7c6321846` clears origin storage in
`src-android/pl/internal/HookRegistry.cpp:122`, removes the detour and destroys the
backend handle. Its registry mutex does not drain callers currently executing an
origin/trampoline. A successful unhook therefore supplies no reclamation barrier.

Launcher source `9d19495d9229a01bca579ba3b32369ade802e6c4` invokes Mod shutdown
before the parent Activity cleanup in `MinecraftActivity.kt:363-389`. The accepted
APK source is separately pinned as `a832d1f15e808855f002c711eae869733e6b575a`.
Neither the frozen PL registration/context nor these lifecycle calls exposes a
proof that every relevant native game thread has stopped entering the targets.

An in-flight count of zero, a lifecycle mutex, Activity exit, or successful unhook
is insufficient. Suppressing the original game call is also invalid, and retaining
the SO alone cannot preserve an already-destroyed provider trampoline.

Before real activation, a separately scoped contract must establish:

1. An installation/removal scope preventing every new call to both target entries.
2. Drain of all calls that entered before that scope, while origins/trampolines
   remain valid; a two-second diagnostic timeout retains ownership and fails.
3. Owner callback drain before child cleanup, and hook removal/provider trampoline
   reclamation only after the target proof; release SO/context ownership last.

This could be supplied by a proven game-thread stop/join boundary or a separately
designed public deferred-reclamation contract, but neither is present or assumed
here. Changing PL/Launcher requires new input identities and validation. This
implementation preserves the frozen producers and records G4 as blocked; G5-G9
are not promoted on the basis of these fixtures.
