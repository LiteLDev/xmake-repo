#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv {

enum class InputFormat : uchar {
    binary       = 0,
    jsonString   = 1,
    jsonCpp      = 2,
    jsonRapid    = 3,
    dynamicValue = 4,
};

}
