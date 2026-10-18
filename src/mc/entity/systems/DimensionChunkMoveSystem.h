#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class DimensionChunkMoveSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createDimensionChunkMoveSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createDimensionChunkMoveSystem();
#endif // @header-generator platform
    // NOLINTEND
};
