#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
// clang-format on

struct ActorDiedEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                    mEntity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorDamageSource>> mSource;
    ::ll::TypedStorage<4, 4, ::ActorType>                         mDamageChildType;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDiedEvent& operator=(ActorDiedEvent const&);
    ActorDiedEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDiedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                        mEntity;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorDamageSource>> mSource;
    ::ll::TypedStorage<4, 4, ::ActorType>                             mDamageChildType;
#endif // @header-generator platform
    // NOLINTEND
};
