#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class ActorAnimationInfo;
class ActorSkeletalAnimation;
class HashedString;
// clang-format on

class ActorSkeletalAnimationPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationInfo>> mActorAnimationInfoPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSkeletalAnimationPtr(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> const&,
        ::HashedString const&
    );

    MCNAPI ::ActorSkeletalAnimation const* get() const;

    MCNAPI ::ActorSkeletalAnimation* get();

    MCNAPI bool isNull() const;

    MCNAPI ~ActorSkeletalAnimationPtr();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorSkeletalAnimationPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ActorAnimationGroup>> const&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
