#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerTextEvent : uchar {
    PlayerSleeping    = 0,
    PlayerConnection  = 1,
    PlayerChangedSkin = 2,
    _Count            = 3,
};
