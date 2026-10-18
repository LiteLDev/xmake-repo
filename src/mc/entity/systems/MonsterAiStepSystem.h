#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
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
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/BlazeFlagComponent.h"
#include "mc/deps/vanilla_components/LavaSlimeFlagComponent.h"
#include "mc/deps/vanilla_components/MonsterFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/NoActionTimeComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename... T0> class Include;
struct TickingSystemWithInfo;
#else // @header-generator platform
struct AABBShapeComponent;
struct ActorMovementTickNeededComponent;
struct BlazeFlagComponent;
struct DimensionTypeComponent;
struct LavaSlimeFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MonsterFlagComponent;
struct NoActionTimeComponent;
struct OffsetsComponent;
struct StateVectorComponent;
#endif // @header-generator platform
// clang-format on

struct MonsterAiStepSystem
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>,
      Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>,
      Write<NoActionTimeComponent>,
      AddRemove<>,
      GlobalRead<LocalConstBlockSourceFactoryComponent>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::ActorMovementTickNeededComponent,
          ::BlazeFlagComponent,
          ::LavaSlimeFlagComponent,
          ::MonsterFlagComponent>,
      ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
      ::Write<::NoActionTimeComponent>,
      ::AddRemove<>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // MonsterAiStepSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<
            ::ActorMovementTickNeededComponent,
            ::BlazeFlagComponent,
            ::LavaSlimeFlagComponent,
            ::MonsterFlagComponent>,
        ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
        ::Write<::NoActionTimeComponent>,
        ::AddRemove<>,
        ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~MonsterAiStepSystem();

    virtual void tick(::StrictExecutionContext<Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>, Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>, Write<NoActionTimeComponent>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BlazeFlagComponent,
                ::LavaSlimeFlagComponent,
                ::MonsterFlagComponent>,
            ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
            ::Write<::NoActionTimeComponent>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tickMonsterAiStep(
        ::StrictEntityContext const&,
        ::AABBShapeComponent const&,
        ::OffsetsComponent const&,
        ::StateVectorComponent const&,
        ::NoActionTimeComponent&,
        ::ViewT<StrictEntityContext, Include<BlazeFlagComponent>>,
        ::ViewT<StrictEntityContext, Include<LavaSlimeFlagComponent>>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void tickMonsterAiStep(
        ::StrictEntityContext const&                                        entity,
        ::AABBShapeComponent const&                                         aabbShapeComponent,
        ::OffsetsComponent const&                                           offsetsComponent,
        ::StateVectorComponent const&                                       stateVectorComponent,
        ::NoActionTimeComponent&                                            noActionTimeComponent,
        ::ViewT<::StrictEntityContext, ::Include<::BlazeFlagComponent>>     blazeView,
        ::ViewT<::StrictEntityContext, ::Include<::LavaSlimeFlagComponent>> lavaSlimeView,
        ::IConstBlockSource const&                                          region
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
            Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>,
            Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>,
            Write<NoActionTimeComponent>,
            AddRemove<>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BlazeFlagComponent,
                ::LavaSlimeFlagComponent,
                ::MonsterFlagComponent>,
            ::Read<::AABBShapeComponent, ::DimensionTypeComponent, ::OffsetsComponent, ::StateVectorComponent>,
            ::Write<::NoActionTimeComponent>,
            ::AddRemove<>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& strictContext
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
