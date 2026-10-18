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
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/LevelComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/SoundEventRequestQueueComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
struct SoundEventSystemImpl : public ::IStrictTickingSystem<StrictExecutionContext<
                                  Filter<
                                      HorseFlagComponent,
                                      MobFlagComponent,
                                      ParrotFlagComponent,
                                      VehicleComponent,
                                      CamelFlagComponent,
                                      PlayerComponent>,
                                  Read<
                                      ActorRotationComponent,
                                      MobBodyRotationComponent,
                                      PassengerComponent,
                                      RenderRotationComponent,
                                      StandAnimationComponent,
                                      ActorDataFlagComponent,
                                      AABBShapeComponent,
                                      OffsetsComponent,
                                      VanillaOffsetComponent,
                                      PassengerRenderingRidingOffsetComponent>,
                                  Write<LevelComponent, SoundEventRequestQueueComponent>,
                                  AddRemove<>,
                                  GlobalRead<>,
                                  GlobalWrite<>,
                                  EntityFactoryT<>>> {
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelComponent;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct SoundEventRequestQueueComponent;
struct StandAnimationComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct SoundEventSystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                                  ::Filter<
                                      ::HorseFlagComponent,
                                      ::MobFlagComponent,
                                      ::ParrotFlagComponent,
                                      ::VehicleComponent,
                                      ::CamelFlagComponent,
                                      ::PlayerComponent>,
                                  ::Read<
                                      ::ActorRotationComponent,
                                      ::MobBodyRotationComponent,
                                      ::PassengerComponent,
                                      ::RenderRotationComponent,
                                      ::StandAnimationComponent,
                                      ::ActorDataFlagComponent,
                                      ::AABBShapeComponent,
                                      ::OffsetsComponent,
                                      ::VanillaOffsetComponent,
                                      ::PassengerRenderingRidingOffsetComponent>,
                                  ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
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
    virtual ~SoundEventSystemImpl();

    virtual void tick(::StrictExecutionContext<Filter<HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<ActorRotationComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<LevelComponent, SoundEventRequestQueueComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
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
            Filter<
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent>,
            Read<
                ActorRotationComponent,
                MobBodyRotationComponent,
                PassengerComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                ActorDataFlagComponent,
                AABBShapeComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<LevelComponent, SoundEventRequestQueueComponent>,
            AddRemove<>,
            GlobalRead<>,
            GlobalWrite<>,
            EntityFactoryT<>>&
#else // @header-generator platform
            ::Filter<
                ::HorseFlagComponent,
                ::MobFlagComponent,
                ::ParrotFlagComponent,
                ::VehicleComponent,
                ::CamelFlagComponent,
                ::PlayerComponent>,
            ::Read<
                ::ActorRotationComponent,
                ::MobBodyRotationComponent,
                ::PassengerComponent,
                ::RenderRotationComponent,
                ::StandAnimationComponent,
                ::ActorDataFlagComponent,
                ::AABBShapeComponent,
                ::OffsetsComponent,
                ::VanillaOffsetComponent,
                ::PassengerRenderingRidingOffsetComponent>,
            ::Write<::LevelComponent, ::SoundEventRequestQueueComponent>,
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
