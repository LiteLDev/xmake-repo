#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace IPJSC {

#if defined(LL_PLAT_A) // @header-generator platform
enum class Inputs : uchar {
    None = 0,
    Port = 1,
    ID   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class Inputs : uchar {
    None = 0,
    Port = 1,
    Id   = 2,
};
#else // @header-generator platform
enum class Inputs : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
