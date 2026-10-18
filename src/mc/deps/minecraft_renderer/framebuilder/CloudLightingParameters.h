#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct CloudLightingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCloudTransmissionDepthMax;
    ::ll::TypedStorage<4, 4, float> mCloudHenyeyGreensteinG;
    ::ll::TypedStorage<4, 4, float> mCloudIndirectSpecularMultiplier;
    ::ll::TypedStorage<4, 4, float> mCloudExtinctionCoefficient;
    ::ll::TypedStorage<1, 1, bool>  mCloudToggleDiffuseLighting;
    ::ll::TypedStorage<1, 1, bool>  mCloudToggleScattering;
    ::ll::TypedStorage<1, 1, bool>  mCloudLightingEnabled;
    // NOLINTEND
};
#else // @header-generator platform
struct CloudLightingParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
