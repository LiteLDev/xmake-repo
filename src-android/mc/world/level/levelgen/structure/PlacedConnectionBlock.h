#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/PlacementConnectionHandleType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct PlacedConnectionBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>   mBlock;
    ::ll::TypedStorage<4, 4, ::PlacementConnectionHandleType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    PlacedConnectionBlock& operator=(PlacedConnectionBlock const&);
    PlacedConnectionBlock(PlacedConnectionBlock const&);
    PlacedConnectionBlock();
};
