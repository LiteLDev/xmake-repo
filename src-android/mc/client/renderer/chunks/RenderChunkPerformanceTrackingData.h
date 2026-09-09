#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
namespace ChunkPerformanceTrackingUtil { struct ScopedTimedSection; }
// clang-format on

struct RenderChunkPerformanceTrackingData {
public:
    // RenderChunkPerformanceTrackingData inner types declare
    // clang-format off
    class RenderChunkBuildDetails;
    struct LogTimeEntry;
    class NewTessellatorStepDetails;
    struct RenderChunkBuildStats;
    // clang-format on

    // RenderChunkPerformanceTrackingData inner types define
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

    class NewTessellatorStepDetails {};

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

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ChunkPerformanceTrackingUtil::ScopedTimedSection
    trackNewTessellationStepBuildTime(char const*, ::SubChunkPos const&);
    // NOLINTEND
};
