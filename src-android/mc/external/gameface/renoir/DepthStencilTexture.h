#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DepthStencilTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Width;
    ::ll::TypedStorage<4, 4, uint> Height;
    ::ll::TypedStorage<4, 4, uint> SamplesCount;
    ::ll::TypedStorage<1, 1, bool> IsShaderResource;
    // NOLINTEND
};

} // namespace renoir
