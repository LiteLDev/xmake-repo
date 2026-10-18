#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/ActorTypeComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/CanStandOnSnowFlagComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/HasLightweightFamilyFlagComponent.h"
#include "mc/entity/components/LavaSlimeJumpRequestComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/LocalPlayerJumpRequestComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/MobEffectsComponent.h"
#include "mc/entity/components/MobJumpComponent.h"
#include "mc/entity/components/OtherJumpRequestComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/PlayerActionComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/SquidJumpRequestComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/SynchedActorDataComponent.h"
#include "mc/entity/components/TriggerJumpRequestComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/components_json_legacy/JumpControlComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class JumpControlComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorGameTypeComponent;
struct ActorRotationComponent;
struct ActorTypeComponent;
struct CamelFlagComponent;
struct CanStandOnSnowFlagComponent;
struct DimensionTypeComponent;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct HasLightweightFamilyFlagComponent;
struct HorseFlagComponent;
struct LavaSlimeJumpRequestComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalPlayerJumpRequestComponent;
struct MobBodyRotationComponent;
struct MobEffectsComponent;
struct MobFlagComponent;
struct MobJumpComponent;
struct MovementAbilitiesComponent;
struct OffsetsComponent;
struct OtherJumpRequestComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerActionComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct SquidJumpRequestComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TriggerJumpRequestComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on
#endif // @header-generator platform

namespace MobJumpFromGroundSystemImpl {

#if defined(LL_PLAT_A) // @header-generator platform
struct JumpFromGroundSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                  Filter<
                                      CanStandOnSnowFlagComponent,
                                      HasLightweightFamilyFlagComponent,
                                      HorseFlagComponent,
                                      MobFlagComponent,
                                      ParrotFlagComponent,
                                      VehicleComponent,
                                      CamelFlagComponent,
                                      PlayerComponent,
                                      LocalPlayerJumpRequestComponent,
                                      LavaSlimeJumpRequestComponent,
                                      SquidJumpRequestComponent,
                                      OtherJumpRequestComponent>,
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
                                      MobEffectsComponent,
                                      SynchedActorDataComponent,
                                      JumpControlComponent,
                                      DimensionTypeComponent>,
                                  Write<MobJumpComponent, StateVectorComponent, PlayerActionComponent>,
                                  AddRemove<TriggerJumpRequestComponent>,
                                  GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
                                  GlobalWrite<>,
                                  EntityFactoryT<>>> {};
#else // @header-generator platform
struct JumpFromGroundSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                  ::Filter<
                                      ::CanStandOnSnowFlagComponent,
                                      ::HasLightweightFamilyFlagComponent,
                                      ::HorseFlagComponent,
                                      ::MobFlagComponent,
                                      ::ParrotFlagComponent,
                                      ::VehicleComponent,
                                      ::CamelFlagComponent,
                                      ::PlayerComponent,
                                      ::LocalPlayerJumpRequestComponent,
                                      ::LavaSlimeJumpRequestComponent,
                                      ::SquidJumpRequestComponent,
                                      ::OtherJumpRequestComponent>,
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
                                      ::MobEffectsComponent,
                                      ::SynchedActorDataComponent,
                                      ::JumpControlComponent,
                                      ::DimensionTypeComponent>,
                                  ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
                                  ::AddRemove<::TriggerJumpRequestComponent>,
                                  ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                                  ::GlobalWrite<>,
                                  ::EntityFactoryT<>>> {
public:
    // JumpFromGroundSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::CanStandOnSnowFlagComponent,
            ::HasLightweightFamilyFlagComponent,
            ::HorseFlagComponent,
            ::MobFlagComponent,
            ::ParrotFlagComponent,
            ::VehicleComponent,
            ::CamelFlagComponent,
            ::PlayerComponent,
            ::LocalPlayerJumpRequestComponent,
            ::LavaSlimeJumpRequestComponent,
            ::SquidJumpRequestComponent,
            ::OtherJumpRequestComponent>,
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
            ::MobEffectsComponent,
            ::SynchedActorDataComponent,
            ::JumpControlComponent,
            ::DimensionTypeComponent>,
        ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
        ::AddRemove<::TriggerJumpRequestComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;

    virtual void singleTick(
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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    ) /*override*/;
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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );

    MCAPI void $singleTick(
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
                ::LocalPlayerJumpRequestComponent,
                ::LavaSlimeJumpRequestComponent,
                ::SquidJumpRequestComponent,
                ::OtherJumpRequestComponent>,
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
                ::MobEffectsComponent,
                ::SynchedActorDataComponent,
                ::JumpControlComponent,
                ::DimensionTypeComponent>,
            ::Write<::MobJumpComponent, ::StateVectorComponent, ::PlayerActionComponent>,
            ::AddRemove<::TriggerJumpRequestComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context,
        ::StrictEntityContext&   entity
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace MobJumpFromGroundSystemImpl
