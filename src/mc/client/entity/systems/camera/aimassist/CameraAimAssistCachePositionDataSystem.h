#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/vanilla_components/CamelFlagComponent.h"
#include "mc/deps/vanilla_components/HorseFlagComponent.h"
#include "mc/deps/vanilla_components/LocalPlayerComponent.h"
#include "mc/deps/vanilla_components/MobFlagComponent.h"
#include "mc/deps/vanilla_components/OffsetsComponent.h"
#include "mc/deps/vanilla_components/ParrotFlagComponent.h"
#include "mc/deps/vanilla_components/PlayerComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/MobBodyRotationComponent.h"
#include "mc/entity/components/PassengerComponent.h"
#include "mc/entity/components/PassengerRenderingRidingOffsetComponent.h"
#include "mc/entity/components/RenderRotationComponent.h"
#include "mc/entity/components/StandAnimationComponent.h"
#include "mc/entity/components/VanillaOffsetComponent.h"
#include "mc/entity/components/VehicleComponent.h"
#include "mc/entity/components/camera/aimassist/CameraAimAssistCachedPositionDataComponent.h"
#include "mc/entity/components/camera/aimassist/CameraAimAssistTickComponent.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class CameraAimAssistCachePositionDataSystem : public ::IStrictTickingSystem<StrictExecutionContext<
                                                   Filter<
                                                       LocalPlayerComponent,
                                                       HorseFlagComponent,
                                                       MobFlagComponent,
                                                       ParrotFlagComponent,
                                                       VehicleComponent,
                                                       CamelFlagComponent,
                                                       PlayerComponent>,
                                                   Read<
                                                       StateVectorComponent,
                                                       ActorRotationComponent,
                                                       CameraAimAssistTickComponent,
                                                       MobBodyRotationComponent,
                                                       PassengerComponent,
                                                       RenderRotationComponent,
                                                       StandAnimationComponent,
                                                       ActorDataFlagComponent,
                                                       AABBShapeComponent,
                                                       OffsetsComponent,
                                                       VanillaOffsetComponent,
                                                       PassengerRenderingRidingOffsetComponent>,
                                                   Write<CameraAimAssistCachedPositionDataComponent>,
                                                   AddRemove<>,
                                                   GlobalRead<>,
                                                   GlobalWrite<>,
                                                   EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CameraAimAssistCachePositionDataSystem();

    virtual void tick(::StrictExecutionContext<Filter<LocalPlayerComponent, HorseFlagComponent, MobFlagComponent, ParrotFlagComponent, VehicleComponent, CamelFlagComponent, PlayerComponent>, Read<StateVectorComponent, ActorRotationComponent, CameraAimAssistTickComponent, MobBodyRotationComponent, PassengerComponent, RenderRotationComponent, StandAnimationComponent, ActorDataFlagComponent, AABBShapeComponent, OffsetsComponent, VanillaOffsetComponent, PassengerRenderingRidingOffsetComponent>, Write<CameraAimAssistCachedPositionDataComponent>, AddRemove<>, GlobalRead<>, GlobalWrite<>, EntityFactoryT<>>&);
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
            Filter<
                LocalPlayerComponent,
                HorseFlagComponent,
                MobFlagComponent,
                ParrotFlagComponent,
                VehicleComponent,
                CamelFlagComponent,
                PlayerComponent>,
            Read<
                StateVectorComponent,
                ActorRotationComponent,
                CameraAimAssistTickComponent,
                MobBodyRotationComponent,
                PassengerComponent,
                RenderRotationComponent,
                StandAnimationComponent,
                ActorDataFlagComponent,
                AABBShapeComponent,
                OffsetsComponent,
                VanillaOffsetComponent,
                PassengerRenderingRidingOffsetComponent>,
            Write<CameraAimAssistCachedPositionDataComponent>,
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
#else // @header-generator platform
class CameraAimAssistCachePositionDataSystem {};
#endif // @header-generator platform
