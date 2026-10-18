#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/VolumetricFog.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderVolumetricFogDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                              mViewId;
    ::ll::TypedStorage<4, 88, ::mce::framebuilder::gamecomponents::VolumetricFog> mVolumetricFog;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderVolumetricFogDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
