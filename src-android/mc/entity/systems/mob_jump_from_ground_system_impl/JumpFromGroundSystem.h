#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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

namespace MobJumpFromGroundSystemImpl {

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

} // namespace MobJumpFromGroundSystemImpl
