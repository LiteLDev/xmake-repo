#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Keyframes.h"

struct FogVolumetricHenyeyGreensteinGSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Keyframes<float, float>> mHenyeyGreensteinG;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogVolumetricHenyeyGreensteinGSetting const& ZERO_SETTING();
    // NOLINTEND
};
#else // @header-generator platform
struct FogVolumetricHenyeyGreensteinGSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
