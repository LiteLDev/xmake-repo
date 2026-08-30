#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/OptionalComponentWrapper.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
template<typename... T0> class Include;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
struct PassengersToPositionComponent;
struct PlayerComponent;
struct PositionPassengerRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerPositionPassengerSystem {
public:
    // VehicleServerPositionPassengerSystem inner types define
    using PositionPassengerView = ::ViewT<
        StrictEntityContext,
        Include<PassengerComponent, PositionPassengerRequestComponent>,
        const ActorDataSeatOffsetComponent>;

    using RotateMobPassengerView = ::ViewT<
        StrictEntityContext,
        Include<PassengerComponent, MobFlagComponent>,
        const ActorHeadRotationComponent,
        const PositionPassengerRequestComponent,
        const SynchedActorDataComponent,
        ActorRotationComponent,
        MobBodyRotationComponent,
        PassengerYRotLimitComponent,
        Optional<const PlayerComponent>>;

    using VehicleView = ::ViewT<
        StrictEntityContext,
        Include<VehicleComponent>,
        const ActorRotationComponent,
        const StateVectorComponent,
        Optional<const ActorSetPositionRequestComponent>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
