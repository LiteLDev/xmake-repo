#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
namespace Social { class FriendList; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class ProfileSystem; }
namespace Social { class ReceivedFriendRequestsList; }
namespace Social { class SocialDrawerManager; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace Social {

class SocialSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ProfileSystem>>              mProfileSystem;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::FriendList>>                   mFriendList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>>        mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::UntypedStorage<8, 24>                                                    mUserManager;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>                      mFriendServerWorldList;
    ::ll::UntypedStorage<8, 32>                                                    mPlatformMultiplayerServiceIds;
    ::ll::UntypedStorage<8, 48>                                                    mGetMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 48>                                                    mGetContentCatalogService;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialSystem& operator=(SocialSystem const&);
    SocialSystem(SocialSystem const&);
    SocialSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SocialSystem(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        std::vector<Social::MultiplayerServiceIdentifier>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>,
        ::World::FriendServerWorldList&
    );

    MCNAPI std::shared_ptr<Social::FriendList> getFriendList();

    MCNAPI std::shared_ptr<Social::ProfileSystem> getProfileSystem();

    MCNAPI std::shared_ptr<Social::ReceivedFriendRequestsList> getReceivedFriendRequestsList();

    MCNAPI std::shared_ptr<Social::SocialDrawerManager> getSocialDrawerManager();

    MCNAPI void update(double);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        std::vector<Social::MultiplayerServiceIdentifier>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>,
        ::World::FriendServerWorldList&
    );
    // NOLINTEND
};

} // namespace Social
