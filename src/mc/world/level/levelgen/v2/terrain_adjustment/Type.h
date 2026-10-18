#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::TerrainAdjustment {

#if defined(LL_PLAT_A) // @header-generator platform
enum Type : uchar {
    NONE        = 0,
    BURY        = 1,
    BEARD_THIN  = 2,
    BEARD_BOX   = 3,
    ENCAPSULATE = 4,
#else // @header-generator platform
enum class Type : uchar {
    None        = 0,
    Bury        = 1,
    BeardThin   = 2,
    BeardBox    = 3,
    Encapsulate = 4,
#endif // @header-generator platform
};

}
