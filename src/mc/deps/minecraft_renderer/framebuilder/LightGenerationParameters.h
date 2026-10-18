#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct LightGenerationParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mDirectionalLightPerpendicularAngleDegrees;
    ::ll::TypedStorage<4, 4, float>                                    mDirectionalLightAzimuthAngleDegrees;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mDirectionToPrimaryLightSource;
    ::ll::TypedStorage<1, 1, bool>                                     mOverridePrimaryLightDirection;
    // NOLINTEND

public:
    // prevent constructor by default
    LightGenerationParameters& operator=(LightGenerationParameters const&);
};
#else // @header-generator platform
struct LightGenerationParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder
