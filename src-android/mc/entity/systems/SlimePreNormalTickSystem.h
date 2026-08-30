#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct InterpolateMovementNeededComponent;
struct OnGroundFlagComponent;
struct SlimeFlagComponent;
struct SlimeWasOnGroundPreNormalTickComponent;
struct TickingSystemWithInfo;
// clang-format on

class SlimePreNormalTickSystem {
public:
    // SlimePreNormalTickSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, SlimeFlagComponent>,
        ActorOwnerComponent,
        Optional<const OnGroundFlagComponent>>;

    using ModType = ::EntityModifier<SlimeWasOnGroundPreNormalTickComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doSlimePreNormalTickSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::Optional<const OnGroundFlagComponent>,
        ::EntityModifier<SlimeWasOnGroundPreNormalTickComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
