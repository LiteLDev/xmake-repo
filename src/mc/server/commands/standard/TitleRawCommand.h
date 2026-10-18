#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/network/packet/SetTitlePacketPayload.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/standard/MessagingCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TitleRawCommand::Mode> mMode;
    ::ll::UntypedStorage<8, 200>                      mTargets;
    ::ll::UntypedStorage<8, 16>                       mMessage;
    ::ll::TypedStorage<4, 4, int>                     mFadeIn;
    ::ll::TypedStorage<4, 4, int>                     mStay;
    ::ll::TypedStorage<4, 4, int>                     mFadeOut;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TitleRawCommand::Mode>       mMode;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 16, ::Json::Value>                mMessage;
    ::ll::TypedStorage<4, 4, int>                           mFadeIn;
    ::ll::TypedStorage<4, 4, int>                           mStay;
    ::ll::TypedStorage<4, 4, int>                           mFadeOut;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TitleRawCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _sendTitlePacketTextObject(
        ::SetTitlePacketPayload::TitleType,
        ::CommandOrigin const&,
        ::CommandOutput&,
        ::CommandSelectorResults<Player> const&
#else // @header-generator platform
    MCAPI bool _sendTitlePacketTextObject(
        ::SetTitlePacketPayload::TitleType        type,
        ::CommandOrigin const&                    origin,
        ::CommandOutput&                          output,
        ::CommandSelectorResults<::Player> const& targets
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

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
