#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientPlayMode : uint {
    Normal                         = 0,
    Teaser                         = 1,
    Screen                         = 2,
    Viewer_Deprecated              = 3,
    Reality_Deprecated             = 4,
    Placement_Deprecated           = 5,
    LivingRoom_Deprecated          = 6,
    ExitLevel                      = 7,
    ExitLevelLivingRoom_Deprecated = 8,
    NumModes                       = 9,
};
