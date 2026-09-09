#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategoryCounter.h"

struct ProfilerLiteTelemetry {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
