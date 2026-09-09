#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataDirtyFlagsComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/LocalPlayerComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/deps/vanilla_components/SubBBsComponent.h"
#include "mc/deps/vanilla_components/VanillaClientGameplayComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/CanStandOnSnowFlagComponent.h"
#include "mc/entity/components/ClientInputLockComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/HasLightweightFamilyFlagComponent.h"
#include "mc/entity/components/ImmuneToLavaDragComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/MobEffectsComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/PlayerInputRequestComponent.h"
#include "mc/entity/components/RawMoveInputComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/SneakingComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/components/WasInWaterFlagComponent.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

struct ClientInputUpdateSystemInternal : public ::IStrictTickingSystem<StrictExecutionContext<
                                             Filter<
                                                 CanStandOnSnowFlagComponent,
                                                 HasLightweightFamilyFlagComponent,
                                                 HorseFlagComponent,
                                                 MobFlagComponent,
                                                 ParrotFlagComponent,
                                                 VehicleComponent,
                                                 CamelFlagComponent,
                                                 PlayerComponent,
                                                 LocalPlayerComponent,
                                                 PlayerInputRequestComponent>,
                                             Read<
                                                 AABBShapeComponent,
                                                 MovementAbilitiesComponent,
                                                 ActorTypeComponent,
                                                 FallDistanceComponent,
                                                 PassengerComponent,
                                                 ActorGameTypeComponent,
                                                 ActorDataFlagComponent,
                                                 VehicleComponent,
                                                 ActorRotationComponent,
                                                 MobBodyRotationComponent,
                                                 RenderRotationComponent,
                                                 StandAnimationComponent,
                                                 OffsetsComponent,
                                                 VanillaOffsetComponent,
                                                 PassengerRenderingRidingOffsetComponent,
                                                 MovementAttributesComponent,
                                                 DimensionTypeComponent,
                                                 ImmuneToLavaDragComponent,
                                                 MobEffectsComponent,
                                                 SneakingComponent,
                                                 StateVectorComponent,
                                                 SubBBsComponent,
                                                 WasInWaterFlagComponent>,
                                             Write<
                                                 ActorOwnerComponent,
                                                 ClientInputLockComponent,
                                                 MoveInputComponent,
                                                 RawMoveInputComponent,
                                                 ActorDataFlagComponent,
                                                 ActorDataDirtyFlagsComponent,
                                                 VanillaClientGameplayComponent>,
                                             AddRemove<>,
                                             GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
                                             GlobalWrite<>,
                                             EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientInputUpdateSystemInternal();

    virtual void tick(::StrictExecutionContext<Filter<CanStandOnSnowFlagComponent, HasLightweightFamilyFlagComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent, LocalPlayerComponent, PlayerInputRequestComponent>, Read<AABBShapeComponent, MovementAbilitiesComponent, ActorTypeComponent, FallDistanceComponent, PassengerComponent, ActorGameTypeComponent, ActorDataFlagComponent, VehicleComponent, ActorRotationComponent, MobBodyRotationComponent, RenderRotationComponent, StandAnimationComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent, MovementAttributesComponent, DimensionTypeComponent, ImmuneToLavaDragComponent, MobEffectsComponent, SneakingComponent, StateVectorComponent, SubBBsComponent, WasInWaterFlagComponent>, Write<ActorOwnerComponent, ClientInputLockComponent, MoveInputComponent, RawMoveInputComponent, ActorDataFlagComponent, ActorDataDirtyFlagsComponent, VanillaClientGameplayComponent>, AddRemove<>, GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tickUpdateClientInputView(
        ::StrictEntityContext const&,
        ::AABBShapeComponent const&,
        ::MovementAbilitiesComponent const&,
        ::ActorRotationComponent const&,
        ::MovementAttributesComponent const&,
        ::StateVectorComponent const&,
        ::SubBBsComponent const&,
        ::ClientInputLockComponent&,
        ::MoveInputComponent&,
        ::RawMoveInputComponent&,
        ::ActorDataFlagComponent&,
        ::Optional<const ImmuneToLavaDragComponent>,
        ::Optional<const PassengerComponent>,
        ::Optional<const SneakingComponent>,
        ::Optional<const WasInWaterFlagComponent>,
        ::StrictExecutionContext<
            Filter<
                CanStandOnSnowFlagComponent,
                HasLightweightFamilyFlagComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent,
                LocalPlayerComponent,
                PlayerInputRequestComponent>,
            Read<
                AABBShapeComponent,
                MovementAbilitiesComponent,
                ActorTypeComponent,
                FallDistanceComponent,
                PassengerComponent,
                ActorGameTypeComponent,
                ActorDataFlagComponent,
                VehicleComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent,
                MovementAttributesComponent,
                DimensionTypeComponent,
                ImmuneToLavaDragComponent,
                MobEffectsComponent,
                SneakingComponent,
                StateVectorComponent,
                SubBBsComponent,
                WasInWaterFlagComponent>,
            Write<
                ActorOwnerComponent,
                ClientInputLockComponent,
                MoveInputComponent,
                RawMoveInputComponent,
                ActorDataFlagComponent,
                ActorDataDirtyFlagsComponent,
                VanillaClientGameplayComponent>,
            AddRemove<>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&,
        ::OptionalGlobal<const ExternalDataComponent>,
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
            Filter<
                CanStandOnSnowFlagComponent,
                HasLightweightFamilyFlagComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent,
                LocalPlayerComponent,
                PlayerInputRequestComponent>,
            Read<
                AABBShapeComponent,
                MovementAbilitiesComponent,
                ActorTypeComponent,
                FallDistanceComponent,
                PassengerComponent,
                ActorGameTypeComponent,
                ActorDataFlagComponent,
                VehicleComponent,
                ActorRotationComponent,
                MobBodyRotationComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent,
                MovementAttributesComponent,
                DimensionTypeComponent,
                ImmuneToLavaDragComponent,
                MobEffectsComponent,
                SneakingComponent,
                StateVectorComponent,
                SubBBsComponent,
                WasInWaterFlagComponent>,
            Write<
                ActorOwnerComponent,
                ClientInputLockComponent,
                MoveInputComponent,
                RawMoveInputComponent,
                ActorDataFlagComponent,
                ActorDataDirtyFlagsComponent,
                VanillaClientGameplayComponent>,
            AddRemove<>,
            GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
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
