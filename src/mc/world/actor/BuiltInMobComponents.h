#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeathTickingComponent;
struct MobAnimationComponent;
struct MobHurtTimeComponent;
// clang-format on

struct BuiltInMobComponents {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<DeathTickingComponent*>> mDeathTickingComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<MobAnimationComponent*>> mMobAnimationComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<MobHurtTimeComponent*>>  mMobHurtTimeComponent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::DeathTickingComponent*>> mDeathTickingComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::MobAnimationComponent*>> mMobAnimationComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::MobHurtTimeComponent*>>  mMobHurtTimeComponent;
#endif // @header-generator platform
    // NOLINTEND
};
