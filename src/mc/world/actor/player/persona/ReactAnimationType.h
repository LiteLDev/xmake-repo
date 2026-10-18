#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ReactAnimationType : uint {
    idle               = 0,
    idle_torso         = 1,
    idle_head          = 2,
    idle_bottom        = 3,
    idle_arm           = 4,
    idle_back          = 5,
    react_head         = 6,
    react_torso        = 7,
    react_bottom       = 8,
    react_arm          = 9,
    react_back         = 10,
    react_confirm      = 11,
    react_bored        = 12,
    react_bored_torso  = 13,
    react_bored_head   = 14,
    react_bored_bottom = 15,
    react_bored_arm    = 16,
    react_bored_back   = 17,
    react_offer        = 18,
    react_offer_torso  = 19,
    react_offer_head   = 20,
    react_offer_bottom = 21,
    react_offer_arm    = 22,
    react_offer_back   = 23,
    zoom               = 24,
};
#else // @header-generator platform
enum class ReactAnimationType : uint {};
#endif // @header-generator platform

}
