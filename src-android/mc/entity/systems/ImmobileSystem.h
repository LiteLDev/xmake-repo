#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct LocalMoveVelocityComponent;
struct MobIsImmobileFlagComponent;
struct MobIsJumpingFlagComponent;
struct MobRotationComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class ImmobileSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doImmobileSystem(
        ::StrictEntityContext const&,
        ::LocalMoveVelocityComponent&,
        ::MobRotationComponent&,
        ::StateVectorComponent&,
        ::EntityModifier<MobIsJumpingFlagComponent>
    );
    // NOLINTEND
};
