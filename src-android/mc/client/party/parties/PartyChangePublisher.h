#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/JsonRpc__ReceivePartyInviteResult.h"
#include "mc/client/party/parties/PartyConnectedChange.h"
#include "mc/client/party/parties/PartyDestinationUpdatedChange.h"
#include "mc/client/party/parties/PartyDisconnectedChange.h"
#include "mc/client/party/parties/PartyDisconnectingChange.h"
#include "mc/client/party/parties/PartyInviteReceivedChange.h"
#include "mc/client/party/parties/PartyInviteReceivedJsonRpcChange.h"
#include "mc/client/party/parties/PartyLeaderUpdatedChange.h"
#include "mc/client/party/parties/PartyMaxMemberCountUpdatedChange.h"
#include "mc/client/party/parties/PartyMemberAddedChange.h"
#include "mc/client/party/parties/PartyMemberConnectionStatusChange.h"
#include "mc/client/party/parties/PartyMemberRemovedChange.h"
#include "mc/client/party/parties/PartyPrivacyUpdatedChange.h"
#include "mc/client/party/parties/PartyRestrictInvitesUpdatedChange.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/play_fab_multiplayer/LobbyHandle.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ServicesManager;
class TaskGroup;
namespace JsonRpc { class PartyInvitesJsonRpcComponent; }
namespace PlayFabMultiplayer { class IPlayFabMultiplayer; }
namespace Social { class User; }
namespace flighting { class IFlightReader; }
// clang-format on

namespace Parties {

class PartyChangePublisher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayFabMultiplayer::IPlayFabMultiplayer>> mPlayFabMultiplayer;
    ::ll::TypedStorage<8, 8, ::PlayFabMultiplayer::LobbyHandle>                        mLobbyHandle;
    ::ll::TypedStorage<8, 24, std::string>                                             mPlayerTitleAccountId;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsListeningForInvites;
    ::ll::UntypedStorage<8, 24>                                                        mServicesManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>                             mUser;
    ::ll::UntypedStorage<8, 24>                                                        mFlightReader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonRpc::PartyInvitesJsonRpcComponent>>  mPartyInvitesJsonRpcComponent;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                    mEventing;
    ::ll::TypedStorage<8, 24, std::vector<JsonRpc::ReceivePartyInviteResult>>          mRpcInvitesQueue;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mRpcInvitesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mPlayFabSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mPlayFabSignOutSubscription;
    ::ll::UntypedStorage<8, 88>                                                        mPublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                               mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChangePublisher& operator=(PartyChangePublisher const&);
    PartyChangePublisher(PartyChangePublisher const&);
    PartyChangePublisher();
};

} // namespace Parties
