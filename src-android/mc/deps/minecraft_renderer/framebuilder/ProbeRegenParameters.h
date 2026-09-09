#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/minecraft_renderer/framebuilder/ProbeMetadataDeltaTriggers.h"

namespace mce::framebuilder {

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

} // namespace mce::framebuilder
