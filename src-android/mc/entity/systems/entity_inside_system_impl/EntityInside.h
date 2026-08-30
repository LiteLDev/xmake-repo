#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/BoatFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorGameTypeComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/BlockMovementSlowdownAppliedComponent.h"
#include "mc/entity/components/BlockMovementSlowdownMultiplierComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/ExternalDataComponent.h"
#include "mc/entity/components/FallDistanceComponent.h"
#include "mc/entity/components/FreezeImmuneFlagComponent.h"
#include "mc/entity/components/FreezingComponent.h"
#include "mc/entity/components/IgnoresEntityInsideFlagComponent.h"
#include "mc/entity/components/InsideBlockComponent.h"
#include "mc/entity/components/InsideBubbleColumnBlockComponent.h"
#include "mc/entity/components/InsideGenericBlockComponent.h"
#include "mc/entity/components/InsideWebBlockComponent.h"
#include "mc/entity/components/InterpolateMovementNeededComponent.h"
#include "mc/entity/components/IsDeadFlagComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/WasInWaterFlagComponent.h"

namespace EntityInsideSystemImpl {

struct EntityInside : public ::IStrictTickingSystem<StrictExecutionContext<
                          Filter<
                              InterpolateMovementNeededComponent,
                              BoatFlagComponent,
                              FreezeImmuneFlagComponent,
                              IsDeadFlagComponent,
                              PlayerComponent,
                              WasInWaterFlagComponent>,
                          Read<
                              AABBShapeComponent,
                              ActorMovementTickNeededComponent,
                              ActorGameTypeComponent,
                              DimensionTypeComponent,
                              MovementAbilitiesComponent>,
                          Write<
                              BlockMovementSlowdownMultiplierComponent,
                              FallDistanceComponent,
                              InsideBlockComponent,
                              StateVectorComponent>,
                          AddRemove<
                              BlockMovementSlowdownAppliedComponent,
                              FreezingComponent,
                              IgnoresEntityInsideFlagComponent,
                              InsideBubbleColumnBlockComponent,
                              InsideBlockWithPosAndBlockComponent<CactusBlockFlag>,
                              InsideBlockWithPosAndBlockComponent<EndPortalBlockFlag>,
                              InsideGenericBlockComponent,
                              InsideBlockWithPosAndBlockComponent<HoneyBlockFlag>,
                              InsideBlockWithPosAndBlockComponent<PowderSnowBlockFlag>,
                              InsideBlockWithPosAndBlockComponent<SweetBerryBushBlockFlag>,
                              InsideBlockWithPosComponent<WaterlilyBlockFlag>,
                              InsideWebBlockComponent>,
                          GlobalRead<ExternalDataComponent, LocalConstBlockSourceFactoryComponent>,
                          GlobalWrite<>,
                          EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND
};

} // namespace EntityInsideSystemImpl
