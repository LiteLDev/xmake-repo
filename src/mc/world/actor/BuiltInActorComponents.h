#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/ActorWalkAnimationComponent.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorRotationComponent;
struct ActorWalkAnimationComponent;
struct StateVectorComponent;
// clang-format on

struct BuiltInActorComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<StateVectorComponent*>>        mStateVectorComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<AABBShapeComponent*>>          mAABBShapeComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorRotationComponent*>>      mActorRotationComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ActorWalkAnimationComponent*>> mWalkAnimationComponent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::StateVectorComponent*>>        mStateVectorComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::AABBShapeComponent*>>          mAABBShapeComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorRotationComponent*>>      mActorRotationComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorWalkAnimationComponent*>> mWalkAnimationComponent;
#endif // @header-generator platform
    // NOLINTEND
};
