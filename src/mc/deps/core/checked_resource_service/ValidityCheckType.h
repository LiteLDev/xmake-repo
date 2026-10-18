#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ValidityCheckType : uchar {
    Increment = 0,
    Immutable = 1,
};
#else // @header-generator platform
enum class ValidityCheckType : uchar {};
#endif // @header-generator platform

}
