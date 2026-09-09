#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
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

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
template<typename... T0> class Include;
struct TickingSystemWithInfo;
// clang-format on

struct MonsterAiStepSystem
: public ::IStrictTickingSystem<StrictExecutionContext<
      Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>,
      Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>,
      Write<NoActionTimeComponent>,
      AddRemove<>,
      GlobalRead<LocalConstBlockSourceFactoryComponent>,
      GlobalWrite<>,
      EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MonsterAiStepSystem();

    virtual void tick(::StrictExecutionContext<Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>, Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>, Write<NoActionTimeComponent>, AddRemove<>, GlobalRead<LocalConstBlockSourceFactoryComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
            Filter<ActorMovementTickNeededComponent, BlazeFlagComponent, LavaSlimeFlagComponent, MonsterFlagComponent>,
            Read<AABBShapeComponent, DimensionTypeComponent, OffsetsComponent, StateVectorComponent>,
            Write<NoActionTimeComponent>,
            AddRemove<>,
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
