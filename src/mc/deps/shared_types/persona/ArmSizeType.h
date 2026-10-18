#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::persona {

enum class ArmSizeType : uchar {
    Slim    = 0,
    Wide    = 1,
    Count   = 2,
    Unknown = 3,
};

}
#endif // @header-generator platform
