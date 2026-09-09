#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/rope/RopeAABB.h"

struct AABBBucket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB>                mBucketBounds;
    ::ll::TypedStorage<4, 4, int>                    mCachedTicks;
    ::ll::TypedStorage<8, 24, std::vector<RopeAABB>> mBBs;
    ::ll::TypedStorage<1, 1, bool>                   mDirty;
    ::ll::TypedStorage<1, 1, bool>                   mNeedsFinalize;
    // NOLINTEND

public:
    // prevent constructor by default
    AABBBucket& operator=(AABBBucket const&);
    AABBBucket(AABBBucket const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void mergeAABBs();
    // NOLINTEND
};
