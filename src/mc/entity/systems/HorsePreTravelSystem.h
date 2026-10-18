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
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct HorseFlagComponent;
struct HorseWasOnGroundPreTravelComponent;
struct InterpolateMovementNeededComponent;
struct MobFlagComponent;
struct OnGroundFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class HorsePreTravelSystem {
public:
    // HorsePreTravelSystem inner types define
    using MainViewType = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<InterpolateMovementNeededComponent, HorseFlagComponent>,
        Optional<VehicleComponent>,
        const ActorDataFlagComponent,
        AirSpeedComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::HorseFlagComponent>,
        ::Optional<::VehicleComponent>,
        ::ActorDataFlagComponent const,
        ::AirSpeedComponent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using MobViewType = ::ViewT<StrictEntityContext, const MobFlagComponent>;
#else // @header-generator platform
    using MobViewType = ::ViewT<::StrictEntityContext, ::MobFlagComponent const>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using OnGroundViewType = ::ViewT<StrictEntityContext, const OnGroundFlagComponent>;
#else // @header-generator platform
    using ModType = ::EntityModifier<::HorseWasOnGroundPreTravelComponent>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ModType = ::EntityModifier<HorseWasOnGroundPreTravelComponent>;
#else // @header-generator platform
    using OnGroundViewType = ::ViewT<::StrictEntityContext, ::OnGroundFlagComponent const>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createHorsePreTravelSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createHorsePreTravelSystem();
#endif // @header-generator platform
    // NOLINTEND
};
