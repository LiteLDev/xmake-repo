#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowCasterType.h"
#include "mc/deps/minecraft_renderer/framebuilder/ShadowRange.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct PerCascadeParameters; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShadowParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                 mNormalOffsetStrength;
    ::ll::TypedStorage<4, 4, int>                                   mNumVariableCascadeLevels;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::ShadowRange>      mShadowRange;
    ::ll::TypedStorage<4, 4, int>                                   mShadowChunkRadius;
    ::ll::TypedStorage<4, 4, float>                                 mMaxShadowDistance;
    ::ll::TypedStorage<4, 4, float>                                 mMaxShadowFrustumRadius;
    ::ll::TypedStorage<4, 4, float>                                 mMaxPlayerShadowDistance;
    ::ll::TypedStorage<4, 4, float>                                 mCloudPCFWidth;
    ::ll::TypedStorage<4, 4, float>                                 mShadowClampAngle;
    ::ll::TypedStorage<4, 4, float>                                 mCloudShadowContribution;
    ::ll::TypedStorage<4, 4, int>                                   mCloudQuantizationSteps;
    ::ll::TypedStorage<1, 1, bool>                                  mSunShadows;
    ::ll::TypedStorage<1, 1, bool>                                  mMoonShadows;
    ::ll::TypedStorage<1, 1, bool>                                  mCloudShadows;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::ShadowCasterType> mItemShadowsType;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::ShadowCasterType> mThirdPersonItemInHandShadowsType;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::ShadowCasterType> mActorShadowsType;
    ::ll::TypedStorage<4, 4, int>                                   mPlayerShadowMapResolution;
    ::ll::TypedStorage<4, 4, float>                                 mMaxWorldTexelSnappingPosition;
    ::ll::TypedStorage<1, 1, bool>                                  mDirectionalLightDynamicShadow;
    bool                                                            mDebugFreezeSunMoonShadowUpdate : 1;
    bool                                                            mDebugFreezePlayerShadowUpdate  : 1;
    bool                                                            mDebugFreezeCloudShadowUpdate   : 1;
    bool                                                            mDebugFreezeWaterDepthUpdate    : 1;
    ::ll::TypedStorage<4, 4, float>                                 mPointLightNdLFloor;
    ::ll::UntypedStorage<8, 1320>                                   mCascadeSets;
    // NOLINTEND
};
#else // @header-generator platform
struct ShadowParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
