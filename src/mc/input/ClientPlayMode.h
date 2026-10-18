#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientPlayMode : uint {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    Normal                        = 0,
    Teaser                        = 1,
    Screen                        = 2,
    ViewerDeprecated              = 3,
    RealityDeprecated             = 4,
    PlacementDeprecated           = 5,
    LivingRoomDeprecated          = 6,
    ExitLevel                     = 7,
    ExitLevelLivingRoomDeprecated = 8,
    NumModes                      = 9,
#endif // @header-generator platform
};
