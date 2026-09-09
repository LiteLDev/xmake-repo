#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorMovementTickNeededComponent;
struct PlayerComponent;
struct ServerPlayerCurrentMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

class SendPlayerAuthInputReceivedEventSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _doSendPlayerAuthInputReceivedEvent(::StrictEntityContext&, ::PlayerComponent const&, ::ActorOwnerComponent&);

    MCNAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
