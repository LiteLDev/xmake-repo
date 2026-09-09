#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlatformDrawDistance : int {
    NINTENDO_SWITCH                         = 12,
    XBOX_ONE_BASE                           = 16,
    PLAYSTATION_4                           = 16,
    PLAYSTATION_4_PRO                       = 18,
    XBOX_ONE_X                              = 18,
    PLAYSTATION_4_EMULATED_ON_PLAYSTATION_5 = 28,
    CLIENT_SIDE_CHUNK_GEN_MAX               = 28,
    XBOX_ONE_EMULATED_ON_SCARLETT           = 36,
    PLAYSTATION_5                           = 36,
    DESKTOP                                 = 96,
};
