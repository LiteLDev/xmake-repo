#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightInfoFlags.h"

namespace LightPropagation {

struct LightInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mGradientHandle;
    ::ll::TypedStorage<1, 1, uchar>  mIntensity;
    ::ll::TypedStorage<1, 1, uchar>  mFlags;
    // NOLINTEND
};

} // namespace LightPropagation
