#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/pathfinder/NodeType.h"
#else // @header-generator platform
#endif // @header-generator platform

class PathfinderNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>               heapIdx;
    ::ll::TypedStorage<4, 4, float>             g;
    ::ll::TypedStorage<4, 4, float>             h;
    ::ll::TypedStorage<4, 4, float>             f;
    ::ll::TypedStorage<4, 4, float>             mCostMalus;
    ::ll::TypedStorage<4, 4, float>             mMoveMalus;
    ::ll::TypedStorage<4, 4, float>             mTargetDist;
    ::ll::TypedStorage<4, 4, ::NodeType>        mType;
    ::ll::TypedStorage<8, 8, ::PathfinderNode*> cameFrom;
    ::ll::TypedStorage<4, 12, ::BlockPos>       pos;
    ::ll::TypedStorage<1, 1, bool>              closed;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk62bf72;
    ::ll::UntypedStorage<4, 4>  mUnkc2992d;
    ::ll::UntypedStorage<4, 4>  mUnk51c963;
    ::ll::UntypedStorage<4, 4>  mUnke68e8d;
    ::ll::UntypedStorage<4, 4>  mUnk84468c;
    ::ll::UntypedStorage<4, 4>  mUnkac9ee6;
    ::ll::UntypedStorage<4, 4>  mUnk5e6080;
    ::ll::UntypedStorage<4, 4>  mUnk675361;
    ::ll::UntypedStorage<8, 8>  mUnk2901ae;
    ::ll::UntypedStorage<4, 12> mUnk41a7d6;
    ::ll::UntypedStorage<1, 1>  mUnkcf5c02;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI float distanceTo(::PathfinderNode*) const;

    MCNAPI float distanceToSqr(::PathfinderNode*) const;

    MCNAPI bool equals(::PathfinderNode*);

    MCNAPI ::NodeType getType() const;

    MCNAPI bool inOpenSet();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    PathfinderNode& operator=(PathfinderNode const&);
    PathfinderNode(PathfinderNode const&);
    PathfinderNode();
#endif // @header-generator platform
};
