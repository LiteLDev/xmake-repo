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
    MCNAPI explicit CachedChunkBlockSource(::BlockSource&);

    MCNAPI ushort _updateCacheAndGetIndex(::BlockPos const&);

    MCNAPI ::Block const& getBlock(::BlockPos const&);

    MCNAPI ::BlockSource& getBlockSource();

    MCNAPI ::Block const& getLiquidBlock(::BlockPos const&);

    MCNAPI ::Material const& getMaterial(::BlockPos const&);

    MCNAPI void prefetchForPosition(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&);
    // NOLINTEND
};
