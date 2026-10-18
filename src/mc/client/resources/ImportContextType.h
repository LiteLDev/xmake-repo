#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ImportContextType : int {
    Default              = 0,
    DLC                  = 1,
    InstructionalContent = 2,
    Template             = 3,
    Treatment            = 4,
    World                = 5,
    WorldPack            = 6,
};
#else // @header-generator platform
enum class ImportContextType : int {};
#endif // @header-generator platform
