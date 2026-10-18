#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class ActorOwnerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Actor>> mActor;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorOwnerComponent& operator=(ActorOwnerComponent const&);
    ActorOwnerComponent(ActorOwnerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorOwnerComponent(::ActorOwnerComponent&&);

    MCNAPI explicit ActorOwnerComponent(std::unique_ptr<Actor>);

    MCNAPI ::Actor& getActor();

    MCNAPI ::Actor& getActor() const;

    MCNAPI ::ActorOwnerComponent& operator=(::ActorOwnerComponent&&);

    MCNAPI ~ActorOwnerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorOwnerComponent&&);

    MCNAPI void* $ctor(std::unique_ptr<Actor>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Actor>> mActor;
#endif // @header-generator platform
    // NOLINTEND
};
