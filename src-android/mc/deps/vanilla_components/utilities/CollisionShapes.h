#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct CollisionShapes {
public:
    // CollisionShapes inner types declare
    // clang-format off
    struct BlockAndBlockPos;
    // clang-format on

    // CollisionShapes inner types define
    struct BlockAndBlockPos {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
        ::ll::TypedStorage<4, 12, ::BlockPos>    mBlockPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                              mShapes;
    ::ll::TypedStorage<8, 24, std::vector<CollisionShapes::BlockAndBlockPos>> mBlocks;
    ::ll::TypedStorage<1, 1, bool>                                            mNearUnloadedChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShapes& operator=(CollisionShapes const&);
    CollisionShapes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CollisionShapes(::CollisionShapes const&);

    MCNAPI void addCollisionShape(::AABB const&);

    MCNAPI void addCollisionShape(::AABB const&, ::Block const&, ::BlockPos const&);

    MCNAPI std::pair<BlockPos, const Block*> getBlockPosCurrentlyStandingOn(::AABB) const;

    MCNAPI void reserve(ulong);

    MCNAPI ulong size() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CollisionShapes const&);
    // NOLINTEND
};
