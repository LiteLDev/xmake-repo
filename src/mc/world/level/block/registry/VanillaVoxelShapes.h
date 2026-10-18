#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

class VanillaVoxelShapes {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addVoxelShapesToBlocks(::Experiments const&);
#else // @header-generator platform
    MCAPI static void addVoxelShapesToBlocks(::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND
};
