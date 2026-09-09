#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/animation/BoneAnimationPlayer.h"
#include "mc/world/actor/animation/BoneOrientation.h"

struct AtomicEntityAnimStateComponent {
public:
    // AtomicEntityAnimStateComponent inner types declare
    // clang-format off
    struct AnimCursor;
    struct StateCursors;
    struct ControllerPlayback;
    // clang-format on

    // AtomicEntityAnimStateComponent inner types define
    struct AnimCursor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                   mAnimationName;
        ::ll::TypedStorage<4, 4, float>                             mAnimTime;
        ::ll::TypedStorage<1, 1, bool>                              mFinished;
        ::ll::TypedStorage<8, 24, std::vector<BoneAnimationPlayer>> mBoneAnimationPlayers;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnimCursor();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AnimCursor(::AtomicEntityAnimStateComponent::AnimCursor const&);

        MCNAPI ::AtomicEntityAnimStateComponent::AnimCursor& operator=(::AtomicEntityAnimStateComponent::AnimCursor&&);

        MCNAPI ~AnimCursor();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AtomicEntityAnimStateComponent::AnimCursor const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StateCursors {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimStateComponent::AnimCursor>> mAnimations;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateCursors& operator=(StateCursors const&);
        StateCursors(StateCursors const&);
    };

    struct ControllerPlayback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                                            mControllerName;
        ::ll::TypedStorage<8, 8, ulong>                                                      mCurrentStateIndex;
        ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimStateComponent::StateCursors>> mStates;
        // NOLINTEND

    public:
        // prevent constructor by default
        ControllerPlayback& operator=(ControllerPlayback const&);
        ControllerPlayback(ControllerPlayback const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BoneOrientation>>                                    mBoneOrientations;
    ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimStateComponent::ControllerPlayback>> mControllers;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicEntityAnimStateComponent& operator=(AtomicEntityAnimStateComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AtomicEntityAnimStateComponent(::AtomicEntityAnimStateComponent const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AtomicEntityAnimStateComponent const&);
    // NOLINTEND
};
