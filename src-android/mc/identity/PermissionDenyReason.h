#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class PermissionDenyReason : uint {
    // bitfield representation
    None                        = 0,
    Minecraft_Ban               = 1u << 0,
    XboxLive                    = 1u << 1,
    XboxLive_Parental           = 1u << 2,
    XboxLive_Ban                = 1u << 3,
    Platform_PlayStation        = 1u << 4,
    Platform_NintendoSwitch     = 1u << 5,
    Unknown                     = 1u << 6,
    Platform_PlayStation_Plus   = 1u << 7,
    Platform_NintendoSwitch_NSO = 1u << 8,
};

}
