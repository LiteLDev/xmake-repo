#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/LightingModels.h"

namespace mce::framebuilder {

struct FrameLightingModelCapabilities {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::rendering::LightingModels> mActiveLightingModel;
    ::ll::TypedStorage<1, 1, bool>                                mSupportsNormalAndTangents;
    ::ll::TypedStorage<1, 1, bool>                                mSupportsPointLights;
    ::ll::TypedStorage<1, 1, bool>                                mSupportsPBRFormats;
    // NOLINTEND
};

} // namespace mce::framebuilder
