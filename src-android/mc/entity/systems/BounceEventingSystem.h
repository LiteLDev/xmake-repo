#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct BounceComponent;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class BounceEventingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doBounceEventingSystem(
        ::StrictEntityContext const&,
        ::StateVectorComponent const&,
        ::ActorUniqueIDComponent const&,
        ::EventingDispatcherComponent const&,
        ::BounceComponent&,
        ::ViewT<StrictEntityContext, EventingRequestQueueComponent>
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
