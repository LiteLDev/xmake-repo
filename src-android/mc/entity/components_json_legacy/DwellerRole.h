#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DwellerRole : int {
    DwellingInhabitant = 0,
    DwellingDefender   = 1,
    DwellingHostile    = 2,
    DwellingPassive    = 3,
    COUNT              = 4,
};
