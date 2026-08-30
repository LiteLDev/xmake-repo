#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/AnimationEventType.h"

class AnimationEventComponent {
public:
    // AnimationEventComponent inner types declare
    // clang-format off
    struct AnimationStateData;
    // clang-format on

    // AnimationEventComponent inner types define
    struct AnimationStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::AnimationEventType> mAnimation;
        ::ll::TypedStorage<1, 1, bool>                 mWasLastTickAnimated;
        ::ll::TypedStorage<1, 1, bool>                 mIsCurrentTickAnimated;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnimationStateData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AnimationEventComponent::AnimationStateData>> mObservedAnimationStates;
    // NOLINTEND
};
