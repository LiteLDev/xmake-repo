#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"
#include "mc/client/world/level/fog/FogTransitionSetting.h"

struct FogSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting>   mDistanceSetting;
    ::ll::TypedStorage<4, 44, ::FogTransitionSetting> mTransitionSetting;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogSetting(std::optional<FogDistanceSetting>&&, std::optional<FogTransitionSetting>&&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FogSetting const& ZERO_SETTING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::optional<FogDistanceSetting>&&, std::optional<FogTransitionSetting>&&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/level/fog/FogDistanceSetting.h"
#include "mc/client/world/level/fog/FogTransitionSetting.h"

struct FogSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::FogDistanceSetting>   mDistanceSetting;
    ::ll::TypedStorage<4, 44, ::FogTransitionSetting> mTransitionSetting;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::FogSetting const& ZERO_SETTING();
    // NOLINTEND
};
#else // @header-generator platform
struct FogSetting {};
#endif // @header-generator platform
#endif // @header-generator platform
