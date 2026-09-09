#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RenderCompute.h"
#include "mc/external/bgfx/RenderDraw.h"

namespace bgfx {

union RenderItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> draw;
    ::ll::UntypedStorage<4, 128> compute;
    // NOLINTEND
};
} // namespace bgfx
