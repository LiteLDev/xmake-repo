#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum CBType : uint {
    CB_DataVS = 0,
    CB_DataPS = 1,
    CB_Count  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class CBType : int {
    DataVS = 0,
    DataPS = 1,
    Count  = 2,
};
#else // @header-generator platform
enum class CBType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
