#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/chunk/DeserializationChanges.h"
#include "mc/world/level/chunk/LevelChunkBlockActorStorage.h"
#include "mc/world/level/chunk/SubChunk.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ChunkLocalHeight;
class ChunkViewSource;
class LevelChunk;
class Player;
class TaskResult;
namespace ClientBlobCache { class Cache; }
// clang-format on

class SubChunkPacketHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ChunkPos> mChunkPos;
    ::ll::TypedStorage<4, 12, ::SubChunkPos> mSubChunkPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::UntypedStorage<8, 576> mPacketData;
    ::ll::TypedStorage<1, 1, bool> mHasSetRequestTime;
    ::ll::TypedStorage<1, 1, bool> mHasDoneInsertionTask;
    ::ll::TypedStorage<8, 136, ::LevelChunkBlockActorStorage> mBlockEntitiesMap;
    ::ll::TypedStorage<4, 4, float> mCacheRequestAbortTime;
    ::ll::TypedStorage<1, 1, bool const> mCacheEnabled;
    ::ll::TypedStorage<1, 1, bool> mHasSetAbortTimer;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartCacheRequestTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mCacheCheckAccumulatedTime;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlobCache::Cache> const> mCache;
    ::ll::TypedStorage<8, 24, std::string> mCacheBuffer;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<1, 1, bool> mSubChunkCheckSumMismatch;
    ::ll::TypedStorage<8, 64, ::DeserializationChanges> mDeserializationChanges;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkPacketHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubChunkPacketHandler(
        ::SubChunkPacketPayload::SubChunkPacketData const&,
        std::shared_ptr<ClientBlobCache::Cache>,
        ::DimensionType const,
        ::SubChunkPos const&
    );

    MCNAPI void
    _compareHeightMapsForLightingFixup(std::array<ChunkLocalHeight, 256>&, std::array<ChunkLocalHeight, 256>&);

    MCNAPI ~SubChunkPacketHandler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& REQUEST_DELAY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::SubChunkPacketPayload::SubChunkPacketData const&,
        std::shared_ptr<ClientBlobCache::Cache>,
        ::DimensionType const,
        ::SubChunkPos const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class SubChunkPacketHandler {};
#endif // @header-generator platform
