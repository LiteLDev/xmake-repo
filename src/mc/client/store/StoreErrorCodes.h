#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class StoreErrorCodes : uchar {
    A0010       = 0,
    A0020       = 1,
    B0010       = 2,
    C0010       = 3,
    D0010       = 4,
    D0020       = 5,
    E0010       = 6,
    E0020       = 7,
    E0030       = 8,
    E0040       = 9,
    F0010       = 10,
    SD003       = 11,
    SD004       = 12,
    SD005       = 13,
    SD006       = 14,
    SD007       = 15,
    SD008       = 16,
    L_HttpError = 17,
    U0000       = 18,
};
#else // @header-generator platform
enum class StoreErrorCodes : uchar {};
#endif // @header-generator platform
