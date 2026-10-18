#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ExpressionNodeInternal {

struct BlockAndPos {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const&>    block;
    ::ll::TypedStorage<4, 12, ::BlockPos const> pos;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk76a585;
    ::ll::UntypedStorage<4, 12> mUnka9f74f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAndPos& operator=(BlockAndPos const&);
    BlockAndPos(BlockAndPos const&);
    BlockAndPos();
};

} // namespace ExpressionNodeInternal
