[CmdletBinding()]
param(
    [ValidateSet('debug', 'release')][string]$Mode = 'debug',
    [string]$Repository = (Split-Path -Parent $PSScriptRoot),
    [Parameter(Mandatory)][string]$EvidenceRoot,
    [Parameter(Mandatory)][string]$HeaderRoot,
    [Parameter(Mandatory)][string]$DependencyLock,
    [Parameter(Mandatory)][string]$PreloaderRoot,
    [Parameter(Mandatory)][string]$Prelink,
    [Parameter(Mandatory)][string]$RuntimeManifest,
    [Parameter(Mandatory)][string]$Bmb,
    [Parameter(Mandatory)][string]$Provider,
    [Parameter(Mandatory)][string]$TargetElf,
    [Parameter(Mandatory)][string]$Ndk,
    [string]$Xmake = 'xmake'
)
$ErrorActionPreference = 'Stop'
$env:XMAKE_STATS = 'false'
$taskRepo = (Resolve-Path -LiteralPath $Repository).Path
$taskEvidence = [IO.Path]::GetFullPath($EvidenceRoot)
if ($taskEvidence.StartsWith($taskRepo.TrimEnd('\') + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw 'Validation artifacts must be outside the source worktree.'
}
New-Item -ItemType Directory -Path $taskEvidence -Force | Out-Null
$taskBuild = Join-Path $taskEvidence "build-$Mode"
$taskResults = [Collections.Generic.List[object]]::new()

function Invoke-Phase([string]$Name, [string[]]$Arguments) {
    $taskLog = Join-Path $taskEvidence "$Mode-$Name.log"
    $taskStart = Get-Date
    & $Xmake @Arguments *> $taskLog
    $taskExit = $LASTEXITCODE
    $taskResults.Add([ordered]@{
        phase=$Name; mode=$Mode; command=@($Xmake)+$Arguments; exit_code=$taskExit
        elapsed_seconds=((Get-Date)-$taskStart).TotalSeconds
        log=$taskLog; log_sha256=(Get-FileHash -LiteralPath $taskLog).Hash
    })
    ConvertTo-Json -InputObject @($taskResults.ToArray()) -Depth 5 |
        Set-Content -LiteralPath (Join-Path $taskEvidence "$Mode-results.json") -Encoding utf8
    if ($taskExit -ne 0) {
        Get-Content -LiteralPath $taskLog -Tail 20
        throw "Android kernel $Name failed. Evidence retained in $taskLog"
    }
    Write-Output "Android $Mode $Name passed"
}

Push-Location -LiteralPath $taskRepo
try {
    Invoke-Phase 'configure' @(
        'f', '-c', '-p', 'android', '-a', 'arm64-v8a', '-m', $Mode, '-y',
        "--ndk=$Ndk", '--ndk_sdkver=28', '--runtimes=c++_shared',
        "--android_header_root=$HeaderRoot", "--android_dependency_lock=$DependencyLock",
        "--preloader_android_root=$PreloaderRoot", "--android_prelink_executable=$Prelink",
        "--android_runtime_manifest=$RuntimeManifest", "--android_bmb=$Bmb",
        "--android_provider_elf=$Provider", "--android_target_elf=$TargetElf", '-o', $taskBuild
    )
    Invoke-Phase 'build' @('build', '-vD', '-j', '2', 'LeviLaminaAndroidKernel')
    $taskElfReport = Get-Content -Raw -LiteralPath (Join-Path $taskBuild 'g2/elf.json') | ConvertFrom-Json
    if (-not $taskElfReport.passed -or $taskElfReport.G6_complete) { throw 'Unexpected G2 ELF validation state.' }
    Write-Output 'G2 compilation and ELF checks passed. Device lifecycle is a separate gate; G6 is not complete.'
} finally { Pop-Location }
