#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct LocalMoveVelocityComponent;
struct MoveInputComponent;
struct PlayerInputModeComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerInputRequestComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct RotateAndSetVelocitySystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void doTick(
        ::MoveInputComponent const& input,
        ::PlayerInputModeComponent const&,
        ::LocalMoveVelocityComponent& localVelocity
    );
#endif // @header-generator platform
    // NOLINTEND
};
