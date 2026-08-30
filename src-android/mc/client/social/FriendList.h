#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/SocialGroupState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class PlatformFriendList; }
namespace Social { class SocialDrawerManager; }
namespace Social { class User; }
namespace Social { class XblFriendList; }
namespace Social { struct FriendData; }
namespace Social { struct SocialChangeResult; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace Social {

class FriendList : public ::std::enable_shared_from_this<Social::FriendList> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                                                  mNotifyChangeSubscribers;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::XblFriendList>>             mXblFriendList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::PlatformFriendList>>       mPlatformFriendList;
    ::ll::TypedStorage<4, 4, int>                                                mSocialChangeToken;
    ::ll::UntypedStorage<8, 24>                                                  mUserManager;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>                    mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>                     mPrimaryUser;
    ::ll::TypedStorage<8, 24, std::vector<Social::MultiplayerServiceIdentifier>> mPlatformMultiplayerServiceIds;
    ::ll::UntypedStorage<8, 48>                                                  mGetMultiplayerServiceManager;
    ::ll::UntypedStorage<8, 48>                                                  mGetContentCatalogService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>>      mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSocialDrawerVisibilityChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mHasChanged;
    ::ll::TypedStorage<8, 8, double>                           mLastUpdateMs;
    ::ll::UntypedStorage<8, 16>                                mAsyncTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendList& operator=(FriendList const&);
    FriendList(FriendList const&);
    FriendList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FriendList(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::World::FriendServerWorldList&,
        std::shared_ptr<Social::SocialDrawerManager>,
        std::vector<Social::MultiplayerServiceIdentifier>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>
    );

    MCNAPI void _updateData();

    MCNAPI ulong getNumOnlineFriends() const;

    MCNAPI ::Social::SocialGroupState getPlatformFriendGroupState() const;

    MCNAPI std::vector<Social::FriendData> const& getPlatformFriends();

    MCNAPI ::Social::SocialGroupState getXblFriendGroupState() const;

    MCNAPI std::vector<Social::FriendData> const& getXblFriends();

    MCNAPI ::Bedrock::PubSub::Subscription registerChangeListener(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI void update(double);

    MCNAPI void userControlledUpdateGameList();

    MCNAPI ~FriendList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::World::FriendServerWorldList&,
        std::shared_ptr<Social::SocialDrawerManager>,
        std::vector<Social::MultiplayerServiceIdentifier>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>>()>,
        std::function<gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>>()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
