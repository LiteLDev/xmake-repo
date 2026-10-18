#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonActionType : int {
    None     = 0,
    External = 1,
    Internal = 2,
};
#else // @header-generator platform
enum class ButtonActionType : int {};
#endif // @header-generator platform

}
