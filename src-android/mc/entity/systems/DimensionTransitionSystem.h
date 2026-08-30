#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ChangeDimensionRequest;
class DimensionStateComponent;
class Player;
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct DimensionTransitionComponent;
struct ExitFromPassengerFlagComponent;
struct PassengerComponent;
struct PlayerChangeDimensionRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class DimensionTransitionSystem {
public:
    // DimensionTransitionSystem inner types define
    using DimensionRequestHandler = std::function<bool(Player&, ChangeDimensionRequest&)>;

    using IsSuspended = std::function<bool(Player&)>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createPortalTransition();

    MCNAPI static ::TickingSystemWithInfo createReadyToContinueClient();

    MCNAPI static ::TickingSystemWithInfo createReadyToContinueServer();

    MCNAPI static ::TickingSystemWithInfo createVehicleDismount();

    MCNAPI static void
    removeChangeDimensionRequest(::StrictEntityContext const&, ::EntityModifier<PlayerChangeDimensionRequestComponent>);

    MCNAPI static void requestPlayerChangeDimension(
        ::StrictEntityContext const&,
        ::ChangeDimensionRequest&&,
        ::ViewT<StrictEntityContext, DimensionStateComponent, StateVectorComponent>,
        ::EntityModifier<PlayerChangeDimensionRequestComponent>
    );

    MCNAPI static bool shouldLevelWaitForSystem(
        ::StrictEntityContext const&,
        ::ViewT<StrictEntityContext, const PlayerChangeDimensionRequestComponent>
    );

    MCNAPI static void tryHandleChangeDimensionRequestLevel(
        ::ViewT<
            StrictEntityContext,
            Include<PlayerComponent>,
            PlayerChangeDimensionRequestComponent,
            ActorOwnerComponent>,
        ::EntityModifier<PlayerChangeDimensionRequestComponent>,
        std::function<bool(Player&, ChangeDimensionRequest&)> const&,
        std::function<bool(Player&)> const&
    );
    // NOLINTEND
};
