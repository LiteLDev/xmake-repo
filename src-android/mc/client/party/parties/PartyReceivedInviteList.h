#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/PartyReceivedInvite.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyService; }
namespace Social { class User; }
// clang-format on

namespace Parties {

class PartyReceivedInviteList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mShowOnlyFriendInvites;
    ::ll::UntypedStorage<8, 64>                                       mReceivedInvites;
    ::ll::TypedStorage<8, 24, std::string>                            mPartyId;
    ::ll::UntypedStorage<8, 88>                                       mUpdatePublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mPartySubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mReceivedInviteFilterChangeSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyService>> mPartyService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>>       mOptions;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                           mTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>            mUser;
    ::ll::TypedStorage<8, 8, ::Parties::IPartyProvider&>              mPartyProvider;
    ::ll::UntypedStorage<8, 48>                                       mIsTrial;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteList& operator=(PartyReceivedInviteList const&);
    PartyReceivedInviteList(PartyReceivedInviteList const&);
    PartyReceivedInviteList();
};

} // namespace Parties
