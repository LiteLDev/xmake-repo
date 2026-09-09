#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class StrictEntityContext;
class SynchedActorDataWriter;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataSeatOffsetComponent;
struct SeatDescription;
struct VehicleComponent;
// clang-format on

struct SeatDescriptionUtility {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(std::vector<SeatDescription> const&, int, int);

    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(
        std::vector<SeatDescription> const&,
        ::VehicleComponent const&,
        ::StrictEntityContext const&
    );

    MCNAPI static float getSeatRidingHeightOffset(float, float, float);

    MCNAPI static void setValuesToSynchedActorData(
        ::ActorDataSeatOffsetComponent&,
        ::ActorDataDirtyFlagsComponent&,
        ::SynchedActorDataWriter,
        ::Vec3 const&,
        ::SeatDescription const&,
        float
    );
    // NOLINTEND
};
