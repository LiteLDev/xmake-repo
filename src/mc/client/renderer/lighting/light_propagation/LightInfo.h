#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/light_propagation/LightInfoFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mGradientHandle;
    ::ll::TypedStorage<1, 1, uchar>  mIntensity;
    ::ll::TypedStorage<1, 1, uchar>  mFlags;
    // NOLINTEND
};
#else // @header-generator platform
struct LightInfo {};
#endif // @header-generator platform

} // namespace LightPropagation
