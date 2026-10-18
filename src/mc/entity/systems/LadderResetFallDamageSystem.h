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
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct CanStandOnSnowFlagComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct InterpolateMovementNeededComponent;
struct MobFlagComponent;
struct StateVectorComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
// clang-format on

class LadderResetFallDamageSystem {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // LadderResetFallDamageSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::MobFlagComponent>,
        ::AABBShapeComponent const,
        ::StateVectorComponent const,
        ::ActorDataFlagComponent const,
        ::FallDistanceComponent,
        ::Optional<::CanStandOnSnowFlagComponent const>,
        ::Optional<::HasLightweightFamilyFlagComponent const>>;

public:
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createLadderResetFallDamageSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createLadderResetFallDamageSystem();
#endif // @header-generator platform
    // NOLINTEND
};
