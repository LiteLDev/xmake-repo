#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Player;
// clang-format on

class DialogueCommand : public ::Command {
public:
    // DialogueCommand inner types define
    enum class Action : int {
        Open   = 0,
        Change = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DialogueCommand::Action> mAction;
    ::ll::UntypedStorage<8, 200>                        mNPCTarget;
    ::ll::UntypedStorage<8, 200>                        mPlayerTargets;
    ::ll::TypedStorage<8, 24, std::string>              mSceneName;
    ::ll::TypedStorage<1, 1, bool>                      mHasPlayers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DialogueCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
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
