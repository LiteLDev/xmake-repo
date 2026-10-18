#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct ActorMovementTickFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo addInterpolationNeededComponent(bool);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo addInterpolationNeededComponent(bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createBase();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createBase();
#endif // @header-generator platform
    // NOLINTEND
};
