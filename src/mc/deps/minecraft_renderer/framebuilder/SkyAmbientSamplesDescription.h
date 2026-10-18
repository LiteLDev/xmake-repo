#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/SkyAmbientSamples.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct SkyAmbientSamplesDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                                  mViewId;
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::gamecomponents::SkyAmbientSamples> mSkyAmbientSamples;
    // NOLINTEND
};
#else // @header-generator platform
struct SkyAmbientSamplesDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
