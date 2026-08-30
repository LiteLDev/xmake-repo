#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct PassengerYRotLimitComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
// clang-format on

struct VehicleClientPositionPassengerSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSetPositionRequestSystem();

    MCNAPI static ::TickingSystemWithInfo createSetPreviousPosRotSystem();

    MCNAPI static ::TickingSystemWithInfo createSetRotationLock();
    // NOLINTEND
};
