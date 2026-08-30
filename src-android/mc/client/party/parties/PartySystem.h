#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/IPartyProvider.h"
#include "mc/client/party/parties/PartyConnectionData.h"
#include "mc/client/party/parties/PartyEventAcceptInviteFailed.h"
#include "mc/client/party/parties/PartyEventCreateFailed.h"
#include "mc/client/party/parties/PartyEventInviteExpired.h"
#include "mc/client/party/parties/PartyEventJoinFailed.h"
#include "mc/client/party/parties/PartyEventJoinablePartyExpired.h"
#include "mc/client/party/parties/PartyEventJoinedParty.h"
#include "mc/client/party/parties/PartyEventLeaderChanged.h"
#include "mc/client/party/parties/PartyEventLeaveFailed.h"
#include "mc/client/party/parties/PartyEventLeftParty.h"
#include "mc/client/party/parties/PartyEventMemberJoined.h"
#include "mc/client/party/parties/PartyEventMemberLeft.h"
#include "mc/client/party/parties/PartyEventRemoveMemberFailed.h"
#include "mc/client/party/parties/PartyEventSendInviteFailed.h"
#include "mc/client/party/parties/PartyEventSetLeaderFailed.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class SignalingConsumerSignInOwner;
class SignalingServiceSignInManager;
class TaskGroup;
namespace JsonRpc { class PartyChatJsonRpcComponent; }
namespace Parties { class JoinablePartyList; }
namespace Parties { class Party; }
namespace Parties { class PartyChangePublisher; }
namespace Parties { class PartyChat; }
namespace Parties { class PartyReceivedInviteList; }
namespace Parties { class PartyService; }
namespace Parties { class PartyTravelManager; }
namespace Social { class IChatChannel; }
namespace Social { class SocialDrawerManager; }
namespace Social { class User; }
// clang-format on

namespace Parties {

class PartySystem : public ::Parties::IPartyProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::Party>>                     mParty;
    ::ll::UntypedStorage<8, 88>                                                    mPartyUpdatePublisher;
    ::ll::UntypedStorage<8, 88>                                                    mPartyEventPublisher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyChat>>                 mPartyChat;
    ::ll::UntypedStorage<8, 88>                                                    mPartyChatUpdatePublisher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>>                    mOptions;
    ::ll::UntypedStorage<8, 24>                                                    mSignalingServiceSignInManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SignalingConsumerSignInOwner>>       mPartySignalingConsumerSignInOwner;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>>        mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>                         mUser;
    ::ll::UntypedStorage<8, 16>                                                    mJoinablePartyList;
    ::ll::UntypedStorage<8, 16>                                                    mPartyReceivedInviteList;
    ::ll::UntypedStorage<8, 16>                                                    mPartyTravelManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyService>>              mPartyService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyChangePublisher>>      mPartyChangePublisher;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::PartyChatJsonRpcComponent>> mPartyChatJsonRpcComponent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mPartyChangeSubscription;
    ::ll::UntypedStorage<8, 24>                                                    mPartyChatInitSubscription;
    ::ll::UntypedStorage<8, 480>                                                   mPendingPartyConnectionData;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsCreatingParty;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                           mTaskGroup;
    // NOLINTEND
};

} // namespace Parties
