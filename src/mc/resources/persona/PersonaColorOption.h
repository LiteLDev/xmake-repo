#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
enum PersonaColorOption : uchar {
    SkinColor  = 0,
    Hair       = 1,
    FacialHair = 2,
    Eyebrow    = 3,
    Sclera     = 4,
    Iris       = 5,
    Mouth      = 6,
    Primary    = 7,
    Secondary  = 8,
    Accent     = 9,
    Unknown    = 10,
};
#else // @header-generator platform
enum class PersonaColorOption : uchar {};
#endif // @header-generator platform

}
