#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class RenderControllerArrayType : int {
    Geometry = 0,
    Material = 1,
    Texture  = 2,
    Count    = 3,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class RenderControllerArrayType : int {
    Geometry = 0,
    Material = 1,
    Texture  = 2,
    Count    = 3,
};
#else // @header-generator platform
enum class RenderControllerArrayType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
