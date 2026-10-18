#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ComponentState : int {
    Hidden   = 0,
    Disabled = 1,
    Enabled  = 2,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ComponentState : int {
    Hidden   = 0,
    Disabled = 1,
    Enabled  = 2,
};
#else // @header-generator platform
enum class ComponentState : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
