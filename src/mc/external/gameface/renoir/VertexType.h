#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum VertexType : uint {
    VT_Standard         = 0,
    VT_Slim             = 1,
    VT_SlimInstanceData = 2,
    VT_Glyph            = 3,
    VT_FillPathAtlas    = 4,
    VT_Custom           = 5,
    VT_Count            = 6,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class VertexType : int {
    Standard         = 0,
    Slim             = 1,
    SlimInstanceData = 2,
    Glyph            = 3,
    FillPathAtlas    = 4,
    Custom           = 5,
    Count            = 6,
};
#else // @header-generator platform
enum class VertexType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
