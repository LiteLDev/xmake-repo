#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/EarlySignInState.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/SignInResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevelListCache;
class IMinecraftGame;
class OptionRegistry;
struct ControllerIDtoClientMap;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class SingleThreadedLock; }
namespace Social { class MultiplayerServiceObserver; }
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class UserListObserver; }
namespace Social { class XboxLiveUser; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class IUserManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IUserManager inner types define
    using ConnectStatusCallback = std::function<void(Social::UserPlatformConnectionResult)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IUserManager() = default;

    virtual ::Bedrock::Threading::Async<void> createPrimaryUserAsync(std::shared_ptr<OptionRegistry>) = 0;

    virtual void initPrimaryIdentity() = 0;

    virtual ::Social::EarlySignInState tryTriggerEarlySignIn();

    virtual std::shared_ptr<Social::User> getPrimaryUser() const = 0;

    virtual bool isSecondaryUserCreationAllowed(int) const = 0;

    virtual void setSecondaryUserCreationAllowed(int) = 0;

    virtual ::Bedrock::Threading::Async<void> addSecondaryUserAsync(int, std::shared_ptr<OptionRegistry>, std::function<void (Social::UserPlatformConnectionResult)>) = 0;

    virtual bool controllerChanged(int&, int&) = 0;

    virtual bool canChangePrimaryUserFromStartMenuScreen() const = 0;

    virtual void getAsyncUserSelection(std::function<void (int)>, int) = 0;

    virtual void getAsyncUserSelectionForNewPrimaryUser(int, bool) = 0;

    virtual void forceCloudSaveOnWorld(std::string const&) = 0;

    virtual ::Core::Subject<Social::UserListObserver, Core::SingleThreadedLock>& getUserListSubject() = 0;

    virtual bool isPrimaryUserReady() const = 0;

    virtual bool canAccessPlayScreen() = 0;

    virtual bool needToShowPlatformStoreConnectConfirmationScreen() = 0;

    virtual bool canAccessSettingsScreen() = 0;

    virtual bool canAccessAchievementsScreen() = 0;

    virtual bool canAccessSkinScreen() = 0;

    virtual bool canAccessStoreScreen() const = 0;

    virtual bool canAccessRealmsPendingInvitesScreen() = 0;

    virtual bool canHandleInvites() = 0;

    virtual bool needPlatformConnectionBeforeXBLSignIn() = 0;

    virtual bool needPlatformConnectionForMultiplayer() const = 0;

    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const = 0;

    virtual bool needPlatformConnectionBeforeServerSearch() const = 0;

    virtual bool needsAsyncUserSelection(int, bool) = 0;

    virtual bool hasPlatformIcons() const = 0;

    virtual bool hasPlatformProfileCards() const = 0;

    virtual void getLinkedXuids(std::function<void (std::string, std::string)>, std::vector<std::string> const&) const = 0;

    virtual void getLinkedPlatformIds(std::function<void (std::string, std::string)>, std::vector<std::string> const&) const = 0;

    virtual void onAppResumed() = 0;

    virtual void onAppSuspended() = 0;

    virtual void onAppFocusLost() = 0;

    virtual void removeUser(int, bool) = 0;

    virtual void removeClient(std::shared_ptr<IClientInstance> const&) = 0;

    virtual std::shared_ptr<Social::User> setUserClient(int, std::shared_ptr<IClientInstance> const&) = 0;

    virtual bool userHasClient(int) = 0;

    virtual std::string_view getPlayFabTitleId() const = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> retrieveCIDToClientMap() = 0;

    virtual int getClientCID(::IClientInstance const&) const = 0;

    virtual void registerSignOutListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&) = 0;

    virtual void registerSignInListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&) = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInCallback(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>) = 0;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutCallback(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>) = 0;

    virtual ::Bedrock::PubSub::Subscription registerProfileImageChangedCallback(std::function<void (Social::ProfileImageOptions, std::shared_ptr<mce::Image>)>) = 0;

    virtual bool needGamepadDisconnectScreen(int) = 0;

    virtual void tick(::IMinecraftGame&) = 0;

    virtual void updateMapping(bool, bool) = 0;

    virtual std::shared_ptr<Social::User> getUser(::Social::XboxLiveUser const&) = 0;

    virtual std::shared_ptr<Social::User> getUser(::IClientInstance const&) const = 0;

    virtual std::shared_ptr<Social::User> getUserFromControllerId(int) const = 0;

    virtual std::shared_ptr<const Social::User> const getUserFromUserId(uint) const = 0;

    virtual std::shared_ptr<Social::User> getUserFromUserId(uint) = 0;

    virtual ::GameUserType getUserTypeFromUserId(uint) const = 0;

    virtual bool isChatAllowedWhenBlockedByPlatform() const = 0;

    virtual std::vector<std::shared_ptr<Social::User>> const& getUsers() const = 0;

    virtual bool isUserSignedIn(uint) = 0;

    virtual bool isPrimaryUserInitialSignInInProgress() const = 0;

    virtual void registerLevelLocationObserver(::ILevelListCache&) = 0;

    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver() = 0;

    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IUserManager {};
#endif // @header-generator platform

} // namespace Social
