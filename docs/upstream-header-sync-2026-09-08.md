# Upstream Header synchronization, 2026-09-08

This candidate connects the original Android Header publication to the upstream
Header history. It preserves Android 1.26.40.5 and follows the effective Windows
Header views of the frozen upstream commit. Publication is gated by the current
receipts in `header-release.json`; pending or failed receipts prohibit publication.

## Source history

| Input | Commit |
| --- | --- |
| Previous Header release D | `a1e1f0d7be65959a4c68822cb861b3365ae43755` |
| Upstream Header H | `48f5fbfc2cbd539c08316d855555ce084478a678` |
| Upstream core M, separately frozen | `b897a4190fdaad9310b73240d254411c7fb69a98` |

The complete D and H histories have no common ancestor. The first Header merge
therefore uses `--allow-unrelated-histories --no-ff`, preserving both parents and
their actual content. M already contains H. The archive tag
`archive/p1-1.26.40.5-a1e1f0d7` retains the original P1 release.

The Header branch does not receive the complete core. Core integration belongs
to `feat/android-minimal-kernel` after the Header publication gates pass.

## Content and conflict resolution

`scripts/sync_upstream_headers.py` reads raw objects with `git cat-file --batch`.
Using `git archive` for source identities would be incorrect because Git can apply
the Header checkout's CRLF attributes during archive creation.

The upstream harness explicitly searches common Headers before platform Headers.
Its differing `LightingGroup.h` overlap is consequently resolved using that
actual precedence. The synchronized tree has no differing common/platform
overlaps. Only byte-identical content present on all three platforms enters the
common layer. Each platform identity hashes logical paths and canonical Git bytes;
the physical publication manifest hashes paths and the prescribed CRLF files.

| Layer | Headers |
| --- | ---: |
| Common | 1,929 |
| Windows Client | 18,935 |
| Windows Server | 18,862 |
| Android | 15,438 |

Effective counts are Android 17,367, Windows Client 20,864 and Windows Server
20,791. The Android Git identity remains
`4C68F48A202CBF892C316EA86B5FAE33FA77444A5033A2A34A52382BB31B45F2`.
The four-layer publication contains 55,164 Headers and has manifest identity
`9E749942E6F664F56E73C266DB46F73CC45A329463DF576F7C7B83DC0A51DB58`.

The only source-content exceptions are two trailing spaces on the
`concurrentqueue.h` include in the Windows copies of `_HeaderOutputPredefine.h`.
The metadata records both original and published identities. The validator
reconstructs the original bytes and only permits this exact transformation;
Android and Minecraft type declarations are unchanged.

Four non-Header add/add conflicts retain the P1 implementation:

- `xmake.lua`: preserve all three Header targets and explicit Android dependency input.
- `test/main.cpp`: preserve the unique platform macro check and generated include harness.
- `.github/workflows/build.yml`: preserve both Windows and Android validation lanes.
- `.gitignore`: preserve non-tracked lists, generated dependencies and build artifacts.

License and formatting files were identical and needed no content resolution.
The Windows test entry includes the actual upstream definitions of
`MoodyCamelBedrockMemoryTraits` and `bx::StringT` before the include-all list.
Upstream uses these as complete value types while only forward-declaring them
at their earlier inclusion sites. This restores a valid harness dependency order
without changing or stubbing those Header declarations. It does not claim that
every upstream Windows Header is independently self-contained.

## Validation and publication

`Validate-HeaderSync.ps1` provides explicit Tooling, Headers, Fidelity and Release
stages. Headers builds a verified isolated copy with one compiler job, retaining
the complete commands, exit codes and log identities outside Git. All-open layout
and HeaderVerifier use the frozen Analyzer/Generator versions and exact target.

The schema remains version 1. The original release metadata is retained only as
the historical baseline; the Windows inputs now explicitly identify Git Headers.
Current receipts bind each result to the candidate manifest, source text hashes
and external artifact hashes. No old Windows PDB hash or previous pass flag is
presented as evidence for the new Windows content.

`Sync-LeviLaminaUpstream.ps1` defaults to read-only Check. Prepare only operates on
the Header candidate and explicit staging; it does not fetch, push, or silently
resolve build or license conflicts. Publish requires complete receipts, exact Git
content fidelity, both source ancestors, a clean same-repository main worktree,
the immutable archive tag, and unchanged remote publication tips. It only
fast-forwards and uses ordinary pushes. Repeating a completed publication does
not create new commits or rewrite history.

The fresh all-open run uses no `--final` filter. Its layout check covers 10,526
reachable Headers: all 48,441 Typed candidates pass, with 7,818 Untyped candidates
and zero Header/layout failures. All formal classes are included. A separate
diagnostic comparison to the historical non-tracked lists finds 75 symbol-name
and 7 bypass-name differences. This is not claimed as a new P0 literal symbol-list
superset pass; those lists and the frozen runtime BMB are not republished or changed.

On 2026-09-09, after system commit headroom was restored, the rebuilt frozen
HeaderVerifier passed against the original ELF: Actor, Player and ClientInstance
have zero issues, with 136, 136 and 435 vtable slots checked respectively and no
slot mismatches. Peak private memory was 32,982,048,768 bytes. The new receipt
contains the executable, original input, Header and report identities. Earlier
allocation failures remain recorded in the unpublished candidate commit
`5dd0a3663c44ea9d9a075e46310da2c62207bd55` and external evidence.

The upstream Header tip was rechecked and remains H. Upstream core has advanced
to `c9a3b9cb0507cfb072f3d33be4324d1642c24889`; its three Windows compatibility
changes belong to the subsequent core integration and do not alter this Header
publication's frozen H or Android view.

P5R private CI remains deferred. The P6 kernel, real Minecraft Hooks and device
cycles are not established by this Header synchronization.
