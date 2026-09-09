#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/commands/Command.h"

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
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void kickPlayerDueToFlooding(
        ::Bedrock::NonOwnerPointer<ServerNetworkHandler>,
        ::Player*,
        ::IMinecraftEventing&,
        std::string const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Minecraft*& mGame();

    MCNAPI static ::Bedrock::NonOwnerPointer<TextFilteringProcessor>& mTextFilteringProcessor();
    // NOLINTEND
};
