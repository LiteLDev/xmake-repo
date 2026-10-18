#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct LocalMoveVelocityComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct MobIsImmobileFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct MobIsJumpingFlagComponent;
struct MobRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ImmobileSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doImmobileSystem(
        ::StrictEntityContext const&,
        ::LocalMoveVelocityComponent&,
        ::MobRotationComponent&,
        ::StateVectorComponent&,
        ::EntityModifier<MobIsJumpingFlagComponent>
#else // @header-generator platform
    MCAPI static void doImmobileSystem(
        ::StrictEntityContext const&                  context,
        ::LocalMoveVelocityComponent&                 localMoveVelocityComponent,
        ::MobRotationComponent&                       mobRotationComponent,
        ::StateVectorComponent&                       stateVectorComponent,
        ::EntityModifier<::MobIsJumpingFlagComponent> mod
#endif // @header-generator platform
    );
    // NOLINTEND
};
