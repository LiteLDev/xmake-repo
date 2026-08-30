#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/RealmsSubscriptionsState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class SubscriptionService; }
namespace Realms { struct RealmsSubscriptionInfo; }
namespace Realms { struct World; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

namespace Realms {

class RealmsSubscriptions : public ::std::enable_shared_from_this<Realms::RealmsSubscriptions> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                                  mStateChangedPublisher;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>          mRealmsAPI;
    ::ll::UntypedStorage<8, 24>                                  mRealmsSubscriptionService;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsSubscriptionsState> mState;
    ::ll::UntypedStorage<8, 24>                                  mRealmsWorldLoadingDetailsGroup;
    ::ll::UntypedStorage<8, 48>                                  mGetUserIdCallback;
    ::ll::UntypedStorage<8, 32>                                  mStoreId;
    ::ll::UntypedStorage<8, 48>                                  mCanUserDoRealmAction;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchUserWorlds();

    MCNAPI std::vector<Realms::RealmsSubscriptionInfo> getRealmsSubscriptionInfo() const;

    MCNAPI std::string const& getStoreId() const;

    MCNAPI void reset();

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToStateChangedPublisher(std::function<void(Realms::RealmsSubscriptionsState)>);
    // NOLINTEND
};

} // namespace Realms
