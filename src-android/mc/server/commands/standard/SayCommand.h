#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
struct CommandOriginIdentity;
// clang-format on

class SayCommand : public ::MessagingCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CommandMessage> mMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SayCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _sendEvent(::Level&, std::string const&, std::string const&, std::optional<std::string> const&);

    MCNAPI static void _sendMessage(
        std::string const&,
        std::optional<std::string> const&,
        std::string const&,
        ::CommandOriginIdentity const&,
        ::Level&
    );

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
