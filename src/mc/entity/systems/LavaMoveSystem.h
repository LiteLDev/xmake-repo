#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class NavigationComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CanStandOnSnowFlagComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct LavaTravelFlagComponent;
struct MobTravelComponent;
struct StateVectorComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class LavaMoveSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // LavaMoveSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::LavaTravelFlagComponent>,
        ::Optional<::NavigationComponent const>,
        ::AABBShapeComponent const,
        ::ActorRotationComponent const,
        ::ActorDataFlagComponent const,
        ::FallDistanceComponent,
        ::MobTravelComponent,
        ::StateVectorComponent,
        ::Optional<::CanStandOnSnowFlagComponent const>,
        ::Optional<::HasLightweightFamilyFlagComponent const>>;

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createLavaMoveSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createLavaMoveSystem();
#endif // @header-generator platform
    // NOLINTEND
};
