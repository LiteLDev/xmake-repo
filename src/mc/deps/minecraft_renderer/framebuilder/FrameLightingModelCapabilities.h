#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/rendering/LightingModels.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct FrameLightingModelCapabilities {};
#endif // @header-generator platform

} // namespace mce::framebuilder
