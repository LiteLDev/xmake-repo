#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/ColorNormRGB.h"

struct ResolvedFogVolumetricCoefficientSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mScattering;
    ::ll::TypedStorage<4, 16, ::SharedTypes::ColorNormRGB> mAbsorption;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ResolvedFogVolumetricCoefficientSetting const& ZERO_SETTING();
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedFogVolumetricCoefficientSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
