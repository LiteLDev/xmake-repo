#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct ChatMessage; }
// clang-format on

namespace Social {

class IChatChannel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual std::string const& getComposedMessage() const = 0;

    virtual void setComposedMessage(std::string const&) = 0;

    virtual void sendComposedMessage() = 0;

    virtual void sendMessage(std::string const&) = 0;

    virtual void insertStatusMessage(std::string const&) = 0;

    virtual void reportChatOpen(bool) = 0;

    virtual bool hasUnreadMessages() const = 0;

    virtual uint getTotalMessagesCount() const = 0;

    virtual std::deque<Social::ChatMessage> const& getMessages() const = 0;

    virtual ::Social::ChatMessage getMessageFromOrder(uint) const = 0;

    virtual uint getFirstMessageOrder() const = 0;

    virtual int getLastMessageOrder() const = 0;

    virtual ::Bedrock::PubSub::Connector<void(const std::string&)>& getComposedMessageChangedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(const Social::ChatMessage&)>& getChatReceivedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(bool)>& getUnreadMessagesChangedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(uint)>& getTotalMessagesChangedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(uint)>& getFirstMessageOrderChangedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(int)>& getLastMessageOrderChangedConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(bool)>& getIsJoinedChangedConnector() = 0;

    virtual ::Bedrock::Threading::SharedAsync<std::error_code> joinChannel() = 0;

    virtual ::Bedrock::Threading::SharedAsync<std::error_code> leaveChannel() = 0;

    virtual bool isJoined() const = 0;
    // NOLINTEND
};

} // namespace Social
