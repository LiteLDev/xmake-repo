#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockTessellatorCache;
// clang-format on

struct AOBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>   mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mLightColor;
    ::ll::TypedStorage<4, 4, float>            mBrightness;
    ::ll::TypedStorage<1, 1, bool>             mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, bool>             mIsFilled;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct AOBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>   mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mLightColor;
    ::ll::TypedStorage<4, 4, float>            mBrightness;
    ::ll::TypedStorage<1, 1, bool>             mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, bool>             mIsFilled;
    // NOLINTEND
};
#else // @header-generator platform
struct AOBlockData {};
#endif // @header-generator platform
#endif // @header-generator platform
