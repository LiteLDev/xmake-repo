#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class LocalPlayerUpdatePositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createLocalPlayerUpdatePositionSystem();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class LocalPlayerUpdatePositionSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createLocalPlayerUpdatePositionSystem();
    // NOLINTEND
};
#else // @header-generator platform
class LocalPlayerUpdatePositionSystem {};
#endif // @header-generator platform
#endif // @header-generator platform
