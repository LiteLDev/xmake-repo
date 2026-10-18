# Shared Client Version Binding

`src-client/ll/core/main.cpp` registers one `PatchVersionBinding` Hook for
Windows and Android. Windows retains `getGameVersion()` formatting; Android
invokes the game's original version callback. Both append the existing
LeviLamina version and forward non-version bindings unchanged.

`Common::getBuildInfo()` exists in the fixed Android ELF at image address
0x0b471fb8. Its current Header declaration is excluded from Android, and the
frozen BMB does not resolve that name or `Common::BuildInfo`'s D1 destructor.
Adding a declaration alone fails the normal link. This UI Hook therefore uses
its supplied native callback; no symbol fallback, address constant, or provider
change is needed. General Android GameVersion API exposure remains separate.

## Callback ABI Evidence

Target ELF SHA-256:
`1CCBC128196E1A522B0000E81CBDCCF6CA3E7025F2D99E1640877D35B860665F`.

- `ScreenController::bindString` at 0x096de66c receives nontrivial callbacks by
  address, moves through vtable slot 0, clears the source pointer, and stores its
  two callbacks 0x40 bytes apart.
- Start-menu string callback move/invoke at 0x09efa8c4/0x09efa8d4 accesses the
  callable at offset 8. Invoke returns the real libc++ string using the normal
  AArch64 return convention.
- The archived 1.26.30 DWARF input supplies supporting source-type information:
  vtable pointer offset 0 and an 8-aligned, 56-byte storage union at offset 8;
  vtable move/destroy/invoke order. It is historical evidence, not current-target
  DWARF certification. Current-target assembly and device tests check the
  interfaces consumed here. Full llvm-dwarfdump scanning was stopped after host
  commit-memory pressure; it supplies no successful type-verification claim.

The existing Windows callback implementation is shared. Android uses pointer
alignment for its storage union, preserving size 64 and alignment 8, and sends
over-aligned callables to the existing heap path. The Windows alignment remains
`max_align_t`. The old Android bool-only placeholder cannot be used at this ABI.

These implementations and the inline `StringHash` methods are LL-owned MC
extensions. The authenticated include view and SDK consume a fixed list of
these files; the external Header snapshot and PL SDK are unchanged.

## Focused Validation

`P7CallbackTests` checks 64/8 layout, string/predicate calls, empty state, move
ownership, heap targets, over-aligned targets and destruction. Assertions are
enabled in all modes. `test_android_kernel.py` checks source authentication for
every approved MC helper and refuses unapproved replacements or changed bytes.
Android builds still require real object/archive prelink, normal xmake linking
and verification before and after stripping. The device UI must show the final
version string with actual mapped-library hashes matching the built candidate.

Evidence and stage-specific outcomes are recorded externally in the current
Android workspace under `WORK-TEMP/validation/client-unified-20261018`, using
`version-hook-*` logs and `device-version-hook-*` captures. Earlier P7.24 receipts
retain their original source and binary identities. This change does not close
other P7 gates.
