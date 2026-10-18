#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/events/TextProcessingEventOrigin.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/safety/TextFilteringEvent.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
class Player;
class TaskGroup;
class TextFilteringProcessor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Safety { struct TextFilterResult; }
#endif // @header-generator platform
// clang-format on

class TextFilteringUtils {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool checkIfTextProcessorIsUnhealthy(std::vector<::Safety::TextFilteringEvent> const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static bool checkIfTextProcessorIsUnhealthyAndSendChat(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<::Safety::TextFilteringEvent> const&,
        ::gsl::not_null<PacketSender*>,
        ::NetworkIdentifier const&,
        ::SubClientId const&
#else // @header-generator platform
        ::std::vector<::Safety::TextFilteringEvent> const& events,
        ::gsl::not_null<::PacketSender*>                   packetSender,
        ::NetworkIdentifier const&                         source,
        ::SubClientId const&                               subClientId
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static bool
    findChatFilteringEvent(std::vector<::Safety::TextFilteringEvent> const&, ::Safety::TextFilteringEvent);
#else // @header-generator platform
#endif // @header-generator platform

    MCNAPI static ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processMessagesWithClientsideDebugTimingsAsync(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Player const&,
        ::TaskGroup&,
        ::Bedrock::NonOwnerPointer<TextFilteringProcessor>,
        ::TextProcessingEventOrigin,
        std::vector<std::string> const&
#else // @header-generator platform
        ::Player const&                                      player,
        ::TaskGroup&                                         taskGroup,
        ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> textFilteringProcessor,
        ::TextProcessingEventOrigin                          processOrigin,
        ::std::vector<::std::string> const&                  messages
#endif // @header-generator platform
    );
    // NOLINTEND
};
