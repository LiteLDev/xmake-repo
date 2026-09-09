#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class SamplerAccess : uchar {
    None      = 0,
    Read      = 1,
    Write     = 2,
    ReadWrite = 3,
};

}
