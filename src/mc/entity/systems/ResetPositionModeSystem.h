#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct InterpolateMovementNeededComponent;
struct PlayerPositionModeComponent;
struct TickingSystemWithInfo;
// clang-format on

class ResetPositionModeSystem {
public:
    // ResetPositionModeSystem inner types define
    using ViewType =
#if defined(LL_PLAT_A) // @header-generator platform
        ::ViewT<StrictEntityContext, Include<InterpolateMovementNeededComponent>, PlayerPositionModeComponent>;
#else // @header-generator platform
        ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::PlayerPositionModeComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createResetPositionModeSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createResetPositionModeSystem();
#endif // @header-generator platform
    // NOLINTEND
};
