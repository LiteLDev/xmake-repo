#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/CurrentlyStandingOnBlockComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/ShouldPlayMovementSoundComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorOwnerComponent;
#endif // @header-generator platform
class IConstBlockSource;
class StrictEntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct AABBShapeComponent;
struct CurrentlyStandingOnBlockComponent;
struct DimensionTypeComponent;
struct LocalConstBlockSourceFactoryComponent;
struct ShouldPlayMovementSoundComponent;
struct StateVectorComponent;
#endif // @header-generator platform
// clang-format on

struct CurrentlyStandingOnBlockSystemImpl
#if defined(LL_PLAT_A) // @header-generator platform
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ShouldPlayMovementSoundComponent>,
      Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>,
      Write<>,
      AddRemove<CurrentlyStandingOnBlockComponent>,
      GlobalRead<LocalConstBlockSourceFactoryComponent>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
#else // @header-generator platform
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::ShouldPlayMovementSoundComponent>,
      ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
      ::Write<>,
      ::AddRemove<::CurrentlyStandingOnBlockComponent>,
      ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CurrentlyStandingOnBlockSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<CurrentlyStandingOnBlockComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<::CurrentlyStandingOnBlockComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void doCurrentlyStandingOnBlockSystem(
        ::StrictEntityContext const&,
        ::ActorOwnerComponent const&,
        ::StateVectorComponent const&,
        ::AABBShapeComponent const&,
        ::EntityModifier<CurrentlyStandingOnBlockComponent>,
        ::IConstBlockSource const&
#else // @header-generator platform
    MCAPI static void doCurrentlyStandingOnBlockSystem(
        ::StrictEntityContext const&                          entity,
        ::ActorOwnerComponent const&                          actorOwnerComponent,
        ::StateVectorComponent const&                         stateVectorComponent,
        ::AABBShapeComponent const&                           aabbShapeComponent,
        ::EntityModifier<::CurrentlyStandingOnBlockComponent> entityModifier,
        ::IConstBlockSource const&                            region
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
            Filter<ShouldPlayMovementSoundComponent>,
            Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>,
            Write<>,
            AddRemove<CurrentlyStandingOnBlockComponent>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::ShouldPlayMovementSoundComponent>,
            ::Read<::ActorOwnerComponent, ::DimensionTypeComponent, ::StateVectorComponent, ::AABBShapeComponent>,
            ::Write<>,
            ::AddRemove<::CurrentlyStandingOnBlockComponent>,
            ::GlobalRead<::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
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
