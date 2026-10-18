#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/social/ChatMessage.h"
#include "mc/social/IChatChannel.h"

// auto generated forward declare list
// clang-format off
class SignalingConsumerSignInOwner;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace JsonRpc { class PartyChatJsonRpcComponent; }
namespace Parties { class IPartyProvider; }
namespace Social { class SocialDrawerManager; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyChat : public ::Social::IChatChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                    mJoinTask;
    ::ll::UntypedStorage<8, 16>                                                    mLeaveTask;
    ::ll::TypedStorage<8, 8, ::Parties::IPartyProvider&>                           mPartyProvider;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>                         mUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::PartyChatJsonRpcComponent>> mPartyChatJsonRpcComponent;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingConsumerSignInOwner>>       mPartySignalingConsumerSignInOwner;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>>        mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSocialDrawerVisibilityChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartyEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRpcChatSubscription;
    ::ll::UntypedStorage<8, 88>                                mChatReceivedPublisher;
    ::ll::TypedStorage<8, 24, std::string>                     mComposedMessage;
    ::ll::UntypedStorage<8, 88>                                mComposedMessageChangedPublisher;
    ::ll::TypedStorage<1, 1, bool>                             mIsChatOpen;
    ::ll::TypedStorage<1, 1, bool>                             mHasUnreadMessages;
    ::ll::UntypedStorage<8, 88>                                mHasUnreadMessagesChangedPublisher;
    ::ll::TypedStorage<4, 4, uint>                             mChatHistoryLimit;
    ::ll::TypedStorage<4, 4, uint>                             mTotalMessages;
    ::ll::TypedStorage<4, 4, uint>                             mOrderOffset;
    ::ll::TypedStorage<8, 48, std::deque<Social::ChatMessage>> mMessages;
    ::ll::UntypedStorage<8, 88>                                mTotalMessagesChangedPublisher;
    ::ll::UntypedStorage<8, 88>                                mFirstMessageOrderChangedPublisher;
    ::ll::UntypedStorage<8, 88>                                mLastMessageOrderChangedPublisher;
    ::ll::UntypedStorage<8, 88>                                mIsJoinedChangedPublisher;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                    mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChat& operator=(PartyChat const&);
    PartyChat(PartyChat const&);
    PartyChat();
};
#else // @header-generator platform
class PartyChat {};
#endif // @header-generator platform

} // namespace Parties
