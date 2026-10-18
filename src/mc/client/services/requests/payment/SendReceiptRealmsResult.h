#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class SendReceiptRealmsResult : int {
    OK     = 0,
    FAILED = 1,
};
#else // @header-generator platform
enum class SendReceiptRealmsResult : int {};
#endif // @header-generator platform
