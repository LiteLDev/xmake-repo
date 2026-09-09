[CmdletBinding()]
param(
    [ValidateSet('Check', 'Prepare', 'Publish')][string]$Mode = 'Check',
    [string]$Repository = (Split-Path -Parent $PSScriptRoot),
    [string]$Base,
    [string]$Header,
    [string]$Staging,
    [string]$MainWorktree,
    [string]$Python = 'python'
)

$ErrorActionPreference = 'Stop'
$taskRepo = (Resolve-Path -LiteralPath $Repository).Path

function Invoke-GitText([string]$Directory, [string[]]$Arguments) {
    $taskOutput = & git -C $Directory @Arguments
    if ($LASTEXITCODE -ne 0) { throw "git failed: $($Arguments -join ' ')" }
    return ($taskOutput -join "`n").Trim()
}

function Resolve-Commit([string]$Ref) {
    return Invoke-GitText $taskRepo @('rev-parse', '--verify', "${Ref}^{commit}")
}

if ((Invoke-GitText $taskRepo @('rev-parse', '--is-shallow-repository')) -ne 'false') {
    throw 'Complete Git history is required.'
}
if ((Invoke-GitText $taskRepo @('remote', 'get-url', 'levilamina')).TrimEnd('/') -ne 'https://github.com/LiteLDev/LeviLamina') {
    throw 'The levilamina remote is not the approved upstream.'
}
if ((Invoke-GitText $taskRepo @('remote', 'get-url', 'origin')).TrimEnd('/') -ne 'https://github.com/LiteLDev/LeviLaminaWithAndroid') {
    throw 'The origin remote is not the Header publication repository.'
}
$taskM = Resolve-Commit 'refs/remotes/levilamina/main'
if ($Mode -eq 'Publish') {
    $taskPublicationMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
    $taskDefaultH = $taskPublicationMetadata.provenance.upstream_header_commit
    $taskDefaultD = $taskPublicationMetadata.provenance.base_release_commit
} else {
    $taskDefaultH = 'refs/remotes/levilamina/header'
    $taskDefaultD = 'refs/remotes/origin/main'
}
$taskH = if ($Header) { Resolve-Commit $Header } else { Resolve-Commit $taskDefaultH }
$taskD = if ($Base) { Resolve-Commit $Base } else { Resolve-Commit $taskDefaultD }
$taskSnapshot = [ordered]@{main = $taskM; header = $taskH; fork = $taskD}
if ($Mode -eq 'Check') {
    $taskSnapshot['head'] = Resolve-Commit 'HEAD'
    $taskSnapshot['branch'] = Invoke-GitText $taskRepo @('branch', '--show-current')
    $taskStatus = Invoke-GitText $taskRepo @('status', '--porcelain=v1')
    $taskSnapshot['changed_paths'] = if ($taskStatus) { @($taskStatus -split "`n").Count } else { 0 }
    $taskUnmerged = Invoke-GitText $taskRepo @('diff', '--name-only', '--diff-filter=U')
    $taskSnapshot['unmerged_paths'] = @($taskUnmerged -split "`n" | Where-Object { $_ }).Count
    $taskSnapshot | ConvertTo-Json
    return
}

$taskSync = Join-Path $PSScriptRoot 'sync_upstream_headers.py'
if ($Mode -eq 'Prepare') {
    if (-not $Staging) { throw 'Prepare requires an explicit isolated staging path.' }
    if ((Invoke-GitText $taskRepo @('branch', '--show-current')) -ne 'codex/sync-upstream-header') {
        throw 'Prepare only operates in the Header synchronization worktree.'
    }
    $taskCandidateHead = Resolve-Commit 'HEAD'
    if ($taskCandidateHead -ne $taskD) {
        $taskExisting = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
        if ($taskExisting.provenance.base_release_commit -ne $taskD -or $taskExisting.provenance.upstream_header_commit -ne $taskH) {
            throw 'Candidate HEAD has moved from the frozen base.'
        }
        foreach ($taskAncestor in @($taskD, $taskH)) {
            & git -C $taskRepo merge-base --is-ancestor $taskAncestor $taskCandidateHead
            if ($LASTEXITCODE -ne 0) { throw 'Candidate history does not contain the frozen sources.' }
        }
        & $Python $taskSync verify --repo $taskRepo --base $taskD --header $taskH --staging $taskRepo
        if ($LASTEXITCODE -ne 0) { throw 'Existing synchronized candidate has drifted.' }
        Write-Output 'The frozen sources are already integrated; no content or commit changed.'
        return
    }
    if (-not (Test-Path -LiteralPath $Staging)) {
        & $Python $taskSync stage --repo $taskRepo --base $taskD --header $taskH --staging $Staging
        if ($LASTEXITCODE -ne 0) { throw 'Header assembly failed.' }
    }
    & $Python $taskSync verify --repo $taskRepo --base $taskD --header $taskH --staging $Staging
    if ($LASTEXITCODE -ne 0) { throw 'Staging does not match the frozen inputs.' }
    & git -C $taskRepo rev-parse --verify MERGE_HEAD *> $null
    if ($LASTEXITCODE -ne 0) {
        if (Invoke-GitText $taskRepo @('status', '--porcelain=v1')) {
            throw 'Commit or preserve existing candidate changes before starting a new merge.'
        }
        & git -C $taskRepo merge-base $taskD $taskH *> $null
        $taskBaseExit = $LASTEXITCODE
        if ($taskBaseExit -gt 1) { throw 'Unable to inspect the common ancestor.' }
        $taskMerge = @('merge', '--no-ff', '--no-commit')
        if ($taskBaseExit -eq 1) {
            $taskOldMetadata = Invoke-GitText $taskRepo @('show', "${taskD}:header-release.json") | ConvertFrom-Json
            if ($taskOldMetadata.provenance) { throw 'A previously synchronized release has lost its upstream ancestry.' }
            $taskMerge += '--allow-unrelated-histories'
        }
        & git -C $taskRepo @taskMerge $taskH
        if ($LASTEXITCODE -gt 1) { throw 'Git merge failed.' }
    }
    & $Python $taskSync apply --repo $taskRepo --base $taskD --header $taskH --staging $Staging
    if ($LASTEXITCODE -ne 0) { throw 'Header candidate application failed.' }
    Write-Output 'Headers assembled. Resolve and review non-Header conflicts before staging or committing.'
    return
}

if (-not $MainWorktree) { throw 'Publish requires the exact main worktree path.' }
$taskMain = (Resolve-Path -LiteralPath $MainWorktree).Path
if ((Invoke-GitText $taskMain @('rev-parse', '--path-format=absolute', '--git-common-dir')) -ne
    (Invoke-GitText $taskRepo @('rev-parse', '--path-format=absolute', '--git-common-dir'))) {
    throw 'The main worktree belongs to a different repository.'
}
if ((Resolve-Commit 'refs/tags/archive/p1-1.26.40.5-a1e1f0d7') -ne 'a1e1f0d7be65959a4c68822cb861b3365ae43755') {
    throw 'The immutable P1 archive tag is missing or incorrect.'
}
$taskS = Resolve-Commit 'HEAD'
$taskMetadata = Get-Content -Raw -LiteralPath (Join-Path $taskRepo 'header-release.json') | ConvertFrom-Json
if ($taskMetadata.provenance.base_release_commit -ne $taskD -or $taskMetadata.provenance.upstream_header_commit -ne $taskH) {
    throw 'Publication inputs differ from candidate provenance.'
}
& $Python (Join-Path $PSScriptRoot 'validate_header_release.py') --root $taskRepo --require-validated-sync
if ($LASTEXITCODE -ne 0) { throw 'Header publication gates have not passed.' }
& $Python $taskSync verify --repo $taskRepo --base $taskD --header $taskH --staging $taskRepo
if ($LASTEXITCODE -ne 0) { throw 'Published content does not match the actual source Git objects.' }
if (Invoke-GitText $taskRepo @('status', '--porcelain=v1')) { throw 'Candidate is not clean.' }
foreach ($taskAncestor in @($taskD, $taskH)) {
    & git -C $taskRepo merge-base --is-ancestor $taskAncestor $taskS
    if ($LASTEXITCODE -ne 0) { throw 'Candidate does not contain both source histories.' }
}
if ((Invoke-GitText $taskMain @('branch', '--show-current')) -ne 'main' -or (Invoke-GitText $taskMain @('status', '--porcelain=v1'))) {
    throw 'The publication worktree must be clean and on main.'
}
$taskLocalMain = Invoke-GitText $taskMain @('rev-parse', 'HEAD')
if ($taskLocalMain -notin @($taskD, $taskS)) { throw 'Local main has moved.' }
$taskRemoteD = (Invoke-GitText $taskRepo @('ls-remote', 'origin', 'refs/heads/main')).Split("`t")[0]
$taskRemoteH = (Invoke-GitText $taskRepo @('ls-remote', 'levilamina', 'refs/heads/header')).Split("`t")[0]
$taskRemoteTag = Invoke-GitText $taskRepo @('ls-remote', 'origin', 'refs/tags/archive/p1-1.26.40.5-a1e1f0d7')
if ($taskRemoteTag -and $taskRemoteTag.Split("`t")[0] -ne 'a1e1f0d7be65959a4c68822cb861b3365ae43755') {
    throw 'The remote P1 archive tag has a conflicting identity.'
}
if ($taskRemoteD -notin @($taskD, $taskS) -or $taskRemoteH -ne $taskH) { throw 'Remote tips moved; retain the candidate and start a new snapshot.' }
if ($taskLocalMain -ne $taskS) { Invoke-GitText $taskMain @('merge', '--ff-only', $taskS) }
Invoke-GitText $taskMain @('push', '--atomic', 'origin', 'main:refs/heads/main', 'refs/tags/archive/p1-1.26.40.5-a1e1f0d7')
Write-Output "Published Header snapshot $taskS"
