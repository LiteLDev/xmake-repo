#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
class Player;
class TaskGroup;
class TextFilteringProcessor;
// clang-format on

class TextFilteringUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool checkIfTextProcessorIsUnhealthy(std::vector<::Safety::TextFilteringEvent> const&);

    MCNAPI static bool checkIfTextProcessorIsUnhealthyAndSendChat(
        std::vector<::Safety::TextFilteringEvent> const&,
        ::gsl::not_null<PacketSender*>,
        ::NetworkIdentifier const&,
        ::SubClientId const&
    );

    MCNAPI static bool
    findChatFilteringEvent(std::vector<::Safety::TextFilteringEvent> const&, ::Safety::TextFilteringEvent);

    MCNAPI static ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processMessagesWithClientsideDebugTimingsAsync(
        ::Player const&,
        ::TaskGroup&,
        ::Bedrock::NonOwnerPointer<TextFilteringProcessor>,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&
    );
    // NOLINTEND
};
