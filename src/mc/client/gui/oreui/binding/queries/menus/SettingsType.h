#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
enum class SettingsType : int {
    Number    = 0,
    Boolean   = 1,
    String    = 2,
    Option    = 3,
    Action    = 4,
    Text      = 5,
    GroupInfo = 6,
    Banner    = 7,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class SettingsType : int {
    Number    = 0,
    Boolean   = 1,
    String    = 2,
    Option    = 3,
    Action    = 4,
    Text      = 5,
    GroupInfo = 6,
    Banner    = 7,
};
#else // @header-generator platform
enum class SettingsType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
