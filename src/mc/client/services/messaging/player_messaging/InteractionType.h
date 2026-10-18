#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

#if defined(LL_PLAT_A) // @header-generator platform
enum InteractionType : uint {
    CLICK              = 0,
    DISMISS            = 1,
    DELETE_MESSAGE     = 2,
    IMPRESSION         = 3,
    CONTROL_IMPRESSION = 4,
    SUBMIT             = 5,
    SETTINGS_UPDATE    = 6,
    READ_ALL           = 7,
    DELETE_ALL_READ    = 8,
    UNKNOWN            = 9,
};
#else // @header-generator platform
enum class InteractionType : int {};
#endif // @header-generator platform

}
