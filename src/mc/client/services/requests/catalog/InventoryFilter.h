#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace catalog {

#if defined(LL_PLAT_A) // @header-generator platform
enum class InventoryFilter : uchar {
    None            = 0,
    InstalledOnly   = 1,
    UninstalledOnly = 2,
};
#else // @header-generator platform
enum class InventoryFilter : schar {};
#endif // @header-generator platform

}
