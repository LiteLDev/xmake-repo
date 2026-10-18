#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct ActorDieEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                   mEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDamageSource>> mDamageSource;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                       mEntity;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDamageSource>> mDamageSource;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorDieEvent& operator=(ActorDieEvent const&);
    ActorDieEvent(ActorDieEvent const&);
    ActorDieEvent();
#else // @header-generator platform
#endif // @header-generator platform
};
