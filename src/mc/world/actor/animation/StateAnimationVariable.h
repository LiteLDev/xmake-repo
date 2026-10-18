#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangEntityVariable.h"
#include "mc/util/molang/ExpressionNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/AnimationValueCurveKeyFrame.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class RenderParams;
namespace Json { class Value; }
#else // @header-generator platform
class AnimationValueCurveKeyFrame;
#endif // @header-generator platform
// clang-format on

class StateAnimationVariable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                         mVariableName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                         mInput;
    ::ll::TypedStorage<8, 24, std::vector<AnimationValueCurveKeyFrame>> mKeyFrames;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::MolangEntityVariable>                       mVariableName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                             mInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationValueCurveKeyFrame>> mKeyFrames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&);
    StateAnimationVariable(StateAnimationVariable const&);
    StateAnimationVariable();
#else // @header-generator platform
#endif // @header-generator platform
};
