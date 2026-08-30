#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorOwnerComponent.h"
#include "mc/entity/components/CurrentlyStandingOnBlockComponent.h"
#include "mc/entity/components/DimensionTypeComponent.h"
#include "mc/entity/components/LocalConstBlockSourceFactoryComponent.h"
#include "mc/entity/components/ShouldPlayMovementSoundComponent.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

struct CurrentlyStandingOnBlockSystemImpl
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ShouldPlayMovementSoundComponent>,
      Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>,
      Write<>,
      AddRemove<CurrentlyStandingOnBlockComponent>,
      GlobalRead<LocalConstBlockSourceFactoryComponent>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CurrentlyStandingOnBlockSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<ShouldPlayMovementSoundComponent>, Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>, Write<>, AddRemove<CurrentlyStandingOnBlockComponent>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void doCurrentlyStandingOnBlockSystem(
        ::StrictEntityContext const&,
        ::ActorOwnerComponent const&,
        ::StateVectorComponent const&,
        ::AABBShapeComponent const&,
        ::EntityModifier<CurrentlyStandingOnBlockComponent>,
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
            Filter<ShouldPlayMovementSoundComponent>,
            Read<ActorOwnerComponent, DimensionTypeComponent, StateVectorComponent, AABBShapeComponent>,
            Write<>,
            AddRemove<CurrentlyStandingOnBlockComponent>,
            GlobalRead<LocalConstBlockSourceFactoryComponent>,
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
