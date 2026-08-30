#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandRawText.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Player;
// clang-format on

class ResourceUriCommand : public ::Command {
public:
    // ResourceUriCommand inner types define
    enum class ActionType : int {
        Clear   = 0,
        UriOnly = 1,
        Named   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceUriCommand::ActionType> mAction;
    ::ll::TypedStorage<8, 24, std::string>                     mName;
    ::ll::TypedStorage<8, 24, ::CommandRawText>                mLink;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceUriCommand();

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
