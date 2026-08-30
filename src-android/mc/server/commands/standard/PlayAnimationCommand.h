#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class PlayAnimationCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>           mTargets;
    ::ll::TypedStorage<8, 24, std::string> mAnimation;
    ::ll::TypedStorage<8, 24, std::string> mNextState;
    ::ll::TypedStorage<8, 24, std::string> mStopExpression;
    ::ll::TypedStorage<8, 24, std::string> mController;
    ::ll::TypedStorage<4, 4, float>        mBlendOutTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayAnimationCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::MolangVersion const& mStopExpressionVersion();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
