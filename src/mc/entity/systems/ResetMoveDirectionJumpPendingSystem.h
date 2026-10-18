#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class StrictEntityContext;
template<typename... T0> class Exclude;
template<typename... T0> class Include;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct JumpPendingScaleComponent;
struct MobAllowStandSlidingFlagComponent;
struct MobTravelComponent;
struct OnGroundFlagComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct VehicleComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ResetMoveDirectionJumpPendingSystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createResetMoveDirectionJumpPendingSystem();
#endif // @header-generator platform
    // NOLINTEND
};
