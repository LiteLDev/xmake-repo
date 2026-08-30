#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
// clang-format on

struct ActorDieEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                   mEntity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorDamageSource>> mDamageSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDieEvent& operator=(ActorDieEvent const&);
    ActorDieEvent(ActorDieEvent const&);
    ActorDieEvent();
};
