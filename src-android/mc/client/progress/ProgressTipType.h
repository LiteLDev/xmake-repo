#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Progress {

enum class ProgressTipType : uchar {
    // bitfield representation
    Progress = 1 << 0,
    Realm    = 1 << 1,
    Addon    = 1 << 2,
    Creative = 1 << 3,
    Editor   = 1 << 4,
};

}
