#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::Sound {

enum class DurationMode : uchar {
    GameTime = 0,
    RealTime = 1,
};

}
#endif // @header-generator platform
