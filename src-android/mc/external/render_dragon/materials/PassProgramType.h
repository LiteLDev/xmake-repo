#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials {

enum class PassProgramType : int {
    VertexOnly        = 0,
    VertexAndFragment = 1,
    Compute           = 2,
};

}
