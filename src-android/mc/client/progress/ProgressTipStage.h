#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Progress {

enum class ProgressTipStage : uchar {
    Beginner = 0,
    Midgame  = 1,
    Lategame = 2,
    None     = 255,
};

}
