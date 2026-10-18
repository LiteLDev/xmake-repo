#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class EntityContext;
// clang-format on

struct ActorKilledEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                   mActorContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorKilledEvent& operator=(ActorKilledEvent const&);
    ActorKilledEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorKilledEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActorContext;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
#endif // @header-generator platform
    // NOLINTEND
};
