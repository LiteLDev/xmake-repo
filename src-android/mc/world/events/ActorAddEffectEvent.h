#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/effect/MobEffectInstance.h"

struct ActorAddEffectEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 32>  mEntity;
    ::ll::UntypedStorage<8, 128> mMobEffect;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&);
    ActorAddEffectEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAddEffectEvent(::ActorAddEffectEvent&&);

    MCNAPI ~ActorAddEffectEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAddEffectEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
