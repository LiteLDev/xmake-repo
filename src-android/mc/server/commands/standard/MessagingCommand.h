#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class Level;
struct CommandOriginIdentity;
// clang-format on

class MessagingCommand : public ::ServerCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRequireChatPerms;
    ::ll::TypedStorage<1, 1, bool> mRequireTellPerms;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagingCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessagingCommand();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessagingCommand(bool, bool);

    MCNAPI bool checkChatPermissions(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool checkIfTextProcessorIsHealthyAndSendChatIfNot(
        ::CommandOriginIdentity const&,
        ::Level const&,
        std::vector<::Safety::TextFilteringEvent> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
