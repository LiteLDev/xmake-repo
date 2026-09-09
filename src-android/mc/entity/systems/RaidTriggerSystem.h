#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct ActorTickedComponent;
struct DimensionTypeComponent;
struct GainedRaidOmenAtPositionComponent;
struct RaidTriggerComponent;
struct TickingSystemWithInfo;
struct VillageManagerComponent;
// clang-format on

class RaidTriggerSystem {
public:
    // RaidTriggerSystem inner types define
    using SystemView = ::ViewT<
        StrictEntityContext,
        Include<const ActorTickedComponent, const RaidTriggerComponent>,
        const DimensionTypeComponent,
        const GainedRaidOmenAtPositionComponent,
        ActorOwnerComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doRaidTriggerSystem(
        ::DimensionTypeComponent const&,
        ::GainedRaidOmenAtPositionComponent const&,
        ::ActorOwnerComponent&,
        ::VillageManagerComponent const&
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
