#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/PlayerIsSleepingFlagComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/BaseGameVersionComponent.h"
#include "mc/entity/components/IsHorizontalPoseFlagComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
struct PassengerRenderingRidingOffsetComponent;
struct TickingSystemWithInfo;
// clang-format on

struct VanillaOffsetSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                 Filter<PlayerComponent, ActorMovementTickNeededComponent>,
                                 Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>,
                                 Write<VanillaOffsetComponent>,
                                 AddRemove<IsHorizontalPoseFlagComponent>,
                                 GlobalRead<BaseGameVersionComponent>,
                                 GlobalWrite<>,
                                 EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaOffsetSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~VanillaOffsetSystem();

    virtual void tick(::StrictExecutionContext<Filter<PlayerComponent, ActorMovementTickNeededComponent>, Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>, Write<VanillaOffsetComponent>, AddRemove<IsHorizontalPoseFlagComponent>, GlobalRead<BaseGameVersionComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem(bool const);

    MCNAPI static ::Vec3 getCameraPosition(::Actor const&, float);

    MCNAPI static ::Vec3 getCameraPosition(
        ::Vec3 const&,
        ::PassengerRenderingRidingOffsetComponent const*,
        ::VanillaOffsetComponent const*,
        float
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
            Filter<PlayerComponent, ActorMovementTickNeededComponent>,
            Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>,
            Write<VanillaOffsetComponent>,
            AddRemove<IsHorizontalPoseFlagComponent>,
            GlobalRead<BaseGameVersionComponent>,
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
