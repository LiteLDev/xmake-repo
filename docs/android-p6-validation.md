# P6 acceptance — 2026-09-10

P6 implementation and applicable validation are complete. The final kernel is subject to ten independently logged complete game cycles, supported passive profiling and matched process RSS observations. Earlier user-reported runs, incomplete log captures and failed test fixtures remain historical evidence; they are not substituted for these ten final cycles.

The final implementation commit is 372239650c93856e76cb0acd555ebdc0a42d4248. It retains the upstream d1fefe8d merge and both desktop Block accessors. The shared src/ll tree is unchanged at 34da55c4bbbfeaca8b388407155f2f25dbdf71a1. Component commits, input identities and all current results are in [delivery.json](../validation/p6/delivery.json); the previous partial checkpoint is preserved [separately](../validation/p6/delivery-partial-20260910.json).

Verified results:

- Four Windows client/server × debug/release builds with tests compiled passed. The final diagnostic change is confined to Android. No additional Windows game-runtime pass is claimed.
- All 51 Python tests passed. The final AArch64 run covered C/C++ ABI, lifecycle, context/logging, the added transcript mirror, guarded rollback, legacy compatibility, event cancellation/drain and child failure retention.
- Both final targets consumed all five frozen P5 artifacts with zero Minecraft function imports. Exact exports, dependencies, SONAME, API28, architecture and 16 KiB alignment passed, together with P5 verification before and after strip.
- Two clean release directories and reversed object order produced identical objects, P5 outputs and stripped/unstripped ELFs. Repeated package publication was identical; corrupt ELF/P5 input, stale source and index-switch failure preserved the old published index.
- Fifteen real input rejection cases and device file/loader negatives passed. Public-libdl nested cold loading, LL-owned example loading, multi-Mod stable order and reverse handle cleanup passed.
- [Ten final cycles](../validation/p6/g8-rounds.json) have distinct PIDs, both real events, successful child disable/unload/close, zero listeners/callbacks/snapshots/LL bindings and recorded context reset. Two PL gateways remain resident and forward to original functions. One cycle also covers backgrounding during a phone call and subsequent normal cleanup. No matching saved crash records were found.
- PL logging remains in use. A mutex-serialized per-process transcript in the LL data directory also records lifecycle messages, the public guarded resource query and context reset. It closes before parent unload and avoids losing acceptance data when system logs are filtered.

Performance and RSS:

| Measurement | Result |
|---|---|
| Registry, zero listener | 0.012118 μs net mean; zero allocation and log calls |
| Registry, one listener | 0.900315 μs net mean |
| Complete guarded path, fixture-owned target, zero listener | 0.093653 μs net mean |
| Complete guarded path, fixture-owned target, one listener | 0.246731 μs net mean |
| Retired provider forwarding, fixture-owned target | 0.072247 μs net mean |
| Real-game passive sample | 18,815 samples, zero lost; 21 Actor-path and 78 LL-path samples |
| Sampler process cost including post-processing | 21.39 s wall, 0.78 s user CPU, 0.54 s system CPU |
| Baseline stable process RSS mean | 1,451,564 KiB |
| Matched LL/example stable process RSS mean | 1,446,171.5 KiB |

The microbenchmarks use 10,000 warmup calls and five rounds of 100,000 calls. The full guarded benchmark executes only its own fixed function and verifies 2,040,000 original calls plus clean retirement. Real-game sampling uses the platform-supported non-root profiler at 499 Hz; it observes Actor::normalTick, both detours, guarded gateways and event publication without invoking game internals. [Profiling evidence](../validation/p6/g8-profile.json) distinguishes sampled CPU paths from per-call latency and documents the limits of sampler-cost attribution.

RSS uses the same application/provider, existing world, ten-second warmup and twenty-second measurement. The interrupted cycle and sampled cycle are excluded from the matched comparison. The observed difference of -5,392.5 KiB is within game/process variation; it is not claimed as memory saved by LL or proof that every possible leak is absent. Full per-cycle measurements and the two control runs are retained.

The final release kernel SHA-256 is cb59ae2897c18f5959ff3c136c2b66ede83928155def0e66e648e1dd11d30103; example remains 5ea79222d32c140c1874f78b2cf6e62461f0a52f7e90a678807f753eda810520. Their zip hashes are e9778e81b146d77b808138e06f1d5a8a5974f8e867b9d65bb9343c3de7bd9776 and 5a41ff0010ef480f29d2ec52944bddbb8cef1070a80eef82cce47a1d8e0dd47b.

The [actual cached Minecraft ELF](../validation/p6/g8-actual-target.json) has the frozen build ID and .text hash. Its full-file hash is recorded separately from the original source ELF because the existing Launcher prepares a cached native image.

Use Validate-AndroidKernel.ps1 for build, fixtures, P5, comparison and packaging. Validate-AndroidKernelDeviceEvidence.py checks the saved ten-round transcripts and matched RSS records without operating a device. Raw screenshots, binaries, profiler data and larger logs remain in the external validation directory.

Upstream Header 1bc96d524a5245a6ce28af8c13f31c281241c8fa remains a separately recorded future sync; this batch still uses frozen Header S. Full src/ll compatibility work is a later phase. P5R private CI remains deferred and unverified. The phone is left at Launcher with the final kernel/example configuration and its original screen-awake setting restored.
