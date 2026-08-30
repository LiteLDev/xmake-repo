#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacketPayload.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
class Player;
namespace Json { class Value; }
// clang-format on

class TitleRawCommand : public ::MessagingCommand {
public:
    // TitleRawCommand inner types define
    enum class Mode : int {
        Clear     = 0,
        Reset     = 1,
        Title     = 2,
        Subtitle  = 3,
        ActionBar = 4,
        Times     = 5,
        Undefined = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TitleRawCommand::Mode> mMode;
    ::ll::UntypedStorage<8, 200>                      mTargets;
    ::ll::UntypedStorage<8, 16>                       mMessage;
    ::ll::TypedStorage<4, 4, int>                     mFadeIn;
    ::ll::TypedStorage<4, 4, int>                     mStay;
    ::ll::TypedStorage<4, 4, int>                     mFadeOut;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TitleRawCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _sendTitlePacketTextObject(
        ::SetTitlePacketPayload::TitleType,
        ::CommandOrigin const&,
        ::CommandOutput&,
        ::CommandSelectorResults<Player> const&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
