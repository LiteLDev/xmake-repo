#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

enum class ResourceMemoryBucket : uchar {
    Texture  = 0,
    Geometry = 1,
    Audio    = 2,
    Json     = 3,
    Resource = 4,
    _Count   = 5,
};

}
