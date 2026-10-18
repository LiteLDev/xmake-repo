#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlatformDrawDistance : int {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    NintendoSwitch                     = 12,
    XboxOneBase                        = 16,
    Playstation4                       = 16,
    Playstation4Pro                    = 18,
    XboxOneX                           = 18,
    Playstation4EmulatedOnPlaystation5 = 28,
    ClientSideChunkGenMax              = 28,
    XboxOneEmulatedOnScarlett          = 36,
    Playstation5                       = 36,
    Desktop                            = 96,
#endif // @header-generator platform
};
