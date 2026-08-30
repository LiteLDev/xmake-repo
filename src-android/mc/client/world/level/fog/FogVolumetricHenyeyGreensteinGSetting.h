#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FogVolumetricHenyeyGreensteinGSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogVolumetricHenyeyGreensteinGSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
