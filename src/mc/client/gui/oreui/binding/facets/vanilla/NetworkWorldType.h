#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class NetworkWorldType : uchar {
    ThirdParty = 0,
    External   = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class NetworkWorldType : schar {
    ThirdParty = 0,
    External   = 1,
};
#else // @header-generator platform
enum class NetworkWorldType : schar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
