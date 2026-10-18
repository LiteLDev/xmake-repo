#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/safety/TextFilteringEvent.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    MessagingCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessagingCommand();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MessagingCommand(bool, bool);

    MCNAPI bool checkChatPermissions(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI bool checkChatPermissions(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool checkIfTextProcessorIsHealthyAndSendChatIfNot(
        ::CommandOriginIdentity const&,
        ::Level const&,
        std::vector<::Safety::TextFilteringEvent> const&
#else // @header-generator platform
    MCAPI static bool checkIfTextProcessorIsHealthyAndSendChatIfNot(
        ::CommandOriginIdentity const&                     identity,
        ::Level const&                                     level,
        ::std::vector<::Safety::TextFilteringEvent> const& events
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
