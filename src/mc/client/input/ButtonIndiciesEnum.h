#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class ButtonIndiciesEnum : int {
    INVALID         = 0,
    FACEBUTTONDOWN  = 1,
    FACEBUTTONRIGHT = 2,
    FACEBUTTONLEFT  = 3,
    FACEBUTTONUP    = 4,
    DPADUP          = 5,
    DPADDOWN        = 6,
    DPADLEFT        = 7,
    DPADDRIGHT      = 8,
    LS              = 9,
    RS              = 10,
    LB              = 11,
    RB              = 12,
    SELECT          = 13,
    START           = 14,
    GEARVRTOUCHPAD  = 15,
    LSDOWN          = 16,
    LSRIGHT         = 17,
    LSLEFT          = 18,
    LSUP            = 19,
    SIZE            = 20,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ButtonIndiciesEnum : int {
    Invalid         = 0,
    Facebuttondown  = 1,
    Facebuttonright = 2,
    Facebuttonleft  = 3,
    Facebuttonup    = 4,
    Dpadup          = 5,
    Dpaddown        = 6,
    Dpadleft        = 7,
    Dpaddright      = 8,
    Ls              = 9,
    Rs              = 10,
    Lb              = 11,
    Rb              = 12,
    Select          = 13,
    Start           = 14,
    Gearvrtouchpad  = 15,
    Lsdown          = 16,
    Lsright         = 17,
    Lsleft          = 18,
    Lsup            = 19,
    Size            = 20,
};
#else // @header-generator platform
enum class ButtonIndiciesEnum : int {};
#endif // @header-generator platform
#endif // @header-generator platform
