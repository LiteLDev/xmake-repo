#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

enum class PrimitiveType : int {
    TriangleList  = 0,
    LineList      = 1,
    LineStrip     = 2,
    TriangleStrip = 3,
};

}
