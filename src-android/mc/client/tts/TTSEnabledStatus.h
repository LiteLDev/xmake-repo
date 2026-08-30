#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TTSEnabledStatus : int {
    NotEnabled        = 0,
    EnabledByDefault  = 1,
    EnabledByPlatform = 2,
    EnabledByXBL      = 3,
    EnabledPreviously = 4,
};
