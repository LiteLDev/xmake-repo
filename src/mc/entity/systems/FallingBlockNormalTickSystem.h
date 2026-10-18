#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ITickDelegate;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct FallingBlockFlagComponent;
struct InterpolateMovementNeededComponent;
struct TickingSystemWithInfo;
// clang-format on

class FallingBlockNormalTickSystem {
public:
    // FallingBlockNormalTickSystem inner types define
    using SystemView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, FallingBlockFlagComponent>,
        ActorOwnerComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::FallingBlockFlagComponent>,
        ::ActorOwnerComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static void _doFallingBlockNormalTickSystem(
        ::StrictEntityContext const&,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::ITickDelegate&       onLand
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
