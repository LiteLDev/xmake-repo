#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationController;
class ActorSkeletalAnimation;
class ExpressionNode;
// clang-format on

namespace AtomicEntityAnimation {

struct ResolvedAnimationResources {
public:
    // ResolvedAnimationResources inner types declare
    // clang-format off
    struct AnimRef;
    struct StateRefs;
    struct ControllerSlot;
    // clang-format on

    // ResolvedAnimationResources inner types define
    struct AnimRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorSkeletalAnimation const*> mAnimation;
        ::ll::TypedStorage<8, 8, ::ExpressionNode const*>         mBlendExpr;
        ::ll::TypedStorage<8, 40, ::HashedString>                 mAnimationName;
        ::ll::TypedStorage<8, 24, std::vector<ulong>>             mBoneIndexCache;
        // NOLINTEND
    };

    struct StateRefs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimation::ResolvedAnimationResources::AnimRef>> mAnimations;
        // NOLINTEND
    };

    struct ControllerSlot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                   mScriptName;
        ::ll::TypedStorage<8, 8, ::ActorAnimationController const*> mController;
        ::ll::TypedStorage<8, 8, ::ExpressionNode const*>           mControllerBlendExpr;
        ::ll::TypedStorage<8, 8, ulong>                             mInitialStateIndex;
        ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimation::ResolvedAnimationResources::StateRefs>> mStates;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ExpressionNode const*> mPreAnimation;
    ::ll::TypedStorage<8, 24, std::vector<AtomicEntityAnimation::ResolvedAnimationResources::ControllerSlot>> mSlots;
    // NOLINTEND
};

} // namespace AtomicEntityAnimation
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
