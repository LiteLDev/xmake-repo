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
#if defined(LL_PLAT_A) // @header-generator platform
struct AdultRidingHeightOffsetComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct OffsetsComponent;
struct PassengerComponent;
struct PositionPassengerRequestComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct RidingHeightComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerSeatPositionSystem {
public:
    // VehicleServerSeatPositionSystem inner types define
    using PassengerView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        const PassengerComponent,
        const PositionPassengerRequestComponent,
        const OffsetsComponent,
        ActorDataFlagComponent,
        ActorDataSeatOffsetComponent,
        ActorDataDirtyFlagsComponent,
        SynchedActorDataComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::PassengerComponent const,
        ::PositionPassengerRequestComponent const,
        ::OffsetsComponent const,
        ::ActorDataFlagComponent,
        ::ActorDataSeatOffsetComponent,
        ::ActorDataDirtyFlagsComponent,
        ::SynchedActorDataComponent>;
#endif // @header-generator platform

    using VehicleView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        const VehicleComponent,
        const ActorDataBoundingBoxComponent,
        const RideableComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::VehicleComponent const,
        ::ActorDataBoundingBoxComponent const,
        ::RideableComponent const>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
