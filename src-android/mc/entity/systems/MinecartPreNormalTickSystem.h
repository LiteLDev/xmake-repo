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
struct MinecartFlagComponent;
struct MinecartPreNormalTickBlockPosComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartPreNormalTickSystem {
public:
    // MinecartPreNormalTickSystem inner types define
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, MinecartFlagComponent>,
        ActorOwnerComponent>;

    using ModType = ::EntityModifier<MinecartPreNormalTickBlockPosComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doMinecartPreNormalTickSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<MinecartPreNormalTickBlockPosComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
