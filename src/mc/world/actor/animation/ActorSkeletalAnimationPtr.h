#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class ActorAnimationInfo;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorSkeletalAnimation;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
// clang-format on

class ActorSkeletalAnimationPtr {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationInfo>> mActorAnimationInfoPtr;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationInfo>> mActorAnimationInfoPtr;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorSkeletalAnimationPtr();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorSkeletalAnimationPtr(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> const&,
        ::HashedString const&
#else // @header-generator platform
    MCAPI ActorSkeletalAnimationPtr(
        ::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> const& animationGroup,
        ::HashedString const&                                       name
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorSkeletalAnimation const* get() const;

    MCNAPI ::ActorSkeletalAnimation* get();

    MCNAPI bool isNull() const;

    MCNAPI ~ActorSkeletalAnimationPtr();
#else // @header-generator platform
    MCAPI ~ActorSkeletalAnimationPtr();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActorSkeletalAnimationPtr const& NONE();
#else // @header-generator platform
    MCAPI static ::ActorSkeletalAnimationPtr const& NONE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> const&, ::HashedString const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::ActorAnimationGroup> const& animationGroup, ::HashedString const& name);
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
