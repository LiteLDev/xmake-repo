#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ExpressionNodeInternal {

struct BlockAndPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>    block;
    ::ll::TypedStorage<4, 12, ::BlockPos const> pos;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAndPos& operator=(BlockAndPos const&);
    BlockAndPos(BlockAndPos const&);
    BlockAndPos();
};

} // namespace ExpressionNodeInternal
