#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class ActorAnimationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>   mExpression;
    ::ll::TypedStorage<8, 40, ::HashedString>     mCommand;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> mCommandVersion;
    ::ll::TypedStorage<8, 24, std::string>        mEvent;
    ::ll::TypedStorage<4, 4, float>               mTime;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationEvent& operator=(ActorAnimationEvent const&);
    ActorAnimationEvent(ActorAnimationEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationEvent(float, std::string const&, ::CurrentCmdVersion const, ::MolangVersion const);

    MCNAPI void fire(::RenderParams&, ::Actor*) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float, std::string const&, ::CurrentCmdVersion const, ::MolangVersion const);
    // NOLINTEND
};
