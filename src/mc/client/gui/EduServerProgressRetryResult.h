#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
enum EduServerProgressRetryResult : uint {
    None     = 0,
    Passcode = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class EduServerProgressRetryResult : int {
    None     = 0,
    Passcode = 1,
};
#else // @header-generator platform
enum class EduServerProgressRetryResult : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
