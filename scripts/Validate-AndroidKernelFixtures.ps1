[CmdletBinding()]
param(
    [Parameter(Mandatory)][string]$EvidenceRoot,
    [Parameter(Mandatory)][string]$Ndk,
    [Parameter(Mandatory)][string]$PreloaderRoot,
    [Parameter(Mandatory)][string]$KernelElf,
    [Parameter(Mandatory)][string]$Provider,
    [Parameter(Mandatory)][string]$FmtLibrary,
    [Parameter(Mandatory)][string]$FmtSha256,
    [string]$DeviceSerial,
    [string]$Adb = 'adb'
)
$ErrorActionPreference = 'Stop'
$taskRepo = Split-Path -Parent $PSScriptRoot
$taskOut = [IO.Path]::GetFullPath($EvidenceRoot)
if ($taskOut.StartsWith($taskRepo.TrimEnd('\') + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw 'Fixture evidence must be outside the source worktree.'
}
New-Item -ItemType Directory -Path $taskOut -Force | Out-Null
$taskLock = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'config/android-kernel-inputs.lock.json') | ConvertFrom-Json
foreach ($taskProperty in $taskLock.ndk.files.PSObject.Properties) {
    if ((Get-FileHash -LiteralPath (Join-Path $Ndk $taskProperty.Name)).Hash -ne $taskProperty.Value) {
        throw "NDK identity mismatch: $($taskProperty.Name)"
    }
}
if ((git -C $PreloaderRoot rev-parse HEAD) -ne $taskLock.commits.PL -or
    (git -C $PreloaderRoot status --porcelain)) { throw 'Frozen PL source is not clean at its locked commit.' }
if ((Get-FileHash -LiteralPath $Provider).Hash -ne $taskLock.provider.sha256) { throw 'Provider identity mismatch.' }
if ((Get-FileHash -LiteralPath $FmtLibrary).Hash -ne $FmtSha256) { throw 'APK fmt identity mismatch.' }
$taskLlvm = Join-Path $Ndk 'toolchains/llvm/prebuilt/windows-x86_64'
$taskClang = Join-Path $taskLlvm 'bin/clang.exe'
$taskClangxx = Join-Path $taskLlvm 'bin/clang++.exe'
$taskRuntime = Join-Path $taskLlvm 'sysroot/usr/lib/aarch64-linux-android/libc++_shared.so'
$taskCommands = [Collections.Generic.List[object]]::new()
$taskSources = @{}
$taskSources['scripts/Validate-AndroidKernelFixtures.ps1'] = (Get-FileHash -LiteralPath $PSCommandPath).Hash
Get-ChildItem -LiteralPath (Join-Path $taskRepo 'src-android/ll'), (Join-Path $taskRepo 'test/android') -Recurse -File |
    ForEach-Object { $taskSources[[IO.Path]::GetRelativePath($taskRepo, $_.FullName)] = (Get-FileHash -LiteralPath $_.FullName).Hash }

function Invoke-FixtureCommand([string]$Name, [string]$Executable, [string[]]$Arguments) {
    $taskLog = Join-Path $taskOut "$Name.log"
    & $Executable @Arguments *> $taskLog
    $taskExit = $LASTEXITCODE
    $taskCommands.Add(@{ name=$Name; command=@($Executable)+$Arguments; exit_code=$taskExit
        log=$taskLog; log_sha256=(Get-FileHash -LiteralPath $taskLog).Hash })
    ConvertTo-Json -InputObject @($taskCommands.ToArray()) -Depth 6 |
        Set-Content -LiteralPath (Join-Path $taskOut 'commands.json') -Encoding utf8
    if ($taskExit) { Get-Content -LiteralPath $taskLog -Tail 20; throw "Fixture phase failed: $Name" }
    Write-Output "$Name passed"
}

$taskCommon = @('--target=aarch64-linux-android28', '-DLL_ANDROID_KERNEL_EXPORTS', '-DPRELOADER_EXPORT',
    "-I$taskRepo/src-android", '-isystem', "$PreloaderRoot/src-android", '-isystem', "$PreloaderRoot/src")
$taskCxx = $taskCommon + @('-std=c++20', '-fno-exceptions', '-fno-rtti', '-Wall', '-Wextra', '-Wpedantic', '-Werror',
    '-Wl,-z,defs', '-Wl,-z,max-page-size=16384')
Invoke-FixtureCommand 'c-abi' $taskClang ($taskCommon + @('-std=c11', '-Wall', '-Wextra', '-Wpedantic', '-Werror',
    '-c', "$taskRepo/test/android/kernel_api_c.c", '-o', "$taskOut/kernel_c.o"))
$taskKernelSources = @('api/android/KernelApi.cpp', 'core/KernelContext.cpp', 'core/KernelLifecycle.cpp', 'core/io/KernelLogger.cpp') |
    ForEach-Object { "$taskRepo/src-android/ll/$_" }
Invoke-FixtureCommand 'kernel-fixture-build' $taskClangxx ($taskCxx + $taskKernelSources + @(
    "$taskRepo/test/android/kernel_fixture.cpp", "$taskOut/kernel_c.o", '-o', "$taskOut/kernel_fixture"))
Invoke-FixtureCommand 'production-probe-build' $taskClangxx ($taskCxx + @(
    "$taskRepo/test/android/kernel_production_probe.cpp", '-ldl', '-o', "$taskOut/kernel_production_probe"))
Invoke-FixtureCommand 'hook-fake-build' $taskClangxx ($taskCxx + @(
    "$taskRepo/src-android/ll/core/memory/RuntimeSymbols.cpp", "$taskRepo/src-android/ll/core/memory/HookTransaction.cpp",
    "$taskRepo/test/android/hook_transaction_fixture.cpp", '-o', "$taskOut/hook_transaction_fixture"))
Invoke-FixtureCommand 'hook-owned-build' $taskClangxx ($taskCxx + @(
    "$taskRepo/src-android/ll/core/memory/HookTransaction.cpp", "$taskRepo/test/android/hook_owned_device.cpp",
    '-ldl', '-o', "$taskOut/hook_owned_device"))

$taskArtifacts = @("$taskOut/kernel_fixture", "$taskOut/kernel_production_probe", "$taskOut/hook_transaction_fixture",
    "$taskOut/hook_owned_device", $KernelElf, $Provider, $FmtLibrary, $taskRuntime)
$taskRemote = $null
if ($DeviceSerial) {
    if ($DeviceSerial -notmatch '^[A-Za-z0-9:._-]+$') { throw 'Invalid device serial.' }
    $taskRemote = '/data/local/tmp/levilamina-p6-fixture-' + [guid]::NewGuid().ToString('N')
    Invoke-FixtureCommand 'device-directory' $Adb @('-s', $DeviceSerial, 'shell', 'mkdir', $taskRemote)
    foreach ($taskFile in $taskArtifacts) {
        Invoke-FixtureCommand ('push-' + [IO.Path]::GetFileName($taskFile)) $Adb @('-s', $DeviceSerial, 'push', $taskFile, "$taskRemote/")
    }
    Invoke-FixtureCommand 'device-permissions' $Adb @('-s', $DeviceSerial, 'shell', 'chmod', '755',
        "$taskRemote/kernel_fixture", "$taskRemote/kernel_production_probe", "$taskRemote/hook_transaction_fixture", "$taskRemote/hook_owned_device")
    foreach ($taskCase in @(
        @{name='kernel-fixture'; command='kernel_fixture'},
        @{name='production-probe'; command="kernel_production_probe $taskRemote/libLeviLamina.so"},
        @{name='hook-fake'; command='hook_transaction_fixture'},
        @{name='hook-owned'; command="hook_owned_device $taskRemote/libpreloader.so"}
    )) {
        Invoke-FixtureCommand $taskCase.name $Adb @('-s', $DeviceSerial, 'shell',
            "LD_LIBRARY_PATH=$taskRemote $taskRemote/$($taskCase.command)")
    }
    Invoke-FixtureCommand 'device-hashes' $Adb @('-s', $DeviceSerial, 'shell', "sha256sum $taskRemote/*")
    $taskRemoteHashes = @{}
    foreach ($taskLine in Get-Content -LiteralPath (Join-Path $taskOut 'device-hashes.log')) {
        if ($taskLine -match '^([0-9a-fA-F]{64})\s+(.+)$') {
            $taskRemoteHashes[[IO.Path]::GetFileName($Matches[2])] = $Matches[1]
        }
    }
    foreach ($taskFile in $taskArtifacts) {
        if ($taskRemoteHashes[[IO.Path]::GetFileName($taskFile)] -ne (Get-FileHash -LiteralPath $taskFile).Hash) {
            throw 'A device fixture artifact does not match its host bytes.'
        }
    }
}
foreach ($taskSource in $taskSources.GetEnumerator()) {
    if ((Get-FileHash -LiteralPath (Join-Path $taskRepo $taskSource.Key)).Hash -ne $taskSource.Value) {
        throw 'Fixture sources changed while validating.'
    }
}
@{ passed=$true; device_executed=[bool]$DeviceSerial; device=$DeviceSerial; remote_directory=$taskRemote
    G4_real_mc_hooks=$false; G6_complete=$false; G8_complete=$false; source_files=$taskSources
    artifacts=@($taskArtifacts | ForEach-Object { @{path=$_; sha256=(Get-FileHash -LiteralPath $_).Hash} })
} | ConvertTo-Json -Depth 6 | Set-Content -LiteralPath (Join-Path $taskOut 'fixture-results.json') -Encoding utf8
