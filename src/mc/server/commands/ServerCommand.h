#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/commands/Command.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/safety/TextFilteringEvent.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class IMinecraftEventing;
class Minecraft;
class Player;
class ServerNetworkHandler;
class TextFilteringProcessor;
// clang-format on

class ServerCommand : public ::Command {
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isTextProcessorEnabled() const;

    MCNAPI bool tryToFilterTextWithRemoteFilter(
        ::CommandOrigin const&,
        ::CommandOutput&,
        std::vector<std::string> const&,
        ::TextProcessingEventOrigin const&,
        std::function<void(
            const std::vector<std::string>&,
            const std::vector<std::string>&,
            const std::vector<::Safety::TextFilteringEvent>&
        )>
#else // @header-generator platform
    MCAPI bool tryToFilterTextWithRemoteFilter(
        ::CommandOrigin const&              origin,
        ::CommandOutput&                    output,
        ::std::vector<::std::string> const& text,
        ::TextProcessingEventOrigin const&  textOrigin,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>                                  callback
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void kickPlayerDueToFlooding(
        ::Bedrock::NonOwnerPointer<ServerNetworkHandler>,
        ::Player*,
        ::IMinecraftEventing&,
        std::string const&
#else // @header-generator platform
    MCAPI static void kickPlayerDueToFlooding(
        ::Bedrock::NonOwnerPointer<::ServerNetworkHandler> serverNetworkHandler,
        ::Player*                                          player,
        ::IMinecraftEventing&                              eventing,
        ::std::string const&                               message
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Minecraft*& mGame();
#else // @header-generator platform
    MCAPI static ::Minecraft*& mGame();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::NonOwnerPointer<TextFilteringProcessor>& mTextFilteringProcessor();
#else // @header-generator platform
    MCAPI static ::Bedrock::NonOwnerPointer<::TextFilteringProcessor>& mTextFilteringProcessor();
#endif // @header-generator platform
    // NOLINTEND
};
