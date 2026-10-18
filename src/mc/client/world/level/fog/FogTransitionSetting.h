#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"

struct FogTransitionSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting> mInitialFog;
    ::ll::TypedStorage<4, 4, float>                 mMinTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionSeconds;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMaxTransitionSeconds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::FogTransitionSetting convertToFixedDistance(::FogTransitionSetting const&, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogTransitionSetting const& ZERO_SETTING();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"

struct FogTransitionSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting> mInitialFog;
    ::ll::TypedStorage<4, 4, float>                 mMinTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionSeconds;
    ::ll::TypedStorage<4, 4, float>                 mMidTransitionPercentage;
    ::ll::TypedStorage<4, 4, float>                 mMaxTransitionSeconds;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogTransitionSetting const& ZERO_SETTING();
    // NOLINTEND
};
#else // @header-generator platform
struct FogTransitionSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
