#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/services/ServiceClient.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/SingleThreaded.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
namespace Realms { class IInvitesApi; }
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class InvitesService : public ::ServiceClient, public ::std::enable_shared_from_this<Realms::InvitesService> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IInvitesApi>> mInvitesApi;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPendingInviteCountUpdate;
    ::ll::TypedStorage<1, 1, bool> mFetchingPendingInviteCount;
    ::ll::TypedStorage<1, 1, bool> mIsFetchingPendingInviteCountRouteActive;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastPendingInviteListUpdate;
    ::ll::TypedStorage<1, 1, bool> mFetchingPendingInviteList;
    ::ll::TypedStorage<1, 1, bool> mIsFetchingPendingInviteListRouteActive;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastAllInviteListUpdate;
    ::ll::TypedStorage<1, 1, bool> mFetchingAllInviteList;
    ::ll::TypedStorage<1, 1, bool> mIsFetchingAllInviteListRouteActive;
    ::ll::UntypedStorage<8, 40> mPendingInviteCountChangedPublisher;
    ::ll::UntypedStorage<8, 40> mPendingInviteListChangedPublisher;
    ::ll::UntypedStorage<8, 40> mAllInviteListChangedPublisher;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mPendingInviteCountRoutes;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mPendingInviteListRoutes;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mAllInviteListRoutes;
    ::ll::TypedStorage<8, 24, std::vector<Invites::Invite>> mCachedPendingInvites;
    ::ll::TypedStorage<8, 24, std::vector<Invites::Invite>> mCachedAllInvites;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InvitesService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvitesService();

    virtual void update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvitesService(
        std::weak_ptr<Realms::IInvitesApi>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>
    );

    MCNAPI bool _getRealmsShowFriendInvitesOnly() const;

    MCNAPI void _requestInviteList(bool);

    MCNAPI void refreshAllInviteList();

    MCNAPI ::Bedrock::PubSub::Subscription registerAllInviteListChangedListener(
        std::function<void(std::vector<Invites::Invite>)> const&,
        std::vector<std::string> const&
    );

    MCNAPI ::Bedrock::PubSub::Subscription
    registerPendingInviteCountChangedListener(std::function<void(int)> const&, std::vector<std::string> const&);

    MCNAPI void requestPendingInviteCount(bool);

    MCNAPI void setupRouterListener(::OreUI::Router&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(std::weak_ptr<Realms::IInvitesApi>, ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
