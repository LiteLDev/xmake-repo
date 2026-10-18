#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/SingleExponentialSmoothing.h"
#include "mc/deps/minecraft_renderer/framebuilder/FramePacingConfig.h"
#include "mc/deps/minecraft_renderer/framebuilder/FrameTracker.h"
#include "mc/platform/brstd/flat_set.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::framebuilder {

class DynamicFramePacingController {
public:
    // DynamicFramePacingController inner types declare
    // clang-format off
    class FrameTimeCache;
    // clang-format on

    // DynamicFramePacingController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BottleneckType : int {
        Cpu     = 0,
        Gpu     = 1,
        Unknown = 2,
    };
#else // @header-generator platform
    enum class BottleneckType : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class FrameTimeCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mCache;
        // NOLINTEND
    };

    using Smoothing = ::mce::SingleExponentialSmoothing<float>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>                                                                  mActualRenderTime;
    ::ll::UntypedStorage<4, 12>                                                                  mAverageFrameTime;
    ::ll::TypedStorage<4, 4, int>                                                                mTargetFramerate;
    ::ll::TypedStorage<8, 1632, ::mce::framebuilder::FrameTracker>                               mFrameTracker;
    ::ll::TypedStorage<8, 80, ::mce::framebuilder::DynamicFramePacingController::FrameTimeCache> mFrameTimeCache;
    ::ll::TypedStorage<4, 4, float>                                                              mBaseTargetFrameTime;
    ::ll::TypedStorage<4, 4, float>                                                             mLowestTestedRenderTime;
    ::ll::TypedStorage<4, 4, float>                                                             mMaxLateRate;
    ::ll::TypedStorage<4, 4, float>                                                             mLatencyAdjustment;
    ::ll::TypedStorage<4, 4, float>                                                             mMaxLatency;
    ::ll::TypedStorage<4, 4, float>                                                             mLastFrameLatency;
    ::ll::UntypedStorage<4, 12>                                                                 mLatency;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::DynamicFramePacingController::BottleneckType> mBottleneck;
    ::ll::TypedStorage<4, 84, ::mce::framebuilder::FramePacingConfig>                           mConfig;
    // NOLINTEND
#else // @header-generator platform
    class FrameTimeCache {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder
