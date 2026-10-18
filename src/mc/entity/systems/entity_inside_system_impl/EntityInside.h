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
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class FreezingComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlagComponent;
struct CactusBlockFlag;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FreezeImmuneFlagComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideWebBlockComponent;
struct InterpolateMovementNeededComponent;
struct IsDeadFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MovementAbilitiesComponent;
struct PlayerComponent;
struct PowderSnowBlockFlag;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct WasInWaterFlagComponent;
struct WaterlilyBlockFlag;
// clang-format on
#endif // @header-generator platform

namespace EntityInsideSystemImpl {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct EntityInside : public ::IStrictTickingSystem<::StrictExecutionContext<
                          ::Filter<
                              ::InterpolateMovementNeededComponent,
                              ::BoatFlagComponent,
                              ::FreezeImmuneFlagComponent,
                              ::IsDeadFlagComponent,
                              ::PlayerComponent,
                              ::WasInWaterFlagComponent>,
                          ::Read<
                              ::AABBShapeComponent,
                              ::ActorMovementTickNeededComponent,
                              ::ActorGameTypeComponent,
                              ::DimensionTypeComponent,
                              ::MovementAbilitiesComponent>,
                          ::Write<
                              ::BlockMovementSlowdownMultiplierComponent,
                              ::FallDistanceComponent,
                              ::InsideBlockComponent,
                              ::StateVectorComponent>,
                          ::AddRemove<
                              ::BlockMovementSlowdownAppliedComponent,
                              ::FreezingComponent,
                              ::IgnoresEntityInsideFlagComponent,
                              ::InsideBubbleColumnBlockComponent,
                              ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                              ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                              ::InsideGenericBlockComponent,
                              ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                              ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                              ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                              ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                              ::InsideWebBlockComponent>,
                          ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                          ::GlobalWrite<>,
                          ::EntityFactoryT<>>> {
public:
    // EntityInside inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::InterpolateMovementNeededComponent,
            ::BoatFlagComponent,
            ::FreezeImmuneFlagComponent,
            ::IsDeadFlagComponent,
            ::PlayerComponent,
            ::WasInWaterFlagComponent>,
        ::Read<
            ::AABBShapeComponent,
            ::ActorMovementTickNeededComponent,
            ::ActorGameTypeComponent,
            ::DimensionTypeComponent,
            ::MovementAbilitiesComponent>,
        ::Write<
            ::BlockMovementSlowdownMultiplierComponent,
            ::FallDistanceComponent,
            ::InsideBlockComponent,
            ::StateVectorComponent>,
        ::AddRemove<
            ::BlockMovementSlowdownAppliedComponent,
            ::FreezingComponent,
            ::IgnoresEntityInsideFlagComponent,
            ::InsideBubbleColumnBlockComponent,
            ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
            ::InsideGenericBlockComponent,
            ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
            ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
            ::InsideWebBlockComponent>,
        ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideWebBlockComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideWebBlockComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideWebBlockComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideWebBlockComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace EntityInsideSystemImpl
