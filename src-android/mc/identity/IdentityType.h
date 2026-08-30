#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

enum class IdentityType : uint64 {
    PlayFab          = 0,
    XboxLive         = 1,
    Platform         = 2,
    Platform_Network = 3,
    EDU_Network      = 4,
    MinecraftService = 5,
    Mock             = 6,
    Count            = 7,
    All              = 8,
};

}
