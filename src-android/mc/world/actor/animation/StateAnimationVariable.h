#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MolangEntityVariable.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/animation/AnimationValueCurveKeyFrame.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class StateAnimationVariable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                         mVariableName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                         mInput;
    ::ll::TypedStorage<8, 24, std::vector<AnimationValueCurveKeyFrame>> mKeyFrames;
    // NOLINTEND

public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&);
    StateAnimationVariable(StateAnimationVariable const&);
    StateAnimationVariable();
};
