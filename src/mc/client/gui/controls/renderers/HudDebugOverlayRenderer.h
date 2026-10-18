#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/options/DebugHudOptions.h"
#include "mc/deps/core/threading/BackgroundWorker.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class HudDebugOverlayRenderer {
public:
    // HudDebugOverlayRenderer inner types declare
    // clang-format off
    struct WorkerStatsSnapshot;
#if defined(LL_PLAT_A) // @header-generator platform
    struct WorkerStats;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct WorkerStats;
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    struct TaskStatsSnapshot;
#if defined(LL_PLAT_A) // @header-generator platform
    struct TaskStats;
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TaskStats;
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    struct SpinLockMetrics;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
    struct WorkerStats;
    struct TaskStats;
#endif // @header-generator platform
#endif // @header-generator platform
    struct SpinLockStats;
    // clang-format on

    // HudDebugOverlayRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct WorkerStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> queued;
        ::ll::TypedStorage<8, 8, uint64> reQueued;
        ::ll::TypedStorage<8, 8, uint64> processed;
        ::ll::TypedStorage<8, 8, uint64> noops;
        ::ll::TypedStorage<8, 8, uint64> maxQueued;
        ::ll::TypedStorage<8, 8, uint64> sorts;
        ::ll::TypedStorage<8, 8, uint64> waits;
        // NOLINTEND
    };
#else // @header-generator platform
    struct WorkerStatsSnapshot {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct WorkerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> last;
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> curr;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct WorkerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> last;
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> curr;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TaskStatsSnapshot {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TaskStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> count;
        ::ll::TypedStorage<8, 8, ulong> maxCount;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TaskStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> count;
        ::ll::TypedStorage<8, 8, uint64> maxCount;
        // NOLINTEND
    };
#else // @header-generator platform
    struct SpinLockMetrics {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TaskStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> last;
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> curr;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TaskStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> last;
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> curr;
        // NOLINTEND
    };
#else // @header-generator platform
    struct WorkerStats {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SpinLockMetrics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> contention;
        ::ll::TypedStorage<8, 8, uint64> contentionBlocked;
        ::ll::TypedStorage<8, 8, uint64> blockedTicks;
        ::ll::TypedStorage<8, 8, uint64> blockedTicksMax;
        ::ll::TypedStorage<8, 8, uint64> yields;
        ::ll::TypedStorage<8, 8, uint64> lockCount;
        ::ll::TypedStorage<8, 8, uint64> lockTicks;
        ::ll::TypedStorage<8, 8, uint64> lockTicksMax;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TaskStats {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDebugDepthArrayTextureMaterial;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BackgroundWorker*, ::HudDebugOverlayRenderer::WorkerStats>>
        mWorkerStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BackgroundWorker*, ::HudDebugOverlayRenderer::WorkerStats>>
                                                                                        mCurrentWorkerStats;
    ::ll::TypedStorage<8, 32, ::HudDebugOverlayRenderer::TaskStats>                     mTaskStats;
    ::ll::TypedStorage<8, 128, ::HudDebugOverlayRenderer::SpinLockStats>                mSpinLockStats;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mLastUpdateTime;
    ::ll::TypedStorage<4, 8, ::std::optional<::DebugHudOptions>>                        mLastDebugHudOption;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::steady_clock::time_point>> mDebugHudOptionEndTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HudDebugOverlayRenderer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct SpinLockStats {};
#endif // @header-generator platform
#endif // @header-generator platform
};
