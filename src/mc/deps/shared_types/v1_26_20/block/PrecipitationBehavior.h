#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class PrecipitationBehavior : uchar {
    None                       = 0,
    ObstructRain               = 1,
    ObstructRainAccumulateSnow = 2,
    Snowlogging                = 3,
#if defined(LL_PLAT_A) // @header-generator platform
    _Size                      = 4,
#else // @header-generator platform
    Size                       = 4,
#endif // @header-generator platform
};

}
