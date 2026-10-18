#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class Dimension;
class ILevelChunkEventManagerConnector;
class LevelChunk;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelSettings;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ChunkTickRangeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<4, 4, uint>                             mChunkTickRange;
    ::ll::TypedStorage<4, 4, uint>                             mMaxSimRadiusInChunks;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ChunkTickRangeManager();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChunkTickRangeManager(uint, uint);
#else // @header-generator platform
    MCAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk& levelChunk, int closestPlayerDistanceSquared);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onChunkLoaded(::ChunkSource&, ::LevelChunk&, int);
#else // @header-generator platform
    MCAPI bool isChunkInTickRange(::LevelChunk const& lc, ::std::optional<int> minDistToPlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getAdjustedChunkTickRange(::LevelSettings const&);
#else // @header-generator platform
    MCAPI bool isChunkInTickRange(
        ::ChunkPos const&  chunkPos,
        ::Dimension const& dimension,
        bool               shouldServerGenerate,
        float              serverBuildRatio,
        int                chunkViewRadius,
        int                numActiveUsers
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isChunkInTickRange(::LevelChunk const&, std::optional<int>) const;

    MCNAPI bool isChunkInTickRange(::ChunkPos const&, ::Dimension const&, bool, float, int, int) const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, uint);
#else // @header-generator platform
    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);
#endif // @header-generator platform
    // NOLINTEND
};
