#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct SetActorLinkPacketSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPassengerSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPassengerSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createVehicleSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createVehicleSystem();
#endif // @header-generator platform
    // NOLINTEND
};
