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
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/PlayerIsSleepingFlagComponent.h"
#include "mc/entity/components/ActorMovementTickNeededComponent.h"
#include "mc/entity/components/BaseGameVersionComponent.h"
#include "mc/entity/components/IsHorizontalPoseFlagComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct PassengerRenderingRidingOffsetComponent;
#else // @header-generator platform
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BaseGameVersionComponent;
struct IsHorizontalPoseFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
#endif // @header-generator platform
struct TickingSystemWithInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct VanillaOffsetComponent;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct VanillaOffsetSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                 Filter<PlayerComponent, ActorMovementTickNeededComponent>,
                                 Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>,
                                 Write<VanillaOffsetComponent>,
                                 AddRemove<IsHorizontalPoseFlagComponent>,
                                 GlobalRead<BaseGameVersionComponent>,
                                 GlobalWrite<>,
                                 EntityFactoryT<>>> {
#else // @header-generator platform
struct VanillaOffsetSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                 ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
                                 ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
                                 ::Write<::VanillaOffsetComponent>,
                                 ::AddRemove<::IsHorizontalPoseFlagComponent>,
                                 ::GlobalRead<::BaseGameVersionComponent>,
                                 ::GlobalWrite<>,
                                 ::EntityFactoryT<>>> {
public:
    // VanillaOffsetSystem inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
        ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
        ::Write<::VanillaOffsetComponent>,
        ::AddRemove<::IsHorizontalPoseFlagComponent>,
        ::GlobalRead<::BaseGameVersionComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    VanillaOffsetSystem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~VanillaOffsetSystem();

    virtual void tick(::StrictExecutionContext<Filter<PlayerComponent, ActorMovementTickNeededComponent>, Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>, Write<VanillaOffsetComponent>, AddRemove<IsHorizontalPoseFlagComponent>, GlobalRead<BaseGameVersionComponent>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
            ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
            ::Write<::VanillaOffsetComponent>,
            ::AddRemove<::IsHorizontalPoseFlagComponent>,
            ::GlobalRead<::BaseGameVersionComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::TickingSystemWithInfo createSystem(bool const);
#else // @header-generator platform
    MCAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Vec3 getCameraPosition(::Actor const& actor, float alpha);
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
            Filter<PlayerComponent, ActorMovementTickNeededComponent>,
            Read<OffsetsComponent, ActorDataFlagComponent, PlayerIsSleepingFlagComponent>,
            Write<VanillaOffsetComponent>,
            AddRemove<IsHorizontalPoseFlagComponent>,
            GlobalRead<BaseGameVersionComponent>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
            ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
            ::Write<::VanillaOffsetComponent>,
            ::AddRemove<::IsHorizontalPoseFlagComponent>,
            ::GlobalRead<::BaseGameVersionComponent>,
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
