#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacketPayload.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class EntityContext;
class Level;
class Player;
// clang-format on

class TitleCommand : public ::MessagingCommand {
public:
    // TitleCommand inner types define
    enum class Mode : int {
        Clear     = 0,
        Reset     = 1,
        Title     = 2,
        Subtitle  = 3,
        ActionBar = 4,
        Times     = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TitleCommand::Mode> mMode;
    ::ll::UntypedStorage<8, 200>                   mTargets;
    ::ll::TypedStorage<8, 32, ::CommandMessage>    mMessage;
    ::ll::TypedStorage<4, 4, int>                  mFadeIn;
    ::ll::TypedStorage<4, 4, int>                  mStay;
    ::ll::TypedStorage<4, 4, int>                  mFadeOut;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TitleCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _sendEvent(
        ::Level&,
        std::string const&,
        std::vector<EntityContext> const&,
        std::string const&,
        std::optional<std::string> const&,
        ::SetTitlePacketPayload::TitleType const
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
