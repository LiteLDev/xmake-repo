#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
template<typename... T0> class Include;
struct GetAttachPositionViews;
// clang-format on

class MobSuffocationSystemImpl
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
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MobSuffocationSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<MobFlagComponent, ActorMovementTickNeededComponent, PlayerComponent, PassengerComponent>, Read<StateVectorComponent, AABBShapeComponent, SynchedActorDataComponent, OffsetsComponent, VehicleComponent, ActorRotationComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<ActorInWallDetectionComponent>, AddRemove<MobIsSuffocatingFlagComponent>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
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
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
