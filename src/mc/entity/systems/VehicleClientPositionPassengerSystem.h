#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct PassengerYRotLimitComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct SynchedActorDataComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

struct VehicleClientPositionPassengerSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSetPositionRequestSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSetPositionRequestSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSetPreviousPosRotSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSetPreviousPosRotSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSetRotationLock();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSetRotationLock();
#endif // @header-generator platform
    // NOLINTEND
};
