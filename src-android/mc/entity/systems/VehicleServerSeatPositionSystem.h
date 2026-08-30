#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct AdultRidingHeightOffsetComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
struct RidingHeightComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerSeatPositionSystem {
public:
    // VehicleServerSeatPositionSystem inner types define
    using PassengerView = ::ViewT<
        StrictEntityContext,
        const PassengerComponent,
        const PositionPassengerRequestComponent,
        const OffsetsComponent,
        ActorDataFlagComponent,
        ActorDataSeatOffsetComponent,
        ActorDataDirtyFlagsComponent,
        SynchedActorDataComponent>;

    using VehicleView = ::ViewT<
        StrictEntityContext,
        const VehicleComponent,
        const ActorDataBoundingBoxComponent,
        const RideableComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
