#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
enum class NeighborDirection : uint {
    Bottom           = 0,
    Top              = 1,
    Left             = 2,
    Right            = 3,
    Back             = 4,
    Front            = 5,
    BottomLeft       = 6,
    BottomRight      = 7,
    BottomBack       = 8,
    BottomFront      = 9,
    TopLeft          = 10,
    TopRight         = 11,
    TopBack          = 12,
    TopFront         = 13,
    LeftBack         = 14,
    LeftFront        = 15,
    RightBack        = 16,
    RightFront       = 17,
    BottomLeftBack   = 18,
    BottomLeftFront  = 19,
    BottomRightBack  = 20,
    BottomRightFront = 21,
    TopLeftBack      = 22,
    TopLeftFront     = 23,
    TopRightBack     = 24,
    TopRightFront    = 25,
    Count            = 26,
};
#else // @header-generator platform
enum class NeighborDirection : uint {};
#endif // @header-generator platform

}
