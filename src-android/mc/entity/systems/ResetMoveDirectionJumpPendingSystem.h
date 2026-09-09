#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct JumpPendingScaleComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobTravelComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class ResetMoveDirectionJumpPendingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();
    // NOLINTEND
};
