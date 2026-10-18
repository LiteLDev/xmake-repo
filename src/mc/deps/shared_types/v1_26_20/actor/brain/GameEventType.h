#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::Brain::MemorySensors::GameEvents {

enum class GameEventType : uchar {
    All        = 0,
    GoatHorn   = 1,
    Instrument = 2,
#if defined(LL_PLAT_A) // @header-generator platform
    _count     = 3,
#else // @header-generator platform
    Count      = 3,
#endif // @header-generator platform
};

}
