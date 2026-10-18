#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorAnimationController;
#else // @header-generator platform
#endif // @header-generator platform
class ActorAnimationControllerGroup;
class ActorAnimationControllerInfo;
class HashedString;
// clang-format on

class ActorAnimationControllerPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerInfo>> mActorAnimationControllerInfoPtr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerInfo>> mActorAnimationControllerInfoPtr;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorAnimationControllerPtr();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorAnimationControllerPtr(::ActorAnimationControllerGroup&, ::HashedString const&);
#else // @header-generator platform
    MCAPI ActorAnimationControllerPtr(::ActorAnimationControllerGroup& group, ::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorAnimationController const* get() const;

    MCNAPI bool isNull() const;

    MCNAPI ~ActorAnimationControllerPtr();
#else // @header-generator platform
    MCAPI ~ActorAnimationControllerPtr();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorAnimationControllerPtr const& NONE();
#else // @header-generator platform
    MCAPI static ::ActorAnimationControllerPtr const& NONE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorAnimationControllerGroup&, ::HashedString const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorAnimationControllerGroup& group, ::HashedString const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
