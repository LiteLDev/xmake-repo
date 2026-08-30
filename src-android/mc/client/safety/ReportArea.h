#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

enum class ReportArea : int {
    CHAT               = 0,
    SKIN               = 1,
    GAMEPLAY           = 2,
    IN_GAME_CREATIONS  = 3,
    NAME_OR_GAMERTAG   = 4,
    GALLERY_SCREENSHOT = 6,
    COUNT              = 7,
};

}
