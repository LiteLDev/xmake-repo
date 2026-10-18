#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class StrictEntityContext;
struct ActorRotationComponent;
struct PrevPosRotSetThisTickFlagComponent;
struct StateVectorComponent;
// clang-format on

struct SetPreviousPosRotSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _setPreviousPosRot(
        ::StrictEntityContext&,
        ::StateVectorComponent&,
        ::ActorRotationComponent&,
        ::EntityModifier<PrevPosRotSetThisTickFlagComponent>
#else // @header-generator platform
    MCAPI static void _setPreviousPosRot(
        ::StrictEntityContext&                                 entity,
        ::StateVectorComponent&                                stateVectorComponent,
        ::ActorRotationComponent&                              actorRotationComponent,
        ::EntityModifier<::PrevPosRotSetThisTickFlagComponent> modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _setPreviousPosRotSystem(::EntityContext const&);
#else // @header-generator platform
    MCAPI static void _setPreviousPosRotSystem(::EntityContext const& entity);
#endif // @header-generator platform
    // NOLINTEND
};
