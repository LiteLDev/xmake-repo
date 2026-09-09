#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct InsideBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mPos;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBlockData& operator=(InsideBlockData const&);
    InsideBlockData(InsideBlockData const&);
    InsideBlockData();
};
