#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct RenderChunkQuadInfo {
public:
    // member variables
    // NOLINTBEGIN
    uint                              index   : 31;
    uint                              reverse : 1;
    ::ll::TypedStorage<4, 12, ::Vec3> centroid;
    // NOLINTEND
};
