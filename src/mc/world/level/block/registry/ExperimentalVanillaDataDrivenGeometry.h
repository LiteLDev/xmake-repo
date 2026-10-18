#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
// clang-format on

class ExperimentalVanillaDataDrivenGeometry {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addComponentsToBlocks(::Experiments const&);
#else // @header-generator platform
    MCAPI static void addComponentsToBlocks(::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND
};
