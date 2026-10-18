#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/EarlySignInState.h"
#include "mc/client/social/IUserManager.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/deps/input/ControllerIDtoClientMap.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/SignInResult.h"
#include "mc/platform/MultiplayerServiceObserver.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevelListCache;
class IMinecraftGame;
class OptionRegistry;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class SingleThreadedLock; }
namespace Social { class ProfileImageOptions; }
namespace Social { class TitleIdentityInfo; }
namespace Social { class User; }
namespace Social { class UserListObserver; }
namespace Social { class XboxLiveUser; }
namespace Social { struct UserCreationData; }
namespace Social { struct UserDependencies; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class UserManager : public ::Social::IUserManager,
                    public ::LevelListCacheObserver,
                    public ::Social::MultiplayerServiceObserver {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<Social::User>>> mUsers;
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mUserArrayLock;
    ::ll::UntypedStorage<8, 64> mSignOutListeners;
    ::ll::UntypedStorage<8, 64> mSignInListeners;
    ::ll::TypedStorage<4, 4, int> mCurrentPrimaryUserControllerId;
    ::ll::TypedStorage<8, 64, ::ControllerIDtoClientMap> mCidToClientMap;
    ::ll::TypedStorage<4, 4, int> mAutoLoginTime;
    ::ll::TypedStorage<4, 4, int> mAllowedRetries;
    ::ll::TypedStorage<1, 1, bool> mClearedUserCredentials;
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::IdentityType, std::vector<std::function<void (uint, Social::IdentityType)>>>> mIdentitySignInListeners;
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::IdentityType, std::vector<std::function<void (uint, Social::IdentityType)>>>> mIdentitySignOutListeners;
    ::ll::TypedStorage<4, 4, uint> mNextId;
    ::ll::UntypedStorage<8, 32> mUserListSubject;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::TitleIdentityInfo>> mTitleIdentityInfo;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::UserDependencies>> mUserDependencies;
    ::ll::UntypedStorage<8, 8> mServiceRegistrationToken;
    ::ll::UntypedStorage<8, 40> mSignInPublisher;
    ::ll::UntypedStorage<8, 40> mSignOutPublisher;
    ::ll::UntypedStorage<8, 88> mProfileImageChangedPublisher;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mIdentitySignInSubscriber;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mIdentitySignOutSubscriber;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mProfileImageChangedSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UserManager();

    virtual ::Bedrock::Threading::Async<void> createPrimaryUserAsync(std::shared_ptr<OptionRegistry>);

    virtual void initPrimaryIdentity();

    virtual ::Social::EarlySignInState tryTriggerEarlySignIn();

    virtual std::shared_ptr<Social::User> getPrimaryUser() const;

    virtual bool isSecondaryUserCreationAllowed(int) const;

    virtual void setSecondaryUserCreationAllowed(int);

    virtual ::Bedrock::Threading::Async<void> addSecondaryUserAsync(int, std::shared_ptr<OptionRegistry>, std::function<void (Social::UserPlatformConnectionResult)>);

    virtual bool controllerChanged(int&, int&);

    virtual bool canChangePrimaryUserFromStartMenuScreen() const;

    virtual void getAsyncUserSelection(std::function<void (int)>, int);

    virtual void getAsyncUserSelectionForNewPrimaryUser(int, bool);

    virtual void forceCloudSaveOnWorld(std::string const&);

    virtual ::Core::Subject<Social::UserListObserver, Core::SingleThreadedLock>& getUserListSubject();

    virtual bool isPrimaryUserReady() const;

    virtual bool canAccessPlayScreen();

    virtual bool needToShowPlatformStoreConnectConfirmationScreen();

    virtual bool canAccessSettingsScreen();

    virtual bool canAccessAchievementsScreen();

    virtual bool canAccessSkinScreen();

    virtual bool canAccessStoreScreen() const;

    virtual bool canAccessRealmsPendingInvitesScreen();

    virtual bool canHandleInvites();

    virtual bool needPlatformConnectionBeforeXBLSignIn();

    virtual bool needPlatformConnectionForMultiplayer() const;

    virtual bool needPlatformConnectionForSplitScreenMultiplayer() const;

    virtual bool needPlatformConnectionBeforeServerSearch() const;

    virtual bool needsAsyncUserSelection(int, bool);

    virtual bool hasPlatformIcons() const;

    virtual bool hasPlatformProfileCards() const;

    virtual void getLinkedXuids(std::function<void (std::string, std::string)>, std::vector<std::string> const&) const;

    virtual void getLinkedPlatformIds(std::function<void (std::string, std::string)>, std::vector<std::string> const&) const;

    virtual void onAppResumed();

    virtual void onAppSuspended();

    virtual void onAppFocusLost();

    virtual void removeUser(int, bool);

    virtual void removeClient(std::shared_ptr<IClientInstance> const&);

    virtual std::shared_ptr<Social::User> setUserClient(int, std::shared_ptr<IClientInstance> const&);

    virtual bool userHasClient(int);

    virtual std::string_view getPlayFabTitleId() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> retrieveCIDToClientMap();

    virtual int getClientCID(::IClientInstance const&) const;

    virtual void registerSignOutListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&);

    virtual void registerSignInListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&);

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInCallback(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>);

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutCallback(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>);

    virtual ::Bedrock::PubSub::Subscription registerProfileImageChangedCallback(std::function<void (Social::ProfileImageOptions, std::shared_ptr<mce::Image>)>);

    virtual bool needGamepadDisconnectScreen(int);

    virtual void tick(::IMinecraftGame&);

    virtual void updateMapping(bool, bool);

    virtual std::shared_ptr<Social::User> getUser(::Social::XboxLiveUser const&);

    virtual std::shared_ptr<Social::User> getUser(::IClientInstance const&) const;

    virtual std::shared_ptr<Social::User> getUserFromControllerId(int) const;

    virtual std::shared_ptr<const Social::User> const getUserFromUserId(uint) const;

    virtual std::shared_ptr<Social::User> getUserFromUserId(uint);

    virtual ::GameUserType getUserTypeFromUserId(uint) const;

    virtual bool isChatAllowedWhenBlockedByPlatform() const;

    virtual std::vector<std::shared_ptr<Social::User>> const& getUsers() const;

    virtual bool isUserSignedIn(uint);

    virtual bool isPrimaryUserInitialSignInInProgress() const;

    virtual void registerLevelLocationObserver(::ILevelListCache&);

    virtual ::Social::MultiplayerServiceObserver& getMultiplayerServiceObserver();

    virtual ::Social::MultiplayerServiceIdentifier getPlatformMultiplayerServiceIdentifier() const;

    virtual bool hasPlatformPremiumAccess() const;

    virtual void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    virtual void onLevelUpdated(std::string const&);

    virtual void onLevelDeleted(std::string const&);

    virtual void _onAppResumed();

    virtual void _onAppSuspended();

    virtual std::shared_ptr<Social::UserCreationData> _prepareUserCreationData(::GameUserType, int, std::shared_ptr<OptionRegistry>, uint);

    virtual void _onUserAdded(std::shared_ptr<Social::User> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserManager();

    MCNAPI void _addUser(std::shared_ptr<Social::User>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Social::UserManager> CreateUserManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> $createPrimaryUserAsync(std::shared_ptr<OptionRegistry>);

    MCNAPI void $initPrimaryIdentity();

    MCNAPI ::Social::EarlySignInState $tryTriggerEarlySignIn();

    MCNAPI std::shared_ptr<Social::User> $getPrimaryUser() const;

    MCNAPI bool $isSecondaryUserCreationAllowed(int) const;

    MCNAPI void $setSecondaryUserCreationAllowed(int);

    MCNAPI ::Bedrock::Threading::Async<void> $addSecondaryUserAsync(
        int,
        std::shared_ptr<OptionRegistry>,
        std::function<void(Social::UserPlatformConnectionResult)>
    );

    MCNAPI bool $controllerChanged(int&, int&);

    MCNAPI bool $canChangePrimaryUserFromStartMenuScreen() const;

    MCNAPI void $getAsyncUserSelection(std::function<void(int)>, int);

    MCNAPI void $getAsyncUserSelectionForNewPrimaryUser(int, bool);

    MCNAPI void $forceCloudSaveOnWorld(std::string const&);

    MCNAPI ::Core::Subject<Social::UserListObserver, Core::SingleThreadedLock>& $getUserListSubject();

    MCNAPI bool $isPrimaryUserReady() const;

    MCNAPI bool $canAccessPlayScreen();

    MCNAPI bool $needToShowPlatformStoreConnectConfirmationScreen();

    MCNAPI bool $canAccessSettingsScreen();

    MCNAPI bool $canAccessAchievementsScreen();

    MCNAPI bool $canAccessSkinScreen();

    MCNAPI bool $canAccessStoreScreen() const;

    MCNAPI bool $canAccessRealmsPendingInvitesScreen();

    MCNAPI bool $canHandleInvites();

    MCNAPI bool $needPlatformConnectionBeforeXBLSignIn();

    MCNAPI bool $needPlatformConnectionForMultiplayer() const;

    MCNAPI bool $needPlatformConnectionForSplitScreenMultiplayer() const;

    MCNAPI bool $needPlatformConnectionBeforeServerSearch() const;

    MCNAPI bool $needsAsyncUserSelection(int, bool);

    MCNAPI bool $hasPlatformIcons() const;

    MCNAPI bool $hasPlatformProfileCards() const;

    MCNAPI void $getLinkedXuids(std::function<void(std::string, std::string)>, std::vector<std::string> const&) const;

    MCNAPI void
    $getLinkedPlatformIds(std::function<void(std::string, std::string)>, std::vector<std::string> const&) const;

    MCNAPI void $onAppResumed();

    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppFocusLost();

    MCNAPI void $removeUser(int, bool);

    MCNAPI void $removeClient(std::shared_ptr<IClientInstance> const&);

    MCNAPI std::shared_ptr<Social::User> $setUserClient(int, std::shared_ptr<IClientInstance> const&);

    MCNAPI bool $userHasClient(int);

    MCNAPI std::string_view $getPlayFabTitleId() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<ControllerIDtoClientMap>> $retrieveCIDToClientMap();

    MCNAPI int $getClientCID(::IClientInstance const&) const;

    MCNAPI void $registerSignOutListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&);

    MCNAPI void $registerSignInListener(::Core::CallbackListeners<int, Social::SignInResult>::Listener const&);

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerIdentitySignInCallback(::Social::IdentityType, std::function<void(uint, Social::IdentityType)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerIdentitySignOutCallback(::Social::IdentityType, std::function<void(uint, Social::IdentityType)>);

    MCNAPI ::Bedrock::PubSub::Subscription $registerProfileImageChangedCallback(
        std::function<void(Social::ProfileImageOptions, std::shared_ptr<mce::Image>)>
    );

    MCNAPI bool $needGamepadDisconnectScreen(int);

    MCNAPI void $tick(::IMinecraftGame&);

    MCNAPI void $updateMapping(bool, bool);

    MCNAPI std::shared_ptr<Social::User> $getUser(::Social::XboxLiveUser const&);

    MCNAPI std::shared_ptr<Social::User> $getUser(::IClientInstance const&) const;

    MCNAPI std::shared_ptr<Social::User> $getUserFromControllerId(int) const;

    MCNAPI std::shared_ptr<const Social::User> const $getUserFromUserId(uint) const;

    MCNAPI std::shared_ptr<Social::User> $getUserFromUserId(uint);

    MCNAPI ::GameUserType $getUserTypeFromUserId(uint) const;

    MCNAPI bool $isChatAllowedWhenBlockedByPlatform() const;

    MCNAPI std::vector<std::shared_ptr<Social::User>> const& $getUsers() const;

    MCNAPI bool $isUserSignedIn(uint);

    MCNAPI bool $isPrimaryUserInitialSignInInProgress() const;

    MCNAPI void $registerLevelLocationObserver(::ILevelListCache&);

    MCNAPI ::Social::MultiplayerServiceObserver& $getMultiplayerServiceObserver();

    MCNAPI ::Social::MultiplayerServiceIdentifier $getPlatformMultiplayerServiceIdentifier() const;

    MCNAPI bool $hasPlatformPremiumAccess() const;

    MCNAPI void $onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onLevelDeleted(std::string const&);

    MCNAPI void $_onAppResumed();

    MCNAPI void $_onAppSuspended();

    MCNAPI std::shared_ptr<Social::UserCreationData>
           $_prepareUserCreationData(::GameUserType, int, std::shared_ptr<OptionRegistry>, uint);

    MCNAPI void $_onUserAdded(std::shared_ptr<Social::User> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class UserManager {};
#endif // @header-generator platform

} // namespace Social
