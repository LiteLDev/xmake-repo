#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class SubChunkPos;
namespace ChunkPerformanceTrackingUtil { struct ScopedTimedSection; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct RenderChunkPerformanceTrackingData {
public:
    // RenderChunkPerformanceTrackingData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class RenderChunkBuildDetails;
#else // @header-generator platform
#endif // @header-generator platform
    struct LogTimeEntry;
    class NewTessellatorStepDetails;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class RenderChunkBuildDetails;
#endif // @header-generator platform
    struct RenderChunkBuildStats;
    // clang-format on

    // RenderChunkPerformanceTrackingData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class RenderChunkBuildDetails {};

    struct LogTimeEntry {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const> mLogTime;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>> const> mDeltaTime;
        ::ll::TypedStorage<1, 1, uchar const> mVersion;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        LogTimeEntry();
    };
#else // @header-generator platform
    struct LogTimeEntry {};
#endif // @header-generator platform

    class NewTessellatorStepDetails {};

#if defined(LL_PLAT_A) // @header-generator platform
    struct RenderChunkBuildStats {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::vector<RenderChunkPerformanceTrackingData::LogTimeEntry>> mRenderTimesLog;
        ::ll::TypedStorage<1, 1, ::RenderChunkPerformanceTrackingData::RenderChunkBuildDetails> mLastRenderChunkBuildDetails;
        ::ll::TypedStorage<1, 1, ::RenderChunkPerformanceTrackingData::NewTessellatorStepDetails> mLastNewTessellatorStepDetails;
        // clang-format on
        // NOLINTEND
    };
#else // @header-generator platform
    class RenderChunkBuildDetails {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkPerformanceTrackingUtil::ScopedTimedSection
    trackNewTessellationStepBuildTime(char const*, ::SubChunkPos const&);
    // NOLINTEND
#else // @header-generator platform
    struct RenderChunkBuildStats {};
#endif // @header-generator platform
};
