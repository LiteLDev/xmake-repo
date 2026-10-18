#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct ClientInputLockComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct ImmuneToLavaDragComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct MovementAttributesComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct PlayerInputRequestComponent;
struct RawMoveInputComponent;
struct RenderRotationComponent;
struct SneakingComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct VanillaClientGameplayComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
struct WasInWaterFlagComponent;
// clang-format on

struct ClientInputUpdateSystemInternal
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::CanStandOnSnowFlagComponent,
          ::HasLightweightFamilyFlagComponent,
          ::HorseFlagComponent,
          ::MobFlagComponent,
          ::ParrotFlagComponent,
          ::VehicleComponent,
          ::CamelFlagComponent,
          ::PlayerComponent,
          ::LocalPlayerComponent,
          ::PlayerInputRequestComponent>,
      ::Read<
          ::AABBShapeComponent,
          ::MovementAbilitiesComponent,
          ::ActorTypeComponent,
          ::FallDistanceComponent,
          ::PassengerComponent,
          ::ActorGameTypeComponent,
          ::ActorDataFlagComponent,
          ::VehicleComponent,
          ::ActorRotationComponent,
          ::MobBodyRotationComponent,
          ::RenderRotationComponent,
          ::StandAnimationComponent,
          ::OffsetsComponent,
          ::VanillaOffsetComponent,
          ::PassengerRenderingRidingOffsetComponent,
          ::MovementAttributesComponent,
          ::DimensionTypeComponent,
          ::ImmuneToLavaDragComponent,
          ::MobEffectsComponent,
          ::SneakingComponent,
          ::StateVectorComponent,
          ::SubBBsComponent,
          ::WasInWaterFlagComponent>,
      ::Write<
          ::ActorOwnerComponent,
          ::ClientInputLockComponent,
          ::MoveInputComponent,
          ::RawMoveInputComponent,
          ::ActorDataFlagComponent,
          ::ActorDataDirtyFlagsComponent,
          ::VanillaClientGameplayComponent>,
      ::AddRemove<>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void tickUpdateClientInputView(
        ::StrictEntityContext const&                  entity,
        ::AABBShapeComponent const&                   aabbShape,
        ::MovementAbilitiesComponent const&           abilities,
        ::ActorRotationComponent const&               actorRotation,
        ::MovementAttributesComponent const&          attributes,
        ::StateVectorComponent const&                 stateVector,
        ::SubBBsComponent const&                      subBBs,
        ::ClientInputLockComponent&                   clientInputLock,
        ::MoveInputComponent&                         moveInput,
        ::RawMoveInputComponent&                      rawMoveInput,
        ::ActorDataFlagComponent&                     synchedActorData,
        ::Optional<::ImmuneToLavaDragComponent const> isImmuneToLava,
        ::Optional<::PassengerComponent const>        isRiding,
        ::Optional<::SneakingComponent const>         sneaking,
        ::Optional<::WasInWaterFlagComponent const>   isInWater,
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>&                        executionContext,
        ::OptionalGlobal<::ExternalDataComponent const> externalData,
        ::IConstBlockSource const&                      region
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::CanStandOnSnowFlagComponent,
                ::HasLightweightFamilyFlagComponent,
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent,
                ::LocalPlayerComponent,
                ::PlayerInputRequestComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorTypeComponent,
                ::FallDistanceComponent,
                ::PassengerComponent,
                ::ActorGameTypeComponent,
                ::ActorDataFlagComponent,
                ::VehicleComponent,
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent,
                ::MovementAttributesComponent,
                ::DimensionTypeComponent,
                ::ImmuneToLavaDragComponent,
                ::MobEffectsComponent,
                ::SneakingComponent,
                ::StateVectorComponent,
                ::SubBBsComponent,
                ::WasInWaterFlagComponent>,
            ::Write<
                ::ActorOwnerComponent,
                ::ClientInputLockComponent,
                ::MoveInputComponent,
                ::RawMoveInputComponent,
                ::ActorDataFlagComponent,
                ::ActorDataDirtyFlagsComponent,
                ::VanillaClientGameplayComponent>,
            ::AddRemove<>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientInputUpdateSystemInternal {};
#endif // @header-generator platform
#endif // @header-generator platform
