#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct VolumetricFog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>         mFogMaxDensity;
    ::ll::TypedStorage<4, 4, float>         mFogMaxDensityHeight;
    ::ll::TypedStorage<4, 4, float>         mFogZeroDensityHeight;
    ::ll::TypedStorage<4, 16, ::mce::Color> mAirScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color> mAirAbsorption;
    ::ll::TypedStorage<4, 4, float>         mAirHenyeyGreensteinG;
    ::ll::TypedStorage<4, 16, ::mce::Color> mWaterScattering;
    ::ll::TypedStorage<4, 16, ::mce::Color> mWaterAbsorption;
    ::ll::TypedStorage<4, 4, float>         mWaterHenyeyGreensteinG;
    ::ll::TypedStorage<1, 1, bool>          mIsUnderWater;
    // NOLINTEND
};
#else // @header-generator platform
struct VolumetricFog {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents
