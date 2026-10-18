#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

#if defined(LL_PLAT_A) // @header-generator platform
enum class LaunchOptions : int {
    None                 = 0,
    LaunchSettings       = 1,
    LaunchWorldNoHosting = 2,
    LaunchWorldHosting   = 3,
};
#else // @header-generator platform
enum class LaunchOptions : int {};
#endif // @header-generator platform

}
