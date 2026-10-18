#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
struct WitherBossFlagComponent;
struct WitherBossPreAIStepResultComponent;
// clang-format on

class WitherBossPreAIStepSystem {
public:
    // WitherBossPreAIStepSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, WitherBossFlagComponent>,
        ActorOwnerComponent>;
#else // @header-generator platform
    using ModType = ::EntityModifier<::WitherBossPreAIStepResultComponent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ModType = ::EntityModifier<WitherBossPreAIStepResultComponent>;
#else // @header-generator platform
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::WitherBossFlagComponent>,
        ::ActorOwnerComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _doWitherBossPreAIStepSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<WitherBossPreAIStepResultComponent>
#else // @header-generator platform
    MCAPI static void _doWitherBossPreAIStepSystem(
        ::StrictEntityContext&                                 context,
        ::ActorOwnerComponent&                                 actorOwnerComponent,
        ::EntityModifier<::WitherBossPreAIStepResultComponent> mod
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
