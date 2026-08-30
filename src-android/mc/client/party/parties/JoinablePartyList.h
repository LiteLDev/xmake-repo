#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/party/parties/JoinablePartyData.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Parties { class IPartyProvider; }
namespace Parties { class PartyService; }
namespace Social { class SocialDrawerManager; }
// clang-format on

namespace Parties {

class JoinablePartyList {
public:
    // JoinablePartyList inner types define
    using XblTokenProvider = std::function<Bedrock::Threading::Async<std::string>()>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 64> mJoinableParties;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Parties::PartyService>> mPartyService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>> mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartySubscription;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTime;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mJoinablePartiesRefreshInterval;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::UntypedStorage<8, 88> mUpdatePublisher;
    ::ll::UntypedStorage<8, 16> mPartyProvider;
    ::ll::UntypedStorage<8, 48> mXblTokenProvider;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyList& operator=(JoinablePartyList const&);
    JoinablePartyList(JoinablePartyList const&);
    JoinablePartyList();
};

} // namespace Parties
