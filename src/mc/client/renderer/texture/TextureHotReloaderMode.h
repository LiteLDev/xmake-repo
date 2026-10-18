#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class TextureHotReloaderMode : int {
    RELOAD_NONE = 0,
    RELOAD_ALL  = 1,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class TextureHotReloaderMode : int {
    None = 0,
    All  = 1,
};
#else // @header-generator platform
enum class TextureHotReloaderMode : int {};
#endif // @header-generator platform
#endif // @header-generator platform
