#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/PlayerProfileInternal.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
namespace Social { class IUserManager; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct PlayerIdentifier; }
namespace Social { struct PlayerProfile; }
namespace Social { struct PlayerProfileData; }
namespace Social { struct XboxLiveUserProfileData; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace Social {

class ProfileSystem : public ::std::enable_shared_from_this<Social::ProfileSystem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                               mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<Social::PlayerProfileInternal>> mPlayerProfiles;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSignOutSubscription;
    ::ll::UntypedStorage<8, 24>                                           mUserManager;
    ::ll::UntypedStorage<8, 48>                                           mGetImageService;
    ::ll::TypedStorage<4, 4, int>                                         mSocialChangeToken;
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>             mFriendServerWorldList;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileSystem& operator=(ProfileSystem const&);
    ProfileSystem(ProfileSystem const&);
    ProfileSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Social::PlayerProfileInternal& _createProfileStub(::Social::PlayerIdentifier const&);

    MCNAPI void _fetchPlatformProfile(::Social::PlayerIdentifier const&);

    MCNAPI void _fetchXblProfile(::Social::PlayerIdentifier const&, bool);

    MCNAPI ::Social::PlayerProfileInternal* _findPlayerProfileInternal(::Social::PlayerIdentifier const&);

    MCNAPI std::optional<Social::PlayerProfile> const findPlayerProfile(::Social::PlayerIdentifier const&);

    MCNAPI std::string getCurrentUserPlatformId() const;

    MCNAPI std::string const& getCurrentUserXuid() const;

    MCNAPI void refetchProfile(::Social::PlayerIdentifier const&);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToBuildGameList();

    MCNAPI ::Bedrock::PubSub::Subscription
    subscribeToProfile(::Social::PlayerIdentifier const&, std::function<void(Social::PlayerIdentifier)> const&);

    MCNAPI std::vector<Bedrock::PubSub::Subscription> subscribeToProfiles(
        std::vector<Social::PlayerIdentifier> const&,
        std::function<void(Social::PlayerIdentifier)> const&
    );

    MCNAPI void update();
    // NOLINTEND
};

} // namespace Social
