#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/OptionalComponentWrapper.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
#if defined(LL_PLAT_A) // @header-generator platform
struct PassengersToPositionComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerComponent;
struct PositionPassengerRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerPositionPassengerSystem {
public:
    // VehicleServerPositionPassengerSystem inner types define
    using PositionPassengerView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<PassengerComponent, PositionPassengerRequestComponent>,
        const ActorDataSeatOffsetComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::PassengerComponent, ::PositionPassengerRequestComponent>,
        ::ActorDataSeatOffsetComponent const>;
#endif // @header-generator platform

    using RotateMobPassengerView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<PassengerComponent, MobFlagComponent>,
        const ActorHeadRotationComponent,
        const PositionPassengerRequestComponent,
        const SynchedActorDataComponent,
        ActorRotationComponent,
        MobBodyRotationComponent,
        PassengerYRotLimitComponent,
        Optional<const PlayerComponent>>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::PassengerComponent, ::MobFlagComponent>,
        ::ActorHeadRotationComponent const,
        ::PositionPassengerRequestComponent const,
        ::SynchedActorDataComponent const,
        ::ActorRotationComponent,
        ::MobBodyRotationComponent,
        ::PassengerYRotLimitComponent,
        ::Optional<::PlayerComponent const>>;
#endif // @header-generator platform

    using VehicleView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<VehicleComponent>,
        const ActorRotationComponent,
        const StateVectorComponent,
        Optional<const ActorSetPositionRequestComponent>>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::VehicleComponent>,
        ::ActorRotationComponent const,
        ::StateVectorComponent const,
        ::Optional<::ActorSetPositionRequestComponent const>>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
