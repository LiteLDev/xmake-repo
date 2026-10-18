#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doInWaterSensing(
        ::StrictEntityContext&,
        ::UpdateWaterStateRequestComponent const&,
        ::FallDistanceComponent&,
        ::Optional<const FallingBlockFlagComponent>,
        ::Optional<const PassengerComponent>,
        ::Optional<const WasInWaterFlagComponent>,
        ::EntityModifier<WasInWaterFlagComponent, WaterSplashEffectRequestComponent>,
        ::ViewT<StrictEntityContext, Include<BoatFlagComponent, VehicleComponent>>
#else // @header-generator platform
    MCAPI static void doInWaterSensing(
        ::StrictEntityContext&                        entity,
        ::UpdateWaterStateRequestComponent const&     updateWaterStateRequestComponent,
        ::FallDistanceComponent&                      fallDistanceComponent,
        ::Optional<::FallingBlockFlagComponent const> fallingBlockFlagComponent,
        ::Optional<::PassengerComponent const>        passengerComponent,
        ::Optional<::WasInWaterFlagComponent const>   wasInWaterComponent,
        ::EntityModifier<::WasInWaterFlagComponent, ::WaterSplashEffectRequestComponent>   modifier,
        ::ViewT<::StrictEntityContext, ::Include<::BoatFlagComponent, ::VehicleComponent>> boatVehicle
#endif // @header-generator platform
    );
    // NOLINTEND
};
