#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

struct ActorAttackEvent {
public:
    // ActorAttackEvent inner types define
    enum class AttackType : int {
        Melee  = 0,
        Ranged = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>               mEntity;
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>               mTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mEntity;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>               mTarget;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mDamage;
    ::ll::TypedStorage<4, 4, ::ActorAttackEvent::AttackType> mAttackType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorAttackEvent& operator=(ActorAttackEvent const&);
    ActorAttackEvent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorAttackEvent();
#else // @header-generator platform
    MCAPI ~ActorAttackEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
