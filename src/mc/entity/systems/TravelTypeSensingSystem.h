#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
#endif // @header-generator platform
struct AirTravelFlagComponent;
struct GlidingTravelFlagComponent;
struct GroundTravelFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ImmuneToLavaDragComponent;
#endif // @header-generator platform
struct LavaTravelFlagComponent;
struct LiquidTravelFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MobTravelComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
#endif // @header-generator platform
struct PlayerFlyingTravelComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SubBBsComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct WasInWaterFlagComponent;
#endif // @header-generator platform
struct WaterTravelFlagComponent;
// clang-format on

struct TravelTypeSensingSystem {
public:
    // TravelTypeSensingSystem inner types define
    using ModType = ::EntityModifier<
#if defined(LL_PLAT_A) // @header-generator platform
        AirTravelFlagComponent,
        GlidingTravelFlagComponent,
        GroundTravelFlagComponent,
        LavaTravelFlagComponent,
        WaterTravelFlagComponent,
        PlayerFlyingTravelComponent,
        LiquidTravelFlagComponent>;
#else // @header-generator platform
        ::AirTravelFlagComponent,
        ::GlidingTravelFlagComponent,
        ::GroundTravelFlagComponent,
        ::LavaTravelFlagComponent,
        ::WaterTravelFlagComponent,
        ::PlayerFlyingTravelComponent,
        ::LiquidTravelFlagComponent>;

    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobTravelComponent>,
        ::Optional<::MovementAbilitiesComponent const>,
        ::Optional<::WasInWaterFlagComponent const>,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::ImmuneToLavaDragComponent const>,
        ::AABBShapeComponent const,
        ::SubBBsComponent const,
        ::ActorDataFlagComponent const>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createTravelTypeSensingSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createTravelTypeSensingSystem();
#endif // @header-generator platform
    // NOLINTEND
};
