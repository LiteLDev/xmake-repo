# Unified Header release 1.26.40.5

This repository publishes one generated Header graph for Windows Client 1.26.40.5,
Windows Server 1.26.40.8, and Android 1.26.40.5. The effective platform trees are:

- Client: `src` plus `src-client`, with the Client layer first on the include path.
- Server: `src` plus `src-server`, with the Server layer first on the include path.
- Android: `src` plus `src-android`, with the Android layer first on the include path.

Exactly one of `LL_PLAT_C`, `LL_PLAT_S`, or `LL_PLAT_A` must be defined. The xmake targets
`header_client`, `header_server`, and `header_android` enforce that contract and compile every
effective Header once through a generated include-all translation unit.

## Reproducible Android dependencies

`android-dependencies.lock.json` contains only repository-independent source identities.
Materialize the pinned sources and produce the machine-local runtime lock with:

```text
python scripts/materialize_android_dependencies.py --ndk <ndk-28.2.13676358>
```

Configure the Android build with the generated lock:

```text
xmake f -c -p android -a arm64-v8a -m release --ndk=<ndk-root> --ndk_sdkver=21 --android_dependency_lock=build/android-dependencies.runtime.json
xmake build -vD header_android
```

The dependency source tree, NDK, runtime lock, dumps, reports, and complete logs are not tracked.

## Release validation

- Four-layer Header manifest: 54,804 rows,
  `10E951E1788A415795158DC62388164F0D8BC70AE636F960455493616A7C61EC`.
- Duplicate formal generation was byte-identical.
- Windows-only Client/Server effective trees matched the triplet output.
- NDK r28c all-open probe: 10,526 reachable Header, 48,441 Typed passed, 7,818 Untyped,
  zero Header and layout failures.
- HeaderVerifier checked Actor, Player, and ClientInstance twice with zero issues and identical
  JSON/Markdown reports.
- `python scripts/validate_header_release.py` rechecks layer counts, include closure, hard-deny
  roots, and the release manifest without modifying Header files.

Exact input, tool, and validation identities are recorded in `header-release.json`. Generator
allowlist and bypass text files remain non-tracked validation artifacts.
