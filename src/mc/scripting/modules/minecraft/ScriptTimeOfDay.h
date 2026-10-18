#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ScriptTimeOfDay : uint {
#else // @header-generator platform
enum class ScriptTimeOfDay : int {
#endif // @header-generator platform
    Day      = 1000,
    Noon     = 6000,
    Sunset   = 12000,
    Night    = 13000,
    Midnight = 18000,
    Sunrise  = 23000,
};

}
