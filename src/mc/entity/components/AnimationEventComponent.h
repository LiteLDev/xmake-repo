#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/AnimationEventType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::AnimationEventType> mAnimation;
        ::ll::TypedStorage<1, 1, bool>                 mWasLastTickAnimated;
        ::ll::TypedStorage<1, 1, bool>                 mIsCurrentTickAnimated;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk5db3ef;
        ::ll::UntypedStorage<1, 1> mUnkd296f6;
        ::ll::UntypedStorage<1, 1> mUnkc892bb;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        AnimationStateData& operator=(AnimationStateData const&);
        AnimationStateData(AnimationStateData const&);
#endif // @header-generator platform
        AnimationStateData();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AnimationEventComponent::AnimationStateData>> mObservedAnimationStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationEventComponent::AnimationStateData>> mObservedAnimationStates;
#endif // @header-generator platform
    // NOLINTEND
};
