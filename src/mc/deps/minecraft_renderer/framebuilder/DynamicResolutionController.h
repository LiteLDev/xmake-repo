#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/SingleExponentialSmoothing.h"
#include "mc/deps/core/math/TimeWeightedSmoothing.h"
#include "mc/deps/minecraft_renderer/framebuilder/DynamicResolutionScalingMethod.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class DynamicResolutionController {
public:
    // DynamicResolutionController inner types define
    using Smoothing = ::mce::SingleExponentialSmoothing<double>;

    using TimeSmoothing = ::mce::
        TimeWeightedSmoothing<double, std::chrono::steady_clock, std::chrono::duration<double, std::ratio<1, 1000>>>;

    using DurationMilliDouble = std::chrono::duration<double, std::ratio<1, 1000>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                                              mCurrentScale;
    ::ll::TypedStorage<8, 8, double>                                              mScaleFactor;
    ::ll::TypedStorage<1, 1, ::mce::framebuilder::DynamicResolutionScalingMethod> mScalingMethod;
    ::ll::TypedStorage<4, 4, float>                                               mTargetFrameTime;
    ::ll::UntypedStorage<8, 24>                                                   mTotalFrameTime;
    ::ll::UntypedStorage<8, 24>                                                   mRenderTime;
    ::ll::UntypedStorage<8, 24>                                                   mWaitForGPUTime;
    ::ll::UntypedStorage<8, 24>                                                   mGameTime;
    ::ll::UntypedStorage<8, 40>                                                   mDynamicResolutionScale;
    // NOLINTEND
};
#else // @header-generator platform
class DynamicResolutionController {};
#endif // @header-generator platform

} // namespace mce::framebuilder
