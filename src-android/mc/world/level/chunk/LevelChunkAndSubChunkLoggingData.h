#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class SubChunkPos;
// clang-format on

struct LevelChunkAndSubChunkLoggingData {
public:
    // LevelChunkAndSubChunkLoggingData inner types declare
    // clang-format off
    struct LogEntry;
    struct CollatedLogEntry;
    // clang-format on

    // LevelChunkAndSubChunkLoggingData inner types define
    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimePoint;
        ::ll::TypedStorage<8, 24, std::string> mLogEntry;
        ::ll::TypedStorage<1, 1, bool> mIsClientSide;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        LogEntry();
    };

    struct CollatedLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, std::chrono::duration<float, std::ratio<1, 1>>> mElapsedTime;
        ::ll::TypedStorage<8, 24, std::string>                                   mClientOrServer;
        ::ll::TypedStorage<8, 24, std::string>                                   mType;
        ::ll::TypedStorage<8, 24, std::string>                                   mMessage;
        // NOLINTEND

    public:
        // prevent constructor by default
        CollatedLogEntry();
    };
};
