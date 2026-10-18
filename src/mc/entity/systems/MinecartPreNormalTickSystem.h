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
struct MinecartFlagComponent;
struct MinecartPreNormalTickBlockPosComponent;
struct TickingSystemWithInfo;
// clang-format on

class MinecartPreNormalTickSystem {
public:
    // MinecartPreNormalTickSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ViewType = ::ViewT<
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, MinecartFlagComponent>,
        ActorOwnerComponent>;
#else // @header-generator platform
    using ModType = ::EntityModifier<::MinecartPreNormalTickBlockPosComponent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ModType = ::EntityModifier<MinecartPreNormalTickBlockPosComponent>;
#else // @header-generator platform
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::MinecartFlagComponent>,
        ::ActorOwnerComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _doMinecartPreNormalTickSystem(
        ::StrictEntityContext&,
        ::ActorOwnerComponent&,
        ::EntityModifier<MinecartPreNormalTickBlockPosComponent>
#else // @header-generator platform
    MCAPI static void _doMinecartPreNormalTickSystem(
        ::StrictEntityContext&                                     context,
        ::ActorOwnerComponent&                                     actorOwnerComponent,
        ::EntityModifier<::MinecartPreNormalTickBlockPosComponent> mod
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
