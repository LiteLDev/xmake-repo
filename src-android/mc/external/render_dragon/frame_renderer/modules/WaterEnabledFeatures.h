#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules::water {

struct WaterEnabledFeatures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mEnableExtinctionPass;
    ::ll::TypedStorage<1, 1, bool>  mEnablePSYForWaterVolumetrics;
    ::ll::TypedStorage<1, 1, bool>  mEnablePSYForExtinction;
    ::ll::TypedStorage<1, 1, bool>  mEnableWaterSurface;
    ::ll::TypedStorage<4, 4, float> mExtinctionDistShift;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::water
