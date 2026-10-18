#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
// clang-format on

struct BlockTryPlaceByPlayerEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                 mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mPos;
    ::ll::TypedStorage<1, 1, uchar const>       mFace;
    ::ll::TypedStorage<4, 12, ::Vec3 const>     mFaceLocation;
    ::ll::TypedStorage<8, 8, ::Block const&>    mPermutationToPlace;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos const>           mPos;
    ::ll::TypedStorage<1, 1, uchar const>                 mFace;
    ::ll::TypedStorage<4, 12, ::Vec3 const>               mFaceLocation;
    ::ll::TypedStorage<8, 8, ::Block const&>              mPermutationToPlace;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockTryPlaceByPlayerEvent& operator=(BlockTryPlaceByPlayerEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockTryPlaceByPlayerEvent(BlockTryPlaceByPlayerEvent const&);
#endif // @header-generator platform
    BlockTryPlaceByPlayerEvent();
};
