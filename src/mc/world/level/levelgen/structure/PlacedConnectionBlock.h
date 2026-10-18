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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>>   mBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::PlacementConnectionHandleType> mType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlacedConnectionBlock& operator=(PlacedConnectionBlock const&);
    PlacedConnectionBlock(PlacedConnectionBlock const&);
    PlacedConnectionBlock();
#else // @header-generator platform
#endif // @header-generator platform
};
