# Android kernel API and logger (P6 G3)

G3 adds the API v1 header, six-state lifecycle, copied PL context and owned path
strings, and bounded UTF-8 logging. The Android target has seven explicit C++
sources. Its six dynamic exports are the five `LLAndroidKernel_*` APIs and the
unchanged SDK's `PLGetModRegistration`. The binary contract remains API28,
arm64-v8a, C++20, shared libc++, hidden visibility, no exceptions/RTTI, `-z defs`
and 16 KiB LOAD alignment. Android Headers still come exclusively from S.

`KernelLifecycle` serializes transitions and exposes state through an atomic.
`KernelContext` copies the temporary C++ PL wrapper by value and owns five copied
strings; PL retains the referenced C registration context until safe unload.
Logger calls and context reset use the same mutex. Logs before load/after unload
use the LeviLamina Android tag; loaded logs use only the PL logger. Invalid levels,
messages over 4096 bytes, embedded NUL and invalid UTF-8 are silently discarded.
Fatal maps to Android ERROR and does not terminate the process.

The production `QuiescenceGate` deliberately refuses enable before resolving or
hooking Minecraft. A successful load is followed by Enabling -> Failed with zero
retained resources; a later unload succeeds. No LL Mod owner exists at G3, so
Subscribe returns zero and Unsubscribe returns false. The fixture backend tests
successful transitions and subscription dispatch to the backend; it does not
claim an implemented G5 event registry or child Mod loader.

## Evidence

`validation/p6-g3.json` binds the accepted source and artifact identities to:

- Android debug/release builds with seven actual include traces and P5 dry-run
  classification of the seven objects (`functionImports=0`).
- C11 and C++20 ABI fixtures, independently built for Windows x64 and Android
  AArch64; fixed enum values, callback types, payload sizes and offsets.
- State transitions, clean and retained failures, temporary wrapper/path copying,
  UTF-8/level/length boundaries, and synchronized logging versus context reset.
- An AArch64 executable loading the actual kernel with public dlopen/dlsym/dladdr,
  verifying all six exports belong to that SO, calling its registration and
  confirming clean failure/unload. This shell process is not an app-namespace test.
- The existing Launcher and vivo, PID 23298: actual PreLoader-tag Loaded, blocked
  activation, Failed without resources, then Unloaded on normal game-menu exit.
  No matching-PID crash entry; no force-stop. The first cycle with incomplete
  logging is excluded. The accepted G2 package and log-tag property were restored.
- 48 Python tests and 26 mutations of the actual G3 ELF export table/phase.

The G2 eight-way Windows increment matrix remains the desktop baseline; G3 changes
only the isolated Android branch, Android source and validation tools. No new
Windows game-runtime result is attributed to G3. The G1-K client runtime remains
the user's historical confirmation, distinct from the newly run server tests.

Build with `Validate-AndroidKernel.ps1` and the same mandatory frozen inputs as
G2. Build/run native fixtures with `Validate-AndroidKernelFixtures.ps1`, supplying
an external EvidenceRoot, Ndk, PreloaderRoot, the verified KernelElf, Provider,
the accepted APK's libfmt.so and its FmtSha256. DeviceSerial enables device runs;
omitting it records compilation only. The runner uses a fresh owned device
directory and verifies copied artifact hashes. Host fixture project/commands and
full logs are retained with the validation receipts outside the repository.

G3 is complete. G4's real Minecraft gate, G5 events/loader/example, final P5
packaging, determinism and G8 world cycles remain incomplete. These binaries are
stage artifacts, not the final two deliverable Mod packages.
