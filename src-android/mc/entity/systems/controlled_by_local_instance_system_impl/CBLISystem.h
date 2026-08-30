#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/BoatFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/LocalPlayerComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/ControlledByLocalInstanceComponent.h"
#include "mc/entity/components/RecalculateControlledByLocalInstanceRequestComponent.h"
#include "mc/entity/components/VehicleComponent.h"

// auto generated forward declare list
// clang-format off
template<typename... T0> class Include;
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {

struct CBLISystem : public ::IStrictTickingSystem<StrictExecutionContext<
                        Filter<
                            ActorMovementTickNeededComponent,
                            BoatFlagComponent,
                            HorseFlagComponent,
                            PlayerComponent,
                            RecalculateControlledByLocalInstanceRequestComponent>,
                        Read<VehicleComponent, ActorDataFlagComponent, LocalPlayerComponent>,
                        Write<>,
                        AddRemove<ControlledByLocalInstanceComponent>,
                        GlobalRead<>,
                        GlobalWrite<>,
                        EntityFactoryT<>>> {
public:
    // CBLISystem inner types define
    using TickCallback = void (*)(
        ::StrictExecutionContext<
            Filter<
                ActorMovementTickNeededComponent,
                BoatFlagComponent,
                HorseFlagComponent,
                PlayerComponent,
                RecalculateControlledByLocalInstanceRequestComponent>,
            Read<VehicleComponent, ActorDataFlagComponent, LocalPlayerComponent>,
            Write<>,
            AddRemove<ControlledByLocalInstanceComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<ControlledByLocalInstanceComponent>),
        void (*)(
            ::StrictEntityContext const&,
            std::optional<StrictEntityContext> const&,
            ::ViewT<StrictEntityContext, Include<PlayerComponent>, Optional<LocalPlayerComponent>> const&,
            ::EntityModifier<ControlledByLocalInstanceComponent>
        )
    );

    using SingleTickCallback = void (*)(
        ::StrictEntityContext&,
        ::StrictExecutionContext<
            Filter<
                ActorMovementTickNeededComponent,
                BoatFlagComponent,
                HorseFlagComponent,
                PlayerComponent,
                RecalculateControlledByLocalInstanceRequestComponent>,
            Read<VehicleComponent, ActorDataFlagComponent, LocalPlayerComponent>,
            Write<>,
            AddRemove<ControlledByLocalInstanceComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<ControlledByLocalInstanceComponent>),
        void (*)(
            ::StrictEntityContext const&,
            std::optional<StrictEntityContext> const&,
            ::ViewT<StrictEntityContext, Include<PlayerComponent>, Optional<LocalPlayerComponent>> const&,
            ::EntityModifier<ControlledByLocalInstanceComponent>
        )
    );

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mTick;
    ::ll::UntypedStorage<8, 8> mSingleTick;
    ::ll::UntypedStorage<8, 8> mSetCBLI;
    ::ll::UntypedStorage<8, 8> mSetVehicleCBLI;
    // NOLINTEND
};

} // namespace ControlledByLocalInstanceSystemImpl
