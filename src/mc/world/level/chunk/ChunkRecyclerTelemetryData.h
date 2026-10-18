#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Level;
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
// clang-format on

class ChunkRecyclerTelemetryData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ChunkRecyclerTelemetryData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class TaskInfo;
#endif // @header-generator platform
    class TimeAccumulator;
    struct BucketContext;
    struct ChunkData;
#if defined(LL_PLAT_A) // @header-generator platform
    class TaskInfo;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        _Count                       = 10,
#else // @header-generator platform
        Count                        = 10,
    };

    class TaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mTimeStart;
        // NOLINTEND
#endif // @header-generator platform
    };

    class TimeAccumulator {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> mNanoseconds;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mNanoseconds;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct BucketContext {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ChunkRecyclerTelemetryData::Bucket> mBucket;
        ::ll::TypedStorage<8, 24, std::string>                         mName;
        ::ll::UntypedStorage<8, 16>                                    mTimeAccumulator;
        ::ll::UntypedStorage<8, 48>                                    isInRangeInclusive;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ChunkRecyclerTelemetryData::Bucket>          mBucket;
        ::ll::TypedStorage<8, 32, ::std::string>                                mName;
        ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTimeAccumulator;
        ::ll::TypedStorage<8, 64, ::std::function<bool(int64)>>                 isInRangeInclusive;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ChunkData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator> mTimeAccumulator;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, int64>                                         mSequence;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkRecyclerTelemetryData::BucketContext>>      mTimeBuckets;
    ::ll::TypedStorage<8, 16, ::std::map<::ChunkPos, ::ChunkRecyclerTelemetryData::ChunkData>> mChunkCache;
    ::ll::TypedStorage<8, 8, ::ChunkRecyclerTelemetryData::TimeAccumulator>                    mTotalTime;
    ::ll::TypedStorage<8, 8, uint64>                                                           mDeletedChunks;
    ::ll::TypedStorage<8, 8, uint64>                                                           mGeneratedChunks;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                                                             mIsLevelStarted;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                          mLevelStartTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                                       mDuration;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mMutex;
    ::ll::TypedStorage<4, 4, int>                                                              mCurrentTick;
    ::ll::TypedStorage<8, 8, uint64>                                                           mOuterUpdateCount;
    ::ll::TypedStorage<8, 8, uint64>                                                           mInnerUpdateCount;
    ::ll::TypedStorage<8, 8, uint64>                                                           mChunkRadiusSum;
    ::ll::TypedStorage<8, 8, uint64>                                                           mOverworldPlayerSum;
    ::ll::TypedStorage<8, 8, uint64>                                                           mMaximumOverworldPlayers;
    ::ll::TypedStorage<8, 8, uint64> mActiveOverworldChunksSum;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void endLevel(::Level&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ChunkRecyclerTelemetryData();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void recordChunkDeleted(::LevelChunk const&);
#else // @header-generator platform
    MCAPI void _reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void startLevel(::Level const&);
#else // @header-generator platform
    MCAPI void endLevel(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tickLevel(::Level const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void recordCacheCheck(::LevelChunk const& lc);
#endif

    MCAPI void recordChunkDeleted(::LevelChunk const& lc);

#ifdef LL_PLAT_C
    MCAPI void recordTaskCompleted(::LevelChunk const& lc, ::ChunkRecyclerTelemetryData::TaskInfo const& taskInfo);
#endif

    MCAPI void startLevel(::Level const& level);

    MCAPI void tickLevel(::Level const& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
