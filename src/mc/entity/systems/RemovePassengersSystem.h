#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct RemovePassengersSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createRemovePassengersSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createRemovePassengersSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createVehicleRemovePassengersSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createVehicleRemovePassengersSystem();
#endif // @header-generator platform
    // NOLINTEND
};
