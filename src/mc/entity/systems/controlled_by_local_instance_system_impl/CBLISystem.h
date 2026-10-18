#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/BoatFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/LocalPlayerComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/ControlledByLocalInstanceComponent.h"
#include "mc/entity/components/RecalculateControlledByLocalInstanceRequestComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
class StrictEntityContext;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BoatFlagComponent;
struct ControlledByLocalInstanceComponent;
struct HorseFlagComponent;
struct LocalPlayerComponent;
struct PlayerComponent;
struct RecalculateControlledByLocalInstanceRequestComponent;
struct VehicleComponent;
#endif // @header-generator platform
// clang-format on

namespace ControlledByLocalInstanceSystemImpl {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct CBLISystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                        ::Filter<
                            ::ActorMovementTickNeededComponent,
                            ::BoatFlagComponent,
                            ::HorseFlagComponent,
                            ::PlayerComponent,
                            ::RecalculateControlledByLocalInstanceRequestComponent>,
                        ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                        ::Write<>,
                        ::AddRemove<::ControlledByLocalInstanceComponent>,
                        ::GlobalRead<>,
                        ::GlobalWrite<>,
                        ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // CBLISystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::ActorMovementTickNeededComponent,
            ::BoatFlagComponent,
            ::HorseFlagComponent,
            ::PlayerComponent,
            ::RecalculateControlledByLocalInstanceRequestComponent>,
        ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
        ::Write<>,
        ::AddRemove<::ControlledByLocalInstanceComponent>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;
#endif // @header-generator platform

    using SingleTickCallback = void (*)(
        ::StrictEntityContext&,
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
#endif // @header-generator platform
        void (*)(
            ::StrictEntityContext const&,
#if defined(LL_PLAT_A) // @header-generator platform
            std::optional<StrictEntityContext> const&,
            ::ViewT<StrictEntityContext, Include<PlayerComponent>, Optional<LocalPlayerComponent>> const&,
            ::EntityModifier<ControlledByLocalInstanceComponent>
#else // @header-generator platform
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
        )
    );

    using TickCallback = void (*)(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&,
        void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
        void (*)(
            ::StrictEntityContext const&,
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
#endif // @header-generator platform
        )
    );

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mTick;
    ::ll::UntypedStorage<8, 8> mSingleTick;
    ::ll::UntypedStorage<8, 8> mSetCBLI;
    ::ll::UntypedStorage<8, 8> mSetVehicleCBLI;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
            ::StrictExecutionContext<
                ::Filter<
                    ::ActorMovementTickNeededComponent,
                    ::BoatFlagComponent,
                    ::HorseFlagComponent,
                    ::PlayerComponent,
                    ::RecalculateControlledByLocalInstanceRequestComponent>,
                ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                ::Write<>,
                ::AddRemove<::ControlledByLocalInstanceComponent>,
                ::GlobalRead<>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>&,
            void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
            void (*)(
                ::StrictEntityContext const&,
                ::std::optional<::StrictEntityContext> const&,
                ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
                ::EntityModifier<::ControlledByLocalInstanceComponent>
            )
        )>
        mTick;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
            ::StrictEntityContext&,
            ::StrictExecutionContext<
                ::Filter<
                    ::ActorMovementTickNeededComponent,
                    ::BoatFlagComponent,
                    ::HorseFlagComponent,
                    ::PlayerComponent,
                    ::RecalculateControlledByLocalInstanceRequestComponent>,
                ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
                ::Write<>,
                ::AddRemove<::ControlledByLocalInstanceComponent>,
                ::GlobalRead<>,
                ::GlobalWrite<>,
                ::EntityFactoryT<>>&,
            void (*)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>),
            void (*)(
                ::StrictEntityContext const&,
                ::std::optional<::StrictEntityContext> const&,
                ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
                ::EntityModifier<::ControlledByLocalInstanceComponent>
            )
        )>
        mSingleTick;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(::StrictEntityContext const&, ::EntityModifier<::ControlledByLocalInstanceComponent>)>
        mSetCBLI;
    ::ll::TypedStorage<
        8,
        8,
        void (*const)(
            ::StrictEntityContext const&,
            ::std::optional<::StrictEntityContext> const&,
            ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>, ::Optional<::LocalPlayerComponent>> const&,
            ::EntityModifier<::ControlledByLocalInstanceComponent>
        )>
        mSetVehicleCBLI;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::HorseFlagComponent,
                ::PlayerComponent,
                ::RecalculateControlledByLocalInstanceRequestComponent>,
            ::Read<::VehicleComponent, ::ActorDataFlagComponent, ::LocalPlayerComponent>,
            ::Write<>,
            ::AddRemove<::ControlledByLocalInstanceComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext,
        ::StrictEntityContext&   entity
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ControlledByLocalInstanceSystemImpl
