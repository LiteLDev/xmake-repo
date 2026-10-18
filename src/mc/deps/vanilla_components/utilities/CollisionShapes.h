#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/phys/AABB.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AABB;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AABB>>                              mShapes;
    ::ll::TypedStorage<8, 24, std::vector<CollisionShapes::BlockAndBlockPos>> mBlocks;
    ::ll::TypedStorage<1, 1, bool>                                            mNearUnloadedChunk;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AABB>>                              mShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::CollisionShapes::BlockAndBlockPos>> mBlocks;
    ::ll::TypedStorage<1, 1, bool>                                                mNearUnloadedChunk;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CollisionShapes& operator=(CollisionShapes const&);
    CollisionShapes();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CollisionShapes(::CollisionShapes const&);
#else // @header-generator platform
    MCAPI CollisionShapes(::CollisionShapes const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCollisionShape(::AABB const&);
#else // @header-generator platform
    MCAPI ::std::pair<::BlockPos, ::Block const*> getBlockPosCurrentlyStandingOn(::AABB box) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCollisionShape(::AABB const&, ::Block const&, ::BlockPos const&);

    MCNAPI std::pair<BlockPos, const Block*> getBlockPosCurrentlyStandingOn(::AABB) const;

    MCNAPI void reserve(ulong);

    MCNAPI ulong size() const;
#else // @header-generator platform
    MCAPI ::CollisionShapes& operator=(::CollisionShapes&&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CollisionShapes const&);
#else // @header-generator platform
    MCAPI void* $ctor(::CollisionShapes const&);
#endif // @header-generator platform
    // NOLINTEND
};
