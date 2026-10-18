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
struct ActorDataFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct FallFlyTicksComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerInputRequestComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class GlideInputSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createGlideInputSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createGlideInputSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doGlideInputSystem(
        ::MovementAbilitiesComponent const&,
        ::MoveInputComponent const&,
        ::ActorDataFlagComponent const&,
        ::FallFlyTicksComponent&,
        ::StateVectorComponent&
#else // @header-generator platform
    MCAPI static void doGlideInputSystem(
        ::MovementAbilitiesComponent const& abilitiesComponent,
        ::MoveInputComponent const&         moveInputComponent,
        ::ActorDataFlagComponent const&     synchedActorDataComponent,
        ::FallFlyTicksComponent&            fallFlyTicksComponent,
        ::StateVectorComponent&             stateVectorComponent
#endif // @header-generator platform
    );
    // NOLINTEND
};
