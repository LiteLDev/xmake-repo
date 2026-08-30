#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_init_limits_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> maxEncoders;
    ::ll::TypedStorage<4, 4, uint>   transientVbSize;
    ::ll::TypedStorage<4, 4, uint>   transientIbSize;
    ::ll::TypedStorage<1, 1, uchar>  maxRendererWorkers;
    ::ll::TypedStorage<1, 1, bool>   dynamicTextureHandles;
    // NOLINTEND
};
