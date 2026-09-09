#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Minecraft;
class Player;
// clang-format on

class KickCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200>                mPlayers;
    ::ll::TypedStorage<8, 32, ::CommandMessage> mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KickCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canKickPlayerOrGenerateFailureOutput(::Player const&, ::CommandOutput&, ::Level*) const;

    MCNAPI void _generateSuccessOutput(::CommandOutput&, std::string const&, std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _kickPlayer(::Minecraft*, ::Player const&, std::string const&, std::optional<std::string>);

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
