#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorUniqueIDComponent;
struct BounceComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class BounceEventingSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _doBounceEventingSystem(
#else // @header-generator platform
    MCAPI static void _doBounceEventingSystem(
#endif // @header-generator platform
        ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::StateVectorComponent const&,
        ::ActorUniqueIDComponent const&,
        ::EventingDispatcherComponent const&,
        ::BounceComponent&,
        ::ViewT<StrictEntityContext, EventingRequestQueueComponent>
#else // @header-generator platform
        ::StateVectorComponent const&                                   stateVectorComponent,
        ::ActorUniqueIDComponent const&                                 actorUniqueIDComponent,
        ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
        ::BounceComponent&                                              bounceComponent,
        ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
