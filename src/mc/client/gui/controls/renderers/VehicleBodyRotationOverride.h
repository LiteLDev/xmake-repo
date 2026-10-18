#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VehicleBodyRotationOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob*> mVehicleMob;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRot;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRotO;
    // NOLINTEND

public:
    // prevent constructor by default
    VehicleBodyRotationOverride();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VehicleBodyRotationOverride(::Mob const&, float, float);

    MCNAPI ~VehicleBodyRotationOverride();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob const&, float, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class VehicleBodyRotationOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob*> mVehicleMob;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRot;
    ::ll::TypedStorage<4, 4, float>  mSavedYBodyRotO;
    // NOLINTEND
};
#else // @header-generator platform
class VehicleBodyRotationOverride {};
#endif // @header-generator platform
#endif // @header-generator platform
