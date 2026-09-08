[CmdletBinding()]
param(
    [ValidateSet('Tooling', 'Headers', 'Fidelity', 'Release')][string]$Stage = 'Tooling',
    [string]$Repository = (Split-Path -Parent $PSScriptRoot),
    [Parameter(Mandatory)][string]$EvidenceRoot,
    [string]$BuildSource,
    [string]$Ndk,
    [string]$DependencyLock,
    [string]$Python = 'python'
)

$ErrorActionPreference = 'Stop'
$taskRepo = (Resolve-Path -LiteralPath $Repository).Path
$taskEvidence = [IO.Path]::GetFullPath($EvidenceRoot)
if ($taskEvidence.StartsWith($taskRepo.TrimEnd('\') + '\', [StringComparison]::OrdinalIgnoreCase)) {
    throw 'Evidence must be outside the source worktree.'
}
New-Item -ItemType Directory -Path $taskEvidence -Force | Out-Null
$taskResults = [Collections.Generic.List[object]]::new()

function Get-SourceHashes([string]$Name) {
    $taskFiles = if ($Name -eq 'python') {
        @(Get-ChildItem -LiteralPath $PSScriptRoot -Filter '*.py') +
        @(Get-ChildItem -LiteralPath (Join-Path $taskRepo 'test/python') -Filter '*.py') +
        @(Get-ChildItem -LiteralPath $PSScriptRoot -Filter '*.ps1')
    } elseif ($Name -eq 'platform_fidelity') {
        Get-Item -LiteralPath (Join-Path $PSScriptRoot 'sync_upstream_headers.py'), (Join-Path $PSScriptRoot 'validate_header_release.py')
    } elseif ($Name -in @('release_validator', 'build_source_release')) {
        Get-Item -LiteralPath (Join-Path $PSScriptRoot 'validate_header_release.py')
    } else {
        Get-Item -LiteralPath (Join-Path $taskRepo 'xmake.lua'), (Join-Path $taskRepo 'test/main.cpp')
    }
    $taskHashes = [ordered]@{}
    foreach ($taskFile in $taskFiles | Sort-Object FullName) {
        $taskName = [IO.Path]::GetRelativePath($taskRepo, $taskFile.FullName).Replace('\', '/')
        $taskBytes = [IO.File]::ReadAllBytes($taskFile.FullName)
        $taskText = [Text.Encoding]::UTF8.GetString($taskBytes).Replace("`r`n", "`n")
        $taskHashes[$taskName] = [Convert]::ToHexString([Security.Cryptography.SHA256]::HashData([Text.Encoding]::UTF8.GetBytes($taskText)))
    }
    return $taskHashes
}

function Invoke-Check([string]$Name, [string]$Program, [string[]]$Arguments, [string]$Directory) {
    $taskLog = Join-Path $taskEvidence "$Name.log"
    $taskMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
    $taskSourceHashes = Get-SourceHashes $Name
    $taskStart = Get-Date
    Push-Location -LiteralPath $Directory
    try { & $Program @Arguments > $taskLog 2>&1; $taskExit = $LASTEXITCODE }
    finally { Pop-Location }
    $taskResults.Add([ordered]@{
        check = $Name; exit_code = $taskExit; elapsed_seconds = ((Get-Date) - $taskStart).TotalSeconds
        command = @($Program) + $Arguments; working_directory = $Directory
        log = $taskLog; log_sha256 = (Get-FileHash -LiteralPath $taskLog).Hash
        manifest_sha256 = $taskMetadata.manifest.sha256; source_files = $taskSourceHashes
    })
    ConvertTo-Json -InputObject @($taskResults.ToArray()) -Depth 6 |
        Set-Content -LiteralPath (Join-Path $taskEvidence "$Stage-results.json") -Encoding utf8
    if ($taskExit -ne 0) {
        Get-Content -LiteralPath $taskLog -Tail 25
        throw "Validation failed: $Name"
    }
    Write-Output "$Name passed"
}

switch ($Stage) {
    'Tooling' {
        Invoke-Check 'python' $Python @('-m', 'unittest', 'discover', '-s', 'test/python', '-v') $taskRepo
        $taskTokens = $null; $taskErrors = $null
        foreach ($taskFile in Get-ChildItem -LiteralPath $PSScriptRoot -Filter '*.ps1') {
            [Management.Automation.Language.Parser]::ParseFile($taskFile.FullName, [ref]$taskTokens, [ref]$taskErrors) | Out-Null
            if ($taskErrors) { throw ($taskErrors -join "`n") }
        }
    }
    'Fidelity' {
        $taskMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
        Invoke-Check 'platform_fidelity' $Python @(
            (Join-Path $PSScriptRoot 'sync_upstream_headers.py'), 'verify', '--repo', $taskRepo,
            '--base', $taskMetadata.provenance.base_release_commit,
            '--header', $taskMetadata.provenance.upstream_header_commit, '--staging', $taskRepo
        ) $taskRepo
    }
    'Release' {
        Invoke-Check 'release_validator' $Python @((Join-Path $PSScriptRoot 'validate_header_release.py'), '--root', $taskRepo) $taskRepo
    }
    'Headers' {
        if (-not $BuildSource -or -not $Ndk -or -not $DependencyLock) {
            throw 'Headers requires an isolated build source, exact NDK, and dependency runtime lock.'
        }
        $taskBuildSource = (Resolve-Path -LiteralPath $BuildSource).Path
        if ($taskBuildSource -eq $taskRepo) { throw 'Header compilation must use the isolated validation source.' }
        Invoke-Check 'build_source_release' $Python @((Join-Path $PSScriptRoot 'validate_header_release.py'), '--root', $taskBuildSource) $taskRepo
        $taskSourceMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
        $taskBuildMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskBuildSource 'header-release.json') | ConvertFrom-Json
        if ($taskSourceMetadata.manifest.sha256 -ne $taskBuildMetadata.manifest.sha256) { throw 'Build source differs from candidate.' }
        foreach ($taskFile in @('xmake.lua', 'test/main.cpp', 'android-dependencies.lock.json')) {
            if ((Get-FileHash -LiteralPath (Join-Path $taskRepo $taskFile)).Hash -ne
                (Get-FileHash -LiteralPath (Join-Path $taskBuildSource $taskFile)).Hash) {
                throw "Build harness differs from candidate: $taskFile"
            }
        }
        foreach ($taskPlatform in @('windows', 'android')) {
            foreach ($taskMode in @('debug', 'release')) {
                $taskBuildDir = Join-Path $taskEvidence "build-$taskPlatform-$taskMode"
                $taskConfigure = @('f', '-c', '-p', $taskPlatform, '-m', $taskMode, '-o', $taskBuildDir, '-y')
                if ($taskPlatform -eq 'android') {
                    $taskConfigure += @('-a', 'arm64-v8a', "--ndk=$Ndk", '--ndk_sdkver=21', "--android_dependency_lock=$DependencyLock")
                    $taskTargets = @('header_android')
                } else {
                    $taskConfigure += @('-a', 'x64')
                    $taskTargets = @('header_client', 'header_server')
                }
                Invoke-Check "configure_${taskPlatform}_$taskMode" 'xmake' $taskConfigure $taskBuildSource
                foreach ($taskTarget in $taskTargets) {
                    $taskName = if ($taskPlatform -eq 'android') { "android_$taskMode" } else { "windows_$($taskTarget.Substring(7))_$taskMode" }
                    Invoke-Check $taskName 'xmake' @('build', '-vD', '-j', '1', $taskTarget) $taskBuildSource
                }
            }
        }
    }
}
