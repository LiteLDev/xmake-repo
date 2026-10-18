#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorTickedComponent;
struct DimensionTypeComponent;
struct RaidTriggerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VillageManagerComponent;
// clang-format on

class LegacyRaidTriggerSystem {
public:
    // LegacyRaidTriggerSystem inner types define
    using SystemView = ::ViewT<
#if defined(LL_PLAT_A) // @header-generator platform
        StrictEntityContext,
        Include<const ActorTickedComponent, const RaidTriggerComponent>,
        const DimensionTypeComponent,
        const StateVectorComponent,
        ActorOwnerComponent>;
#else // @header-generator platform
        ::StrictEntityContext,
        ::Include<::ActorTickedComponent const, ::RaidTriggerComponent const>,
        ::DimensionTypeComponent const,
        ::StateVectorComponent const,
        ::ActorOwnerComponent>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&,
        ::StateVectorComponent const&,
        ::ActorOwnerComponent&,
        ::VillageManagerComponent const&
#else // @header-generator platform
    MCAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&  dimensionTypeComponent,
        ::StateVectorComponent const&    stateVectorComponent,
        ::ActorOwnerComponent&           actorOwnerComponent,
        ::VillageManagerComponent const& villageManagerComponent
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem();
#endif // @header-generator platform
    // NOLINTEND
};
