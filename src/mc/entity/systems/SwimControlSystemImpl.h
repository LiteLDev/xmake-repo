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
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/MobIsJumpingFlagComponent.h"
#include "mc/deps/vanilla_components/MovementAbilitiesComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/MobTravelComponent.h"
#include "mc/entity/components/MoveInputComponent.h"
#include "mc/entity/components/PlayerInputRequestComponent.h"
#include "mc/entity/components/WasInWaterFlagComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerInputRequestComponent;
struct StateVectorComponent;
struct WasInWaterFlagComponent;
// clang-format on
#endif // @header-generator platform

namespace SwimControlSystemImpl {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct SwimControlSystemImpl
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
      ::Read<
          ::ActorDataFlagComponent,
          ::MovementAbilitiesComponent,
          ::ActorRotationComponent,
          ::MoveInputComponent,
          ::PlayerInputRequestComponent>,
      ::Write<::StateVectorComponent>,
      ::AddRemove<>,
      ::GlobalRead<>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SwimControlSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<MobTravelComponent, WasInWaterFlagComponent, MobIsJumpingFlagComponent>, Read<ActorDataFlagComponent, MovementAbilitiesComponent, ActorRotationComponent, MoveInputComponent, PlayerInputRequestComponent>, Write<StateVectorComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::MovementAbilitiesComponent,
                ::ActorRotationComponent,
                ::MoveInputComponent,
                ::PlayerInputRequestComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
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
#else // @header-generator platform
            ::Filter<::MobTravelComponent, ::WasInWaterFlagComponent, ::MobIsJumpingFlagComponent>,
            ::Read<
                ::ActorDataFlagComponent,
                ::MovementAbilitiesComponent,
                ::ActorRotationComponent,
                ::MoveInputComponent,
                ::PlayerInputRequestComponent>,
            ::Write<::StateVectorComponent>,
            ::AddRemove<>,
            ::GlobalRead<>,
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

} // namespace SwimControlSystemImpl
