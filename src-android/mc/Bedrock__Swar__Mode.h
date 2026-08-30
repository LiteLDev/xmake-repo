#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Swar {

enum class Mode : uchar {
    Overflow = 0,
    Saturate = 1,
    Clamp    = 2,
};

}
