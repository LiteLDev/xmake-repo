#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct ServerPlayerCurrentMovementComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class SendPlayerAuthInputReceivedEventSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    _doSendPlayerAuthInputReceivedEvent(::StrictEntityContext&, ::PlayerComponent const&, ::ActorOwnerComponent&);
#else // @header-generator platform
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(
        ::StrictEntityContext&,
        ::PlayerComponent const& playerComponent,
        ::ActorOwnerComponent&   actorOwnerComponent
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo create();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo create();
#endif // @header-generator platform
    // NOLINTEND
};
