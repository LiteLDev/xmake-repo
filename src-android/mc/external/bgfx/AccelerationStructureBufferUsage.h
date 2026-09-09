#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct AccelerationStructureBufferUsage {
public:
    // AccelerationStructureBufferUsage inner types define
    enum Enum : uchar {
        STATIC  = 0,
        DYNAMIC = 1,
    };
};

} // namespace bgfx
