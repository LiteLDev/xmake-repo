#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/effect/MobEffectInstance.h"

struct ActorRemoveEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 32>  mEntity;
    ::ll::UntypedStorage<8, 128> mMobEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&);
    ActorRemoveEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorRemoveEffectEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>            mEntity;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance const> mMobEffect;
#endif // @header-generator platform
    // NOLINTEND
};
