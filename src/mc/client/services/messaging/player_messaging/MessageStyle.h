#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

#if defined(LL_PLAT_A) // @header-generator platform
enum class MessageStyle : uchar {
    Default = 0,
    Realms  = 1,
};
#else // @header-generator platform
enum class MessageStyle : uchar {};
#endif // @header-generator platform

}
