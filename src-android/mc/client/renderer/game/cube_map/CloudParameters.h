#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CubeMap {

struct CloudParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mRenderDistance;
    ::ll::TypedStorage<2, 2, short> mHeight;
    // NOLINTEND
};

} // namespace CubeMap
