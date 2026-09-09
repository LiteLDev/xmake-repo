#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ResolvedFogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ResolvedFogVolumetricHenyeyGreensteinGSetting const& ZERO_SETTING();
    // NOLINTEND
};
