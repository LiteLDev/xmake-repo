#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

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

}
