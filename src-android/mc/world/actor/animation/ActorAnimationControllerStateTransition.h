#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
namespace Json { class Value; }
// clang-format on

class ActorAnimationControllerStateTransition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mTargetStateName;
    ::ll::TypedStorage<8, 8, ulong>             mTargetStateIndex;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mTransitionExpression;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationControllerStateTransition& operator=(ActorAnimationControllerStateTransition const&);
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
    ActorAnimationControllerStateTransition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationControllerStateTransition(std::string const&, std::string const&, ::MolangVersion const);

    MCNAPI float shouldTransition(::RenderParams&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, ::MolangVersion const);
    // NOLINTEND
};
