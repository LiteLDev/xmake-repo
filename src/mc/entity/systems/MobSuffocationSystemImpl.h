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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorInWallDetectionComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/MobIsSuffocatingFlagComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorInWallDetectionComponent;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
#endif // @header-generator platform
struct GetAttachPositionViews;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct MobFlagComponent;
struct MobIsSuffocatingFlagComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
#endif // @header-generator platform
// clang-format on

class MobSuffocationSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<MobFlagComponent, ActorMovementTickNeededComponent, PlayerComponent, PassengerComponent>,
      Read<
          StateVectorComponent,
          AABBShapeComponent,
          SynchedActorDataComponent,
          OffsetsComponent,
          VehicleComponent,
          ActorRotationComponent,
          VanillaOffsetComponent,
          PassengerRenderingRidingOffsetComponent>,
      Write<ActorInWallDetectionComponent>,
      AddRemove<MobIsSuffocatingFlagComponent>,
      GlobalRead<>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
      ::Read<
          ::StateVectorComponent,
          ::AABBShapeComponent,
          ::SynchedActorDataComponent,
          ::OffsetsComponent,
          ::VehicleComponent,
          ::ActorRotationComponent,
          ::VanillaOffsetComponent,
          ::PassengerRenderingRidingOffsetComponent>,
      ::Write<::ActorInWallDetectionComponent>,
      ::AddRemove<::MobIsSuffocatingFlagComponent>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MobSuffocationSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<MobFlagComponent, ActorMovementTickNeededComponent, PlayerComponent, PassengerComponent>, Read<StateVectorComponent, AABBShapeComponent, SynchedActorDataComponent, OffsetsComponent, VehicleComponent, ActorRotationComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<ActorInWallDetectionComponent>, AddRemove<MobIsSuffocatingFlagComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
            ::Read<
                ::StateVectorComponent,
                ::AABBShapeComponent,
                ::SynchedActorDataComponent,
                ::OffsetsComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::ActorInWallDetectionComponent>,
            ::AddRemove<::MobIsSuffocatingFlagComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _tickCheckSuffocation(
        ::StrictEntityContext const&,
        ::ActorInWallDetectionComponent const&,
        ::StateVectorComponent const&,
        ::AABBShapeComponent const&,
        ::SynchedActorDataComponent const&,
        ::OffsetsComponent const&,
        ::Optional<const VehicleComponent>,
        ::GetAttachPositionViews const&,
        ::ViewT<StrictEntityContext, Include<PlayerComponent, PassengerComponent>> const&,
        ::EntityModifier<MobIsSuffocatingFlagComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void _tickCheckSuffocation(
        ::StrictEntityContext const&           entity,
        ::ActorInWallDetectionComponent const& actorInWallDetectionComponent,
        ::StateVectorComponent const&          stateVectorComponent,
        ::AABBShapeComponent const&            aabbShapeComponent,
        ::SynchedActorDataComponent const&     synchedActorDataComponent,
        ::OffsetsComponent const&              offsetsComponent,
        ::Optional<::VehicleComponent const>   vehicleComponent,
        ::GetAttachPositionViews const&        getAttachPosViews,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent, ::PassengerComponent>> const& playerPassengers,
        ::EntityModifier<::MobIsSuffocatingFlagComponent>                                         modifier,
        ::IConstBlockSource const&                                                                region
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(
#else // @header-generator platform
    MCAPI void $tick(
#endif // @header-generator platform
        ::StrictExecutionContext<
#if defined(LL_PLAT_A) // @header-generator platform
            Filter<MobFlagComponent, ActorMovementTickNeededComponent, PlayerComponent, PassengerComponent>,
            Read<
                StateVectorComponent,
                AABBShapeComponent,
                SynchedActorDataComponent,
                OffsetsComponent,
                VehicleComponent,
                ActorRotationComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<ActorInWallDetectionComponent>,
            AddRemove<MobIsSuffocatingFlagComponent>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::MobFlagComponent, ::ActorMovementTickNeededComponent, ::PlayerComponent, ::PassengerComponent>,
            ::Read<
                ::StateVectorComponent,
                ::AABBShapeComponent,
                ::SynchedActorDataComponent,
                ::OffsetsComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::ActorInWallDetectionComponent>,
            ::AddRemove<::MobIsSuffocatingFlagComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
