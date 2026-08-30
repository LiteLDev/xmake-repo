#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::materials::definition {

enum class ShaderPipeline : uchar {
    Compute        = 0,
    VertexFragment = 1,
};

}
