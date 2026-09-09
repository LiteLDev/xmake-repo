#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelChunk;
// clang-format on

class ChunkRecyclerTelemetryData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
    class TimeAccumulator;
    struct BucketContext;
    struct ChunkData;
    class TaskInfo;
    // clang-format on

    // ChunkRecyclerTelemetryData inner types define
    enum class Bucket : int {
        GenTimeSavedByCacheSize100   = 0,
        GenTimeSavedByCacheSize250   = 1,
        GenTimeSavedByCacheSize500   = 2,
        GenTimeSavedByCacheSize1000  = 3,
        GenTimeSavedByCacheSize2000  = 4,
        GenTimeSavedByCacheSize5000  = 5,
        GenTimeSavedByCacheSize10000 = 6,
        GenTimeSavedByCacheSize20000 = 7,
        GenTimeSavedByCacheSize50000 = 8,
        GenTimeSavedByCacheSizeINF   = 9,
        _Count                       = 10,
    };

    class TimeAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mNanoseconds;
        // NOLINTEND
    };

    struct BucketContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ChunkRecyclerTelemetryData::Bucket> mBucket;
        ::ll::TypedStorage<8, 24, std::string>                         mName;
        ::ll::UntypedStorage<8, 16>                                    mTimeAccumulator;
        ::ll::UntypedStorage<8, 48>                                    isInRangeInclusive;
        // NOLINTEND
    };

    struct ChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTimeAccumulator;
        ::ll::TypedStorage<8, 8, long>                                          mSequence;
        // NOLINTEND
    };

    class TaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeStart;
        // clang-format on
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ChunkRecyclerTelemetryData::BucketContext>> mTimeBuckets;
    ::ll::TypedStorage<8, 24, std::map<ChunkPos, ChunkRecyclerTelemetryData::ChunkData>> mChunkCache;
    ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTotalTime;
    ::ll::TypedStorage<8, 8, ulong> mDeletedChunks;
    ::ll::TypedStorage<8, 8, ulong> mGeneratedChunks;
    ::ll::TypedStorage<1, 1, bool> mIsLocked;
    ::ll::TypedStorage<1, 1, bool> mIsLevelStarted;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLevelStartTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDuration;
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<4, 4, int> mCurrentTick;
    ::ll::TypedStorage<8, 8, ulong> mOuterUpdateCount;
    ::ll::TypedStorage<8, 8, ulong> mInnerUpdateCount;
    ::ll::TypedStorage<8, 8, ulong> mChunkRadiusSum;
    ::ll::TypedStorage<8, 8, ulong> mOverworldPlayerSum;
    ::ll::TypedStorage<8, 8, ulong> mMaximumOverworldPlayers;
    ::ll::TypedStorage<8, 8, ulong> mActiveOverworldChunksSum;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void endLevel(::Level&);

    MCNAPI void recordChunkDeleted(::LevelChunk const&);

    MCNAPI void startLevel(::Level const&);

    MCNAPI void tickLevel(::Level const&);
    // NOLINTEND
};
