#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct MovementTickResetTemporaryComponentsSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
#else // @header-generator platform
struct MovementTickResetTemporaryComponentsSystem {};
#endif // @header-generator platform
