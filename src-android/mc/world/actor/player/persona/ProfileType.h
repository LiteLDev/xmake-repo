#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

enum class ProfileType : uchar {
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
};

}
