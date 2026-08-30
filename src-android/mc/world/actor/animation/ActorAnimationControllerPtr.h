#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationController;
class ActorAnimationControllerGroup;
class ActorAnimationControllerInfo;
class HashedString;
// clang-format on

class ActorAnimationControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerInfo>> mActorAnimationControllerInfoPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerPtr(::ActorAnimationControllerGroup&, ::HashedString const&);

    MCNAPI ::ActorAnimationController const* get() const;

    MCNAPI bool isNull() const;

    MCNAPI ~ActorAnimationControllerPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorAnimationControllerPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorAnimationControllerGroup&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
