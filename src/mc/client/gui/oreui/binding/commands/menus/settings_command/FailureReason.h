#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SettingsCommand {

#if defined(LL_PLAT_A) // @header-generator platform
enum class FailureReason : uchar {
    SettingNotFound        = 0,
    WrongType              = 1,
    UpdateFailed           = 2,
    SettingDisabled        = 3,
    AsyncActionInterrupted = 4,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class FailureReason : uchar {
    SettingNotFound        = 0,
    WrongType              = 1,
    UpdateFailed           = 2,
    SettingDisabled        = 3,
    AsyncActionInterrupted = 4,
};
#else // @header-generator platform
enum class FailureReason : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

}
