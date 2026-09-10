# P6 delivery checkpoint — 2026-09-10

The Android kernel, child Mod loader and example are implemented and buildable. This checkpoint does **not** close P6: the original ten-round device requirement, successful full guarded-Hook performance measurement and matched game RSS control remain incomplete. The user reports five rounds; three complete process logs are retained. No additional phone repetition is requested.

The code subject is `3368645613a61363390ad96c700ef0ad61a3a257`, including the platform implementation `3d7df647db7fa5d11e94508922d2c186c1a7b619` and the ordinary `d1fefe8d` merge. `src/ll` remains tree `34da55c4bbbfeaca8b388407155f2f25dbdf71a1`. The component commits and full input identities are in [delivery.json](../validation/p6/delivery.json).

Verified results:

- Windows client/server × debug/release, with existing tests compiled: four successful combinations. Runtime client verification remains the user's earlier result; no new Windows game-runtime pass is claimed here.
- Python: 51 tests passed. The final AArch64 fixture run passed C/C++ ABI, lifecycle, context/logging, guarded adapter rollback, legacy API compatibility, event cancellation/drain and child lifecycle failure retention. Child cleanup failure during startup propagates back to PL.
- Kernel and example each consumed all five P5 outputs, with zero Minecraft function imports. Both passed exact export/dependency/SONAME/API28/architecture/alignment checks and P5 verification before and after strip.
- Two clean release directories and reversed object input order produced identical objects, P5 outputs and stripped/unstripped ELFs. Publication repeated identically. Changed ELF, changed P5 artifact, stale source and injected index-switch failure preserved the previous package index.
- Fifteen real input rejection cases passed, including mixed old/new provider, BMB and manifest. Device-owned file tests rejected traversal, symlinks, duplicate cache destinations and size violations.
- Application PID 10362 proved nested public-libdl cold loading and real destructor/handle cleanup. Loader PID 27211 rejected malformed inputs and loaded `LeviLaminaP6Example`, `P6OrderA`, `P6OrderB` in that order, then closed them in reverse order.
- Final release PIDs [1555](../validation/p6/device-pid-1555.log), [10647](../validation/p6/device-pid-10647.log), [16174](../validation/p6/device-pid-16174.log) each observed both events and normal cleanup: child handles, listeners, callbacks, snapshots and LL bindings zero; two retired PL gateways resident. They remain forwarding gateways, not physically deleted Hooks.
- Event benchmark: fixed 10,000 warmup and 5 × 100,000 iterations. Zero-listener net mean 0.012118 μs, zero allocations/logs; one-listener net mean 0.900315 μs. These measurements do not replace the outstanding full Hook/game-RSS checks.

The release kernel SHA-256 is `9e6fbdef44293c134d1edc8671a1d0e917463c7e1686d560aa60091844da19aa`; example is `5ea79222d32c140c1874f78b2cf6e62461f0a52f7e90a678807f753eda810520`. Their package hashes are respectively `96cbaeb3c4a1dfae3e79349c21779edfbd5b0788b2c2fbfce41c6ae32d6f074f` and `5a41ff0010ef480f29d2ec52944bddbb8cef1070a80eef82cce47a1d8e0dd47b`.

Use `Validate-AndroidKernel.ps1` with the required frozen inputs and separate evidence roots. `-PackageRoot` publishes complete package generations; `-RunFixtures` runs ABI/lifecycle fixtures. For the second release build, pass the first evidence root as `-CompareReleaseEvidence` and a fresh separate directory as `-ArtifactEvidenceRoot` to run the deterministic comparison and publication failure matrix through the same entry point.

Remote recheck found upstream main still at `d1fefe8d71b960a82c812380d91cccebbae63d16`; upstream header advanced to `1bc96d524a5245a6ce28af8c13f31c281241c8fa`. That later Header is recorded for a future sync, not consumed by this frozen batch. Header fork main remains S `6d5f02513384b051436fa0a26902894d10f6205a`. P5R private CI remains deferred and unverified.
