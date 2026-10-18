#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LevelChunk;
class Material;
struct SubChunk;
// clang-format on

class CachedChunkBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>      mBlockSource;
    ::ll::TypedStorage<2, 2, short>               mMinHeight;
    ::ll::TypedStorage<8, 8, ::ChunkPos>          mPreviousChunkPos;
    ::ll::TypedStorage<2, 2, short>               mPreviousSubChunkHeight;
    ::ll::TypedStorage<8, 8, ::LevelChunk const*> mPreviousLevelChunk;
    ::ll::TypedStorage<8, 8, ::SubChunk const*>   mPreviousSubChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedChunkBlockSource& operator=(CachedChunkBlockSource const&);
    CachedChunkBlockSource(CachedChunkBlockSource const&);
    CachedChunkBlockSource();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CachedChunkBlockSource(::BlockSource&);
#else // @header-generator platform
    MCAPI ushort _updateCacheAndGetIndex(::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ushort _updateCacheAndGetIndex(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::Block const& getBlock(::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& getBlock(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::Block const& getLiquidBlock(::BlockPos const& position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource& getBlockSource();

    MCNAPI ::Block const& getLiquidBlock(::BlockPos const&);

    MCNAPI ::Material const& getMaterial(::BlockPos const&);

    MCNAPI void prefetchForPosition(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&);
#else // @header-generator platform
    MCAPI ::Material const& getMaterial(::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND
};
