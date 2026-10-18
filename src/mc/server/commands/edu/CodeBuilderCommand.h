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

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SubscriptionType : int {
        None       = 0,
        Scoreboard = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
    enum class CommandKeyword : uchar {
        None       = 0,
        Code       = 1,
        CodeStatus = 2,
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    enum class SubscriptionType : int {
        None       = 0,
        Scoreboard = 1,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::Action>                   mAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::CodeBuilderRuntimeAction> mRuntimeAction;
    ::ll::TypedStorage<4, 4, ::CodeBuilderCommand::SubscriptionType>         mSubscriptionType;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCode;
    ::ll::TypedStorage<1, 1, ::CodeBuilderCommand::CommandKeyword>           mCodeStatus;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                                             mPlayerTargets;
    ::ll::TypedStorage<8, 24, ::CommandRawText>                              mURL;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>                  mPlayerTargets;
    ::ll::TypedStorage<8, 32, ::CommandRawText>                              mURL;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                           mShouldOpenWindow;
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus>        mCodeExecStatus;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                   mScoreboardObjective;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                 mScoreboardObjective;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CodeBuilderCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
