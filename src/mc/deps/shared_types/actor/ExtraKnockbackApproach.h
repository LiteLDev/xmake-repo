#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class ExtraKnockbackApproach : uchar {
    ReapplyDefault  = 0,
    MultiplyReduced = 1,
};

}
#endif // @header-generator platform
