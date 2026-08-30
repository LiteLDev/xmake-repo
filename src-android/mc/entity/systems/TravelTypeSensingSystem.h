#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
struct AirTravelFlagComponent;
struct GlidingTravelFlagComponent;
struct GroundTravelFlagComponent;
struct LavaTravelFlagComponent;
struct LiquidTravelFlagComponent;
struct PlayerFlyingTravelComponent;
struct TickingSystemWithInfo;
struct WaterTravelFlagComponent;
// clang-format on

struct TravelTypeSensingSystem {
public:
    // TravelTypeSensingSystem inner types define
    using ModType = ::EntityModifier<
        AirTravelFlagComponent,
        GlidingTravelFlagComponent,
        GroundTravelFlagComponent,
        LavaTravelFlagComponent,
        WaterTravelFlagComponent,
        PlayerFlyingTravelComponent,
        LiquidTravelFlagComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createTravelTypeSensingSystem();
    // NOLINTEND
};
