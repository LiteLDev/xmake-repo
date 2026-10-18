#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

#if defined(LL_PLAT_A) // @header-generator platform
struct VolumeScatteringParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mTileWidth;
    ::ll::TypedStorage<4, 4, int>                                    mTileHeight;
    ::ll::TypedStorage<4, 4, int>                                    mDepthSlices;
    ::ll::TypedStorage<4, 4, float>                                  mNearPlane;
    ::ll::TypedStorage<4, 4, float>                                  mFarPlane;
    ::ll::TypedStorage<4, 4, int>                                    jitterSampleCount;
    ::ll::TypedStorage<1, 1, bool>                                   mTemporalEnabled;
    ::ll::TypedStorage<1, 1, bool>                                   mPointLightVolumetricsEnabled;
    ::ll::TypedStorage<4, 4, float>                                  mHistoryWeight;
    ::ll::TypedStorage<4, 4, float>                                  mFrustumBoundaryFalloff;
    ::ll::TypedStorage<1, 1, bool>                                   mEnableAmbientSamples;
    ::ll::TypedStorage<1, 1, bool>                                   mEnableLinearFiltering;
    ::ll::TypedStorage<4, 4, float>                                  mAmbientBufferBias;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>> mAmbientBufferSize;
    ::ll::TypedStorage<4, 4, float>                                  mPCFScale;
    ::ll::TypedStorage<4, 4, float>                                  mWaterSurfaceBias;
    ::ll::TypedStorage<4, 4, float>                                  mWaterSurfaceFalloff;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeScatteringParameters& operator=(VolumeScatteringParameters const&);
};
#else // @header-generator platform
struct VolumeScatteringParameters {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::modules
