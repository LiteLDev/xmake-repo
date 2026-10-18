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
class ChangeDimensionRequest;
class DimensionStateComponent;
class Player;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct DimensionTransitionComponent;
struct ExitFromPassengerFlagComponent;
struct PassengerComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerChangeDimensionRequestComponent;
struct PlayerComponent;
struct StateVectorComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct StopRidingRequestComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct VehicleComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DimensionTransitionSystem {
public:
    // DimensionTransitionSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using DimensionRequestHandler = std::function<bool(Player&, ChangeDimensionRequest&)>;
#else // @header-generator platform
    using DimensionRequestHandler = ::std::function<bool(::Player&, ::ChangeDimensionRequest&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using IsSuspended = std::function<bool(Player&)>;
#else // @header-generator platform
    using IsSuspended = ::std::function<bool(::Player&)>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createPortalTransition();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createPortalTransition();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createReadyToContinueClient();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::TickingSystemWithInfo createReadyToContinueClient();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createReadyToContinueServer();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createReadyToContinueServer();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createVehicleDismount();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createVehicleDismount();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    removeChangeDimensionRequest(::StrictEntityContext const&, ::EntityModifier<PlayerChangeDimensionRequestComponent>);

    MCNAPI static void requestPlayerChangeDimension(
        ::StrictEntityContext const&,
        ::ChangeDimensionRequest&&,
        ::ViewT<StrictEntityContext, DimensionStateComponent, StateVectorComponent>,
        ::EntityModifier<PlayerChangeDimensionRequestComponent>
#else // @header-generator platform
    MCAPI static void requestPlayerChangeDimension(
        ::StrictEntityContext const&                                                      player,
        ::ChangeDimensionRequest&&                                                        request,
        ::ViewT<::StrictEntityContext, ::DimensionStateComponent, ::StateVectorComponent> playerData,
        ::EntityModifier<::PlayerChangeDimensionRequestComponent>                         modifier
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool shouldLevelWaitForSystem(
        ::StrictEntityContext const&,
        ::ViewT<StrictEntityContext, const PlayerChangeDimensionRequestComponent>
    );

    MCNAPI static void tryHandleChangeDimensionRequestLevel(
#else // @header-generator platform
    MCAPI static void tryHandleChangeDimensionRequestLevel(
#endif // @header-generator platform
        ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
            StrictEntityContext,
            Include<PlayerComponent>,
            PlayerChangeDimensionRequestComponent,
            ActorOwnerComponent>,
        ::EntityModifier<PlayerChangeDimensionRequestComponent>,
        std::function<bool(Player&, ChangeDimensionRequest&)> const&,
        std::function<bool(Player&)> const&
#else // @header-generator platform
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::PlayerChangeDimensionRequestComponent,
            ::ActorOwnerComponent>                                         requests,
        ::EntityModifier<::PlayerChangeDimensionRequestComponent>          modifier,
        ::std::function<bool(::Player&, ::ChangeDimensionRequest&)> const& callback,
        ::std::function<bool(::Player&)> const&                            isSuspended
#endif // @header-generator platform
    );
    // NOLINTEND
};
