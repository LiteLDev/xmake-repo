#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
enum class TechStack : int {
    JsonUI = 0,
    OreUI  = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TechStack : int {
    JsonUI = 0,
    OreUI  = 1,
};
#else // @header-generator platform
enum class TechStack : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
