#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
template<typename... T0> class Include;
struct BoatFlagComponent;
struct FallDistanceComponent;
struct FallingBlockFlagComponent;
struct PassengerComponent;
struct TickingSystemWithInfo;
struct UpdateWaterStateRequestComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
struct WaterSplashEffectRequestComponent;
// clang-format on

struct InWaterSensingSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void doInWaterSensing(
        ::StrictEntityContext&,
        ::UpdateWaterStateRequestComponent const&,
        ::FallDistanceComponent&,
        ::Optional<const FallingBlockFlagComponent>,
        ::Optional<const PassengerComponent>,
        ::Optional<const WasInWaterFlagComponent>,
        ::EntityModifier<WasInWaterFlagComponent, WaterSplashEffectRequestComponent>,
        ::ViewT<StrictEntityContext, Include<BoatFlagComponent, VehicleComponent>>
    );
    // NOLINTEND
};
