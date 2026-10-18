#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RenderParams;
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ActorAnimationControllerStateTransition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mTargetStateName;
    ::ll::TypedStorage<8, 8, ulong>             mTargetStateIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>    mTargetStateName;
    ::ll::TypedStorage<8, 8, uint64>            mTargetStateIndex;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mTransitionExpression;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorAnimationControllerStateTransition& operator=(ActorAnimationControllerStateTransition const&);
    ActorAnimationControllerStateTransition(ActorAnimationControllerStateTransition const&);
#else // @header-generator platform
#endif // @header-generator platform
    ActorAnimationControllerStateTransition();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorAnimationControllerStateTransition(std::string const&, std::string const&, ::MolangVersion const);

    MCNAPI float shouldTransition(::RenderParams&) const;
#else // @header-generator platform
    MCAPI ActorAnimationControllerStateTransition(
        ::std::string const&  targetStateName,
        ::std::string const&  expression,
        ::MolangVersion const molangVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::string const&, ::MolangVersion const);
#else // @header-generator platform
    MCAPI void*
    $ctor(::std::string const& targetStateName, ::std::string const& expression, ::MolangVersion const molangVersion);
#endif // @header-generator platform
    // NOLINTEND
};
