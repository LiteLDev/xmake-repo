#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/MobIsJumpingFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/MobTravelComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/PlayerInputRequestComponent.h"
#include "mc/entity/components/WasInWaterFlagComponent.h"

namespace SwimControlSystemImpl {

struct SwimControlSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                   Filter<MobTravelComponent, WasInWaterFlagComponent, MobIsJumpingFlagComponent>,
                                   Read<
                                       ActorDataFlagComponent,
                                       MovementAbilitiesComponent,
                                       ActorRotationComponent,
                                       MoveInputComponent,
                                       PlayerInputRequestComponent>,
                                   Write<StateVectorComponent>,
                                   AddRemove<>,
                                   GlobalRead<>,
                                   GlobalWrite<>,
                                   EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SwimControlSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<MobTravelComponent, WasInWaterFlagComponent, MobIsJumpingFlagComponent>, Read<ActorDataFlagComponent, MovementAbilitiesComponent, ActorRotationComponent, MoveInputComponent, PlayerInputRequestComponent>, Write<StateVectorComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
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
            Filter<MobTravelComponent, WasInWaterFlagComponent, MobIsJumpingFlagComponent>,
            Read<
                ActorDataFlagComponent,
                MovementAbilitiesComponent,
                ActorRotationComponent,
                MoveInputComponent,
                PlayerInputRequestComponent>,
            Write<StateVectorComponent>,
            AddRemove<>,
            GlobalRead<>,
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

} // namespace SwimControlSystemImpl
