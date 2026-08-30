#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct VolumeDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWidth;
    ::ll::TypedStorage<4, 4, int> mHeight;
    ::ll::TypedStorage<4, 4, int> mDepth;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
