#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategoryCounter.h"
#else // @header-generator platform
#endif // @header-generator platform

struct ProfilerLiteTelemetry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                       mAvgFps;
    ::ll::TypedStorage<4, 4, float>                                       mAvgServerSimTickTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgClientSimTickTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgBeginFrameTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgInputTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgRenderTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgEndFrameTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgUpdateFrameTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgUpdateGameTimeMS;
    ::ll::TypedStorage<4, 4, float>                                       mAvgRemainderTimePercent;
    ::ll::TypedStorage<4, 4, float>                                       mAvgUnaccountedTimePercent;
    ::ll::TypedStorage<4, 4, float>                                       mAvgGPUTimeMS;
    ::ll::TypedStorage<8, 24, std::vector<Memory::MemoryCategoryCounter>> mCategoryCounters;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk59d788;
    ::ll::UntypedStorage<4, 4>  mUnka94057;
    ::ll::UntypedStorage<4, 4>  mUnka18e9f;
    ::ll::UntypedStorage<4, 4>  mUnk556856;
    ::ll::UntypedStorage<4, 4>  mUnka2d2dd;
    ::ll::UntypedStorage<4, 4>  mUnk9ad6c9;
    ::ll::UntypedStorage<4, 4>  mUnk98e3a1;
    ::ll::UntypedStorage<4, 4>  mUnkcda221;
    ::ll::UntypedStorage<4, 4>  mUnk3e12c9;
    ::ll::UntypedStorage<4, 4>  mUnk251a13;
    ::ll::UntypedStorage<4, 4>  mUnkf6e934;
    ::ll::UntypedStorage<4, 4>  mUnk2d5a53;
    ::ll::UntypedStorage<8, 24> mUnk1db9cf;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerLiteTelemetry& operator=(ProfilerLiteTelemetry const&);
    ProfilerLiteTelemetry(ProfilerLiteTelemetry const&);
    ProfilerLiteTelemetry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProfilerLiteTelemetry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
