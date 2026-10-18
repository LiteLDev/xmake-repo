#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeValues {

enum class Terrain : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Ocean          = 0,
    Land           = 1,
    SpecialLand_1  = 2,
    SpecialLand_2  = 3,
    SpecialLand_3  = 4,
    SpecialLand_4  = 5,
    SpecialLand_5  = 6,
    SpecialLand_6  = 7,
    SpecialLand_7  = 8,
    SpecialLand_8  = 9,
    SpecialLand_9  = 10,
    SpecialLand_10 = 11,
    SpecialLand_11 = 12,
    SpecialLand_12 = 13,
    SpecialLand_13 = 14,
    SpecialLand_14 = 15,
    SpecialLand_15 = 16,
    SpecialLand_16 = 17,
#else // @header-generator platform
    Ocean         = 0,
    Land          = 1,
    SpecialLand1  = 2,
    SpecialLand2  = 3,
    SpecialLand3  = 4,
    SpecialLand4  = 5,
    SpecialLand5  = 6,
    SpecialLand6  = 7,
    SpecialLand7  = 8,
    SpecialLand8  = 9,
    SpecialLand9  = 10,
    SpecialLand10 = 11,
    SpecialLand11 = 12,
    SpecialLand12 = 13,
    SpecialLand13 = 14,
    SpecialLand14 = 15,
    SpecialLand15 = 16,
    SpecialLand16 = 17,
#endif // @header-generator platform
};

}
