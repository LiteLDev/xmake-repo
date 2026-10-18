#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/minecraft_renderer/framebuilder/ProbeMetadataDeltaTriggers.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct ProbeRegenParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::mce::framebuilder::ProbeMetadataDeltaTriggers> mMetadataDeltas;
    ::ll::TypedStorage<4, 4, float>                                            mFarPlaneScalingFactor;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                             mEnvironmentCaptureTextureFormat;
    ::ll::TypedStorage<4, 4, float>                                            mSkyProbeUVFadeStart;
    ::ll::TypedStorage<4, 4, float>                                            mSkyProbeUVFadeEnd;
    ::ll::TypedStorage<4, 4, float>                                            mSkyProbeMinColorMultiplier;
    ::ll::TypedStorage<1, 1, bool>                                             mClampViewVectors;
    // NOLINTEND
};
#else // @header-generator platform
struct ProbeRegenParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
