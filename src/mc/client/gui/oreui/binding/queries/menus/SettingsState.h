#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SettingsState : int {
    Enabled  = 0,
    Disabled = 1,
    Hidden   = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SettingsState : int {
    Enabled  = 0,
    Disabled = 1,
    Hidden   = 2,
};
#else // @header-generator platform
enum class SettingsState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
