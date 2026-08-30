#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/InboxFacet.h"
#include "mc/client/social/invites/Invite.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IClientInstance;
class InboxSurface;
class PlayerMessagingService;
class RealmsAPI;
namespace Invites { struct Invite; }
namespace OreUI { class IResourceAllowList; }
namespace Realms { class InvitesService; }
// clang-format on

namespace OreUI {

class InboxSession : public ::std::enable_shared_from_this<OreUI::InboxSession> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::UntypedStorage<8, 24> mPrevData;
    ::ll::UntypedStorage<8, 24> mData;
    ::ll::UntypedStorage<1, 5> mSettings;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>> mRealmsApi;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    ::ll::UntypedStorage<8, 24> mInvitesService;
    ::ll::UntypedStorage<8, 24> mDateManager;
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&> mPlayerMessagingService;
    ::ll::UntypedStorage<8, 24> mInboxSurface;
    ::ll::UntypedStorage<8, 24> mCategoryData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mAllInviteListSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInboxUpdatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMessageImageLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCategoryImageLoadedSubscription;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<1, 1, bool> mCategoryDataDirty;
    ::ll::TypedStorage<1, 1, bool> mLoadedPlayerData;
    ::ll::TypedStorage<1, 1, bool> mMessagingServiceFailed;
    ::ll::TypedStorage<1, 1, bool> mRealmsSubscriber;
    ::ll::TypedStorage<8, 24, std::multimap<std::string, std::tuple<std::string, Core::Path, Core::Path>>> mUpdatedImages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mInboxMessageChangeSubscriber;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InboxSession& operator=(InboxSession const&);
    InboxSession(InboxSession const&);
    InboxSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clearInvitesMessages();

    MCNAPI void
    _setInvitationStatus(::OreUI::InboxFacet::InboxMessageData const&, ::Invites::Invite::InvitationStatus const&);

    MCNAPI void loadSettings();

    MCNAPI void saveSettings();
    // NOLINTEND
};

} // namespace OreUI
