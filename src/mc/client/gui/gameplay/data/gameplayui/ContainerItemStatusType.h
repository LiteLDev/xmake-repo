#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_C) // @header-generator platform
enum class ContainerItemStatusType : int {
    Damage   = 0,
    Fullness = 1,
};
#else // @header-generator platform
enum class ContainerItemStatusType : int {};
#endif // @header-generator platform

}
#endif // @header-generator platform
