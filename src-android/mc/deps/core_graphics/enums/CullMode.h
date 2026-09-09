#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class CullMode : uchar {
    CullNone  = 0,
    CullFront = 1,
    CullBack  = 2,
};

}
