#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
enum BlendingCoeff : uint {
    BC_Zero           = 1,
    BC_One            = 2,
    BC_SrcColor       = 3,
    BC_InvSrcColor    = 4,
    BC_SrcAlpha       = 5,
    BC_InvSrcAlpha    = 6,
    BC_DestAlpha      = 7,
    BC_InvDestAlpha   = 8,
    BC_DestColor      = 9,
    BC_InvDestColor   = 10,
    BC_SrcAlphaSat    = 11,
    BC_BlendFactor    = 14,
    BC_InvBlendFactor = 15,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class BlendingCoeff : int {
    Zero           = 1,
    One            = 2,
    SrcColor       = 3,
    InvSrcColor    = 4,
    SrcAlpha       = 5,
    InvSrcAlpha    = 6,
    DestAlpha      = 7,
    InvDestAlpha   = 8,
    DestColor      = 9,
    InvDestColor   = 10,
    SrcAlphaSat    = 11,
    BlendFactor    = 14,
    InvBlendFactor = 15,
};
#else // @header-generator platform
enum class BlendingCoeff : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
