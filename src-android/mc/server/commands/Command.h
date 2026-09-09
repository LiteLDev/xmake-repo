#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class CommandRunStats;
class CommandSelectorBase;
class Player;
// clang-format on

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mVersion;
    ::ll::TypedStorage<8, 8, ::CommandRegistry const*> mRegistry;
    ::ll::TypedStorage<4, 4, int>                      mCommandSymbol;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::TypedStorage<2, 2, ::CommandFlag>            mFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Command();

    virtual bool collectOptionalArguments();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Command();

    MCNAPI std::string getCommandName() const;

    MCNAPI ::CommandRegistry const& getRegistry() const;

    MCNAPI bool hasFlag(::CommandFlag) const;

    MCNAPI void run(::CommandOrigin const&, ::CommandOutput&) const;

    MCNAPI void sendTelemetry(::CommandOrigin const&, ::CommandOutput&) const;

    MCNAPI bool shouldSendTelemetry(::CommandOrigin const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Player* getPlayerFromOrigin(::CommandOrigin const&);

    MCNAPI static bool isTemplateLockedAction(::CommandOrigin const&);

    MCNAPI static bool isWildcard(::CommandSelectorBase const&);

    MCNAPI static bool shouldUseCommandOriginRotation(::CommandOrigin const&, int);

    MCNAPI static bool validData(int, ushort&, ::CommandOutput&);

    MCNAPI static bool validRange(int, int, int, ::CommandOutput&);

    MCNAPI static bool validRange(float, float, float, ::CommandOutput&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& WILDCARD_TOKEN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $collectOptionalArguments();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
