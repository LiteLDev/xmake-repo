#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class StrictEntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class SynchedActorDataWriter;
class Vec3;
struct ActorDataDirtyFlagsComponent;
struct ActorDataSeatOffsetComponent;
struct SeatDescription;
#if defined(LL_PLAT_A) // @header-generator platform
struct VehicleComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct SeatDescriptionUtility {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(std::vector<SeatDescription> const&, int, int);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::SeatDescription const& getSeatDescriptionOfPassenger(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<SeatDescription> const&,
        ::VehicleComponent const&,
        ::StrictEntityContext const&
#else // @header-generator platform
        ::std::vector<::SeatDescription> const& seats,
        int                                     passengerCount,
        int                                     passengerIndex
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float getSeatRidingHeightOffset(float, float, float);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static void setValuesToSynchedActorData(
#if defined(LL_PLAT_A) // @header-generator platform
        ::ActorDataSeatOffsetComponent&,
        ::ActorDataDirtyFlagsComponent&,
        ::SynchedActorDataWriter,
        ::Vec3 const&,
        ::SeatDescription const&,
        float
#else // @header-generator platform
        ::ActorDataSeatOffsetComponent& seatOffsetComponent,
        ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent,
        ::SynchedActorDataWriter        synchedActorData,
        ::Vec3 const&                   offset,
        ::SeatDescription const&        seat,
        float                           seatRotation
#endif // @header-generator platform
    );
    // NOLINTEND
};
