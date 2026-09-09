#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::postfx {

struct BloomParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntensity;
    ::ll::TypedStorage<1, 1, uchar> mBloomMipCount;
    ::ll::TypedStorage<4, 4, float> mBloomThreshold;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::postfx
