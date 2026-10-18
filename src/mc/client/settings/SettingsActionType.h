#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SettingsActionType : int {
    ExternalLink = 0,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SettingsActionType : int {
    ExternalLink = 0,
};
#else // @header-generator platform
enum class SettingsActionType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
