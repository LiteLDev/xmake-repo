#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/party/parties/PartyDestinationExternal.h"
#include "mc/client/party/parties/PartyDestinationGathering.h"
#include "mc/client/party/parties/PartyDestinationMenus.h"
#include "mc/client/party/parties/PartyDestinationRealm.h"
#include "mc/client/party/parties/PartyDestinationXblP2P.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/network/packet/PartyDestinationCookieIntent.h"
#include "mc/world/events/ClientInstanceEventListener.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventCoordinator;
class GatheringManager;
class PacketSender;
struct IGameServerShutdown;
struct IWorldTransfer;
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyService; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class User; }
namespace World { class NetworkWorldJoiner; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
class PartyTravelManager : public ::ClientInstanceEventListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mIsPartyLeader;
    ::ll::TypedStorage<8, 256, std::optional<std::variant<Parties::PartyDestinationXblP2P, Parties::PartyDestinationMenus, Parties::PartyDestinationRealm, Parties::PartyDestinationGathering, Parties::PartyDestinationExternal>>> mPartyDestination;
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 8, ::World::NetworkWorldJoiner&> mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 8, ::IWorldTransfer const&> mWorldTransfer;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>> mUser;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyService>> mPartyService;
    ::ll::UntypedStorage<8, 24> mClientInstanceEventCoordinator;
    ::ll::UntypedStorage<8, 24> mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartySubscription;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mCheckDestinationTaskGroup;
    ::ll::UntypedStorage<8, 88> mNewDestinationPublisher;
    ::ll::UntypedStorage<8, 88> mInvalidDestinationPublisher;
    ::ll::UntypedStorage<8, 88> mUserAtDestinationChangedPublisher;
    ::ll::UntypedStorage<8, 88> mDestinationCookieUpdatedPublisher;
    ::ll::TypedStorage<8, 8, ::Parties::IPartyProvider&> mPartyProvider;
    ::ll::TypedStorage<8, 8, ::IGameServerShutdown&> mGameServerShutdown;
    ::ll::TypedStorage<1, 1, bool> mIsUserAtPartyDestination;
    ::ll::UntypedStorage<8, 32> mGatheringManager;
    ::ll::UntypedStorage<8, 48> mIsInGame;
    ::ll::UntypedStorage<8, 48> mGetPacketSender;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PartyTravelManager& operator=(PartyTravelManager const&);
    PartyTravelManager(PartyTravelManager const&);
    PartyTravelManager();
};
#else // @header-generator platform
class PartyTravelManager {};
#endif // @header-generator platform

} // namespace Parties
