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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TitleCommand::Mode> mMode;
    ::ll::UntypedStorage<8, 200>                   mTargets;
    ::ll::TypedStorage<8, 32, ::CommandMessage>    mMessage;
    ::ll::TypedStorage<4, 4, int>                  mFadeIn;
    ::ll::TypedStorage<4, 4, int>                  mStay;
    ::ll::TypedStorage<4, 4, int>                  mFadeOut;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TitleCommand::Mode>          mMode;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>> mTargets;
    ::ll::TypedStorage<8, 32, ::CommandMessage>             mMessage;
    ::ll::TypedStorage<4, 4, int>                           mFadeIn;
    ::ll::TypedStorage<4, 4, int>                           mStay;
    ::ll::TypedStorage<4, 4, int>                           mFadeOut;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TitleCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _sendEvent(
        ::Level&,
        std::string const&,
        std::vector<EntityContext> const&,
        std::string const&,
        std::optional<std::string> const&,
        ::SetTitlePacketPayload::TitleType const
#else // @header-generator platform
    MCAPI static bool _sendEvent(
        ::Level&                                 level,
        ::std::string const&                     sender,
        ::std::vector<::EntityContext> const&    targets,
        ::std::string const&                     title,
        ::std::optional<::std::string> const&    filteredTitle,
        ::SetTitlePacketPayload::TitleType const titleType
#endif // @header-generator platform
    );

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
