#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class Vec3;
// clang-format on

class NetworkChunkSubscriber {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint>                             mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, uint>                             mBlockRadiusLimit;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChunkViewSource>> mSource;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mLastChunkUpdatePosition;
    ::ll::TypedStorage<4, 4, uint>                                 mHandleForChunkBuildOrderUpdates;
    ::ll::TypedStorage<4, 4, uint>                                 mBlockRadiusLimit;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkViewSource>> mSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI NetworkChunkSubscriber();

    MCNAPI void clearRegion();

    MCNAPI void destroyRegion();

    MCNAPI ::ChunkSource& getChunkSource() const;

    MCNAPI bool moveRegion(::BlockPos const&, uint, ::Vec3 const&, float);

    MCNAPI void prepareRegion(::ChunkSource&, ::ChunkPos&);

    MCNAPI void updateRadiusLimit(uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool moveRegion(::BlockPos const& position, uint blockRadius, ::Vec3 const& direction, float minDistance);

    MCAPI void prepareRegion(::ChunkSource& mainChunkSource, ::ChunkPos& center);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
