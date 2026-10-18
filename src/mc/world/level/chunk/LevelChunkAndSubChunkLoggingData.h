#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ChunkPos;
class SubChunkPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct LevelChunkAndSubChunkLoggingData {
public:
    // LevelChunkAndSubChunkLoggingData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct LogEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct CollatedLogEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LogEntry;
#endif // @header-generator platform
    // clang-format on

    // LevelChunkAndSubChunkLoggingData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct CollatedLogEntry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, std::chrono::duration<float, std::ratio<1, 1>>> mElapsedTime;
        ::ll::TypedStorage<8, 24, std::string>                                   mClientOrServer;
        ::ll::TypedStorage<8, 24, std::string>                                   mType;
        ::ll::TypedStorage<8, 24, std::string>                                   mMessage;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::std::chrono::duration<float, ::std::ratio<1, 1>>> mElapsedTime;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mClientOrServer;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mType;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mMessage;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LogEntry {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        CollatedLogEntry();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimePoint;
        ::ll::TypedStorage<8, 32, ::std::string>                          mLogEntry;
        ::ll::TypedStorage<1, 1, bool>                                    mIsClientSide;
        // NOLINTEND
#endif // @header-generator platform
    };
};
