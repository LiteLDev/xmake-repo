#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerMessaging {

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

}
