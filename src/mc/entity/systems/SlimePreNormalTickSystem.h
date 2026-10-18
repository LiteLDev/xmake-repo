#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
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
struct OnGroundFlagComponent;
struct SlimeFlagComponent;
struct SlimeWasOnGroundPreNormalTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class SlimePreNormalTickSystem {
public:
    // SlimePreNormalTickSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, SlimeFlagComponent>,
        ActorOwnerComponent,
        Optional<const OnGroundFlagComponent>>;
#else // @header-generator platform
    using ModType = ::EntityModifier<::SlimeWasOnGroundPreNormalTickComponent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ModType = ::EntityModifier<SlimeWasOnGroundPreNormalTickComponent>;
#else // @header-generator platform
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::SlimeFlagComponent>,
        ::ActorOwnerComponent,
        ::Optional<::OnGroundFlagComponent const>>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _doSlimePreNormalTickSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::Optional<const OnGroundFlagComponent>,
        ::EntityModifier<SlimeWasOnGroundPreNormalTickComponent>
#else // @header-generator platform
    MCAPI static void _doSlimePreNormalTickSystem(
        ::StrictEntityContext&                                     context,
        ::ActorOwnerComponent&                                     actorOwnerComponent,
        ::Optional<::OnGroundFlagComponent const>                  onGround,
        ::EntityModifier<::SlimeWasOnGroundPreNormalTickComponent> mod
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
