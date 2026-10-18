#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct SkyboxParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAmbientLightIlluminance;
    ::ll::TypedStorage<4, 4, float> mSkyAmbientLightContribution;
    ::ll::TypedStorage<4, 4, float> mDirectionalLightContribution;
    ::ll::TypedStorage<1, 1, bool>  mAtmosphericScatteringEnabled;
    ::ll::TypedStorage<1, 1, bool>  mVolumetricScatteringEnabled;
    // NOLINTEND
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
