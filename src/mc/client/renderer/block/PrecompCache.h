#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/CacheCoordinates.h"
#include "mc/world/level/BlockPos.h"

struct PrecompCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 432, ::CacheCoordinates[12]> mCacheCoordinates;
    ::ll::TypedStorage<4, 312, ::BlockPos[26]>         mBlockPos;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/CacheCoordinates.h"
#include "mc/world/level/BlockPos.h"

struct PrecompCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 432, ::CacheCoordinates[12]> mCacheCoordinates;
    ::ll::TypedStorage<4, 312, ::BlockPos[26]>         mBlockPos;
    // NOLINTEND
};
#else // @header-generator platform
struct PrecompCache {};
#endif // @header-generator platform
#endif // @header-generator platform
