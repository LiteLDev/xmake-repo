#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ReceiptType : uchar {
    Receipt        = 0,
    JwsTransaction = 1,
};
#else // @header-generator platform
enum class ReceiptType : uchar {};
#endif // @header-generator platform
