#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PackAccessState : uchar {
    Unknown           = 0,
    Valid             = 1,
    MissingContents   = 2,
    InvalidContents   = 3,
    MissingContentKey = 4,
};
