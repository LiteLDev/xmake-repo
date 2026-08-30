#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LiquidSplashRequest {

enum class SplashType : int {
    NONE        = 0,
    ENTER       = 1,
    HEAD_ENTERS = 2,
    HEAD_EXITS  = 3,
};

}
