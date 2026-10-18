#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockMultiBlockDelayedPlacement : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mFirstPartPos;
    ::ll::TypedStorage<1, 1, uchar>          mDirection;
    ::ll::TypedStorage<1, 1, uchar>          mPartCount;
    ::ll::TypedStorage<8, 8, ::Block const&> mFirstPart;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMultiBlockDelayedPlacement& operator=(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement(BlockMultiBlockDelayedPlacement const&);
    BlockMultiBlockDelayedPlacement();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
