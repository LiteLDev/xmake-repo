#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class ProfileType : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
    Legacy       = 0,
    Persona1     = 1,
    Persona2     = 2,
    Persona3     = 3,
    Persona4     = 4,
    Persona5     = 5,
    COUNT        = 6,
    NOT_FOUND    = 7,
    DEFAULT_CAST = 8,
    MULTIPLAYER  = 9,
    TEMPORARY    = 10,
#else // @header-generator platform
    Legacy      = 0,
    Persona1    = 1,
    Persona2    = 2,
    Persona3    = 3,
    Persona4    = 4,
    Persona5    = 5,
    Count       = 6,
    NotFound    = 7,
    DefaultCast = 8,
    Multiplayer = 9,
    Temporary   = 10,
#endif // @header-generator platform
};

}
