#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChemistryTableType : int {
    CompoundCreator    = 0,
    MaterialReducer    = 1,
    ElementConstructor = 2,
    LabTable           = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _count             = 4,
#else // @header-generator platform
    Count              = 4,
#endif // @header-generator platform
};
