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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 200>                mPlayers;
    ::ll::TypedStorage<8, 32, ::CommandMessage> mMessage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mPlayers;
    ::ll::TypedStorage<8, 32, ::CommandMessage>             mMessage;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~KickCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _canKickPlayerOrGenerateFailureOutput(::Player const&, ::CommandOutput&, ::Level*) const;

    MCNAPI void _generateSuccessOutput(::CommandOutput&, std::string const&, std::string const&) const;
#else // @header-generator platform
    MCAPI bool
    _canKickPlayerOrGenerateFailureOutput(::Player const& player, ::CommandOutput& output, ::Level* level) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _kickPlayer(::Minecraft*, ::Player const&, std::string const&, std::optional<std::string>);
#else // @header-generator platform
    MCAPI static void
    _generateSuccessOutput(::CommandOutput& output, ::std::string const& playerNameTag, ::std::string const& reason);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI static void _kickPlayer(
        ::Minecraft*                   game,
        ::Player const&                matchingPlayer,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
