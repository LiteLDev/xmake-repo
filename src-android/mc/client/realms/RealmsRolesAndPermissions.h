#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PlayerRole.h"
#include "mc/client/realms/PlayerRoleActions.h"
#include "mc/client/realms/PlayerRoleWithActionsList.h"
#include "mc/client/realms/RolesAndPermissionsState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsWorldContext; }
namespace Realms::Stories { class FacetStateManager; }
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class RealmsRolesAndPermissions : public ::std::enable_shared_from_this<Realms::RealmsRolesAndPermissions> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                    mSelectedUserXuid;
    ::ll::TypedStorage<4, 4, ::Realms::PlayerRole>                            mSelectedUserRole;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleActions>>         mSelectedUserActions;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleWithActionsList>> mAllRolesAndActionsForRealm;
    ::ll::TypedStorage<8, 24, std::string>                                    mCurrentUserId;
    ::ll::TypedStorage<8, 24, std::vector<Realms::PlayerRoleWithActionsList>> mCurrentUserRolesAndActionsForAllRealms;
    ::ll::TypedStorage<1, 1, bool>                               fetchingAllRealmRolesAndActionsForCurrentUser;
    ::ll::TypedStorage<4, 4, ::Realms::RolesAndPermissionsState> mState;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>          mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>>         mRealmsWorldContext;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::Stories::FacetStateManager>> mStoriesManager;
    ::ll::UntypedStorage<8, 88>                                                    mStateChangedPublisher;
    ::ll::UntypedStorage<8, 24>                                                    mUserManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mSignInSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mSignOutSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchAllRealmRolesAndActionsForCurrentUser();

    MCNAPI std::vector<Realms::PlayerRoleWithActionsList> const& getCurrentUserRolesAndActionsForAllRealms() const;

    MCNAPI std::vector<Realms::PlayerRoleActions> const& getSelectedUserActions() const;

    MCNAPI ::Realms::PlayerRole getSelectedUserRole() const;

    MCNAPI ::Realms::RolesAndPermissionsState getState() const;

    MCNAPI void initRealmsRolesAndActions(std::string const&);

    MCNAPI void initRealmsUserRoleAndActions(std::string const&, ::Realms::PlayerRole);

    MCNAPI void resetState();

    MCNAPI void saveRealmsUserRole(std::string const&, std::string const&);

    MCNAPI void setRealmsUserRole(std::string const&, ::Realms::PlayerRole);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToStateChangedPublisher(std::function<void()>);
    // NOLINTEND
};

} // namespace Realms
