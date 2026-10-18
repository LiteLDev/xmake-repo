#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct StrictActorIDEntityContextPair;
// clang-format on
#endif // @header-generator platform

struct VehicleComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<StrictActorIDEntityContextPair>> mPassengers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::StrictActorIDEntityContextPair>> mPassengers;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    VehicleComponent& operator=(VehicleComponent const&);
#else // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCAPI ~VehicleComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
