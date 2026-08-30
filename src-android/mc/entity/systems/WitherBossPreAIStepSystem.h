#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
struct WitherBossFlagComponent;
struct WitherBossPreAIStepResultComponent;
// clang-format on

class WitherBossPreAIStepSystem {
public:
    // WitherBossPreAIStepSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, WitherBossFlagComponent>,
        ActorOwnerComponent>;

    using ModType = ::EntityModifier<WitherBossPreAIStepResultComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doWitherBossPreAIStepSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<WitherBossPreAIStepResultComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
