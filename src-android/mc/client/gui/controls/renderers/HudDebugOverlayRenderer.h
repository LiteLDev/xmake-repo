#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/DebugHudOptions.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
class BackgroundWorker;
class Font;
class IClientInstance;
class ScreenContext;
// clang-format on

class HudDebugOverlayRenderer {
public:
    // HudDebugOverlayRenderer inner types declare
    // clang-format off
    struct WorkerStatsSnapshot;
    struct WorkerStats;
    struct TaskStatsSnapshot;
    struct TaskStats;
    struct SpinLockMetrics;
    struct SpinLockStats;
    // clang-format on

    // HudDebugOverlayRenderer inner types define
    struct WorkerStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> queued;
        ::ll::TypedStorage<8, 8, ulong> reQueued;
        ::ll::TypedStorage<8, 8, ulong> processed;
        ::ll::TypedStorage<8, 8, ulong> noops;
        ::ll::TypedStorage<8, 8, ulong> maxQueued;
        ::ll::TypedStorage<8, 8, ulong> sorts;
        ::ll::TypedStorage<8, 8, ulong> waits;
        // NOLINTEND
    };

    struct WorkerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> last;
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> curr;
        // NOLINTEND
    };

    struct TaskStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> count;
        ::ll::TypedStorage<8, 8, ulong> maxCount;
        // NOLINTEND
    };

    struct TaskStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> last;
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> curr;
        // NOLINTEND
    };

    struct SpinLockMetrics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> contention;
        ::ll::TypedStorage<8, 8, ulong> contentionBlocked;
        ::ll::TypedStorage<8, 8, ulong> blockedTicks;
        ::ll::TypedStorage<8, 8, ulong> blockedTicksMax;
        ::ll::TypedStorage<8, 8, ulong> yields;
        ::ll::TypedStorage<8, 8, ulong> lockCount;
        ::ll::TypedStorage<8, 8, ulong> lockTicks;
        ::ll::TypedStorage<8, 8, ulong> lockTicksMax;
        // NOLINTEND
    };

    struct SpinLockStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::HudDebugOverlayRenderer::SpinLockMetrics> last;
        ::ll::TypedStorage<8, 64, ::HudDebugOverlayRenderer::SpinLockMetrics> curr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDebugDepthArrayTextureMaterial;
    ::ll::TypedStorage<8, 40, std::unordered_map<BackgroundWorker*, HudDebugOverlayRenderer::WorkerStats>> mWorkerStats;
    ::ll::TypedStorage<8, 40, std::unordered_map<BackgroundWorker*, HudDebugOverlayRenderer::WorkerStats>> mCurrentWorkerStats;
    ::ll::TypedStorage<8, 32, ::HudDebugOverlayRenderer::TaskStats> mTaskStats;
    ::ll::TypedStorage<8, 128, ::HudDebugOverlayRenderer::SpinLockStats> mSpinLockStats;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTime;
    ::ll::TypedStorage<4, 8, std::optional<DebugHudOptions>> mLastDebugHudOption;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mDebugHudOptionEndTime;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudDebugOverlayRenderer();

    MCNAPI ~HudDebugOverlayRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
