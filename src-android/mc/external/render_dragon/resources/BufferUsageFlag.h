#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon {

enum class BufferUsageFlag : uchar {
    ShaderResource  = 0,
    UnorderedAccess = 1,
    Count           = 2,
};

}
