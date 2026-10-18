#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct JumpRidingScaleComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerInputRequestComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
// clang-format on

class ResetJumpRidingScaleSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void _doResetJumpRidingScaleSystem(
        ::StrictEntityContext const&,
        ::JumpRidingScaleComponent&       jumpRidingScaleComponent,
        ::VanillaClientGameplayComponent& vanillaClientGameplayComponent
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
