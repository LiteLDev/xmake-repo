#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class CodeBuilderCommand : public ::Command {
public:
    // CodeBuilderCommand inner types define
    enum class Action : int {
        Navigate      = 0,
        Reset         = 1,
        Subscribe     = 2,
        Unsubscribe   = 3,
        RuntimeAction = 4,
        Check         = 5,
    };

    enum class CodeBuilderRuntimeAction : int {
        None  = 0,
        Start = 1,
        Stop  = 2,
        Pause = 3,
    };

    enum class SubscriptionType : int {
        None       = 0,
        Scoreboard = 1,
    };

    enum class CommandKeyword : uchar {
        None       = 0,
        Code       = 1,
        CodeStatus = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::Action>                   mAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::CodeBuilderRuntimeAction> mRuntimeAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::SubscriptionType>         mSubscriptionType;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCode;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCodeStatus;
    ::ll::UntypedStorage<8, 200>                                             mPlayerTargets;
    ::ll::TypedStorage<8, 24, ::CommandRawText>                              mURL;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldOpenWindow;
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus>        mCodeExecStatus;
    ::ll::TypedStorage<8, 24, std::string>                                   mScoreboardObjective;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodeBuilderCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&);
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
