#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/User.h"
#include "mc/client/social/UserPlatformConnectionResult.h"
#include "mc/client/social/UserPlatformConnectionState.h"
#include "mc/common/GameUserType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/MultiIdentitySigninResult.h"
#include "mc/identity/PermissionCheckResult.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class CloudSaveSystemWrapper;
class IClientInstance;
class IOptionRegistry;
template<typename T0> class CallbackTokenContext;
struct MinecraftAccountPermissions;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Social { class IUserDataObject; }
namespace Social { class Identity; }
namespace Social { class IdentityManager; }
namespace Social { class PlatformImageService; }
namespace Social { class ProfileImageOptions; }
namespace Social { class UserData; }
namespace Social { class UserManager; }
namespace Social { class XboxLiveUser; }
namespace Social { struct AuthToken; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct UserBanDetails; }
namespace Social { struct UserCreationData; }
namespace Social { struct UserDependencies; }
namespace Social { struct UserSignInProperties; }
namespace mce { struct Image; }
// clang-format on

namespace Social {

class UserImpl : public ::Social::User {
public:
    // UserImpl inner types define
    using ConnectContext =
        std::shared_ptr<CallbackTokenContext<std::function<void(Social::UserPlatformConnectionResult)>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<4, 4, ::GameUserType const> mType;
    ::ll::TypedStorage<4, 4, int> mControllerId;
    ::ll::TypedStorage<4, 4, uint const> mLocalUserId;
    ::ll::TypedStorage<4, 4, ::Social::UserPlatformConnectionState> mPlatformConnectionState;
    ::ll::TypedStorage<1, 1, bool> mNeedsPlatformReconnect;
    ::ll::TypedStorage<4, 40, std::mutex> mUserManagerMutex;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IClientInstance>> mAssociatedClientInstance;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mMultiplayerAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mChatAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mAddFriendAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mUserGeneratedContentAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mCreateAndJoinClubsAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mViewingProfilesAllowed;
    ::ll::TypedStorage<4, 4, ::Social::PermissionCheckResult> mUploadCapturesAllowed;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::IdentityManager>> mIdentities;
    ::ll::UntypedStorage<1, 140> mSignInMutex;
    ::ll::TypedStorage<1, 1, bool> mSigningIn;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mFinalized;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<Social::IdentityType, std::function<void (Social::MultiIdentitySigninResult)>>>> mSignInCallbacks;
    ::ll::UntypedStorage<8, 40> mSignInPublisher;
    ::ll::UntypedStorage<8, 40> mSignOutPublisher;
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::IdentityType, int>> mPermissionsChangeListenerTokens;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::PlatformImageService>> mPlatformFriendsImageService;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mStorageArea;
    ::ll::UntypedStorage<8, 24> mSettingsDirectoryPath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CloudSaveSystemWrapper>> mCloudSaveSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IOptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 24, std::string> mCurrentDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mAppearanceDisplayName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    UserImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UserImpl();

    virtual void initStorageAreas();

    virtual ::GameUserType getType() const;

    virtual bool isPrimaryUser() const;

    virtual bool isAnonymous() const;

    virtual bool isConnected() const;

    virtual bool isReady() const;

    virtual bool needsPlatformReconnect() const;

    virtual bool isSignedIn(::Social::IdentityType) const;

    virtual bool isSignInInProgress() const;

    virtual bool isSignInInProgress(::Social::IdentityType) const;

    virtual bool signIn(::Social::UserSignInProperties const&);

    virtual void cancelSignIn(::Social::IdentityType);

    virtual void signOut(::Social::IdentityType, std::function<void (bool)>);

    virtual void clearCachedCredentials(::Social::IdentityType);

    virtual bool hasNetworkPrivileges() const;

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignInSubscriber(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>);

    virtual ::Bedrock::PubSub::Subscription registerIdentitySignOutSubscriber(::Social::IdentityType, std::function<void (uint, Social::IdentityType)>);

    virtual ::CallbackToken connectAsync(std::function<void (Social::UserPlatformConnectionResult)>, bool);

    virtual void enterOfflineMode(std::function<void (bool)>);

    virtual ::Social::UserPlatformConnectionState getPlatformConnectionState() const;

    virtual uint getLocalUserId() const;

    virtual std::string const& getId(::Social::IdentityType) const;

    virtual std::string const& getMinecraftAccountID() const;

    virtual ::Bedrock::Threading::Async<Social::AuthToken> getAuthToken(::Social::IdentityType, std::string const&) const;

    virtual void getAuthToken(::Social::IdentityType, std::string const&, std::function<void (Social::AuthToken)>) const;

    virtual std::string const& getPlayFabSessionTicket() const;

    virtual std::string const& getPlayFabEntityToken() const;

    virtual std::shared_ptr<const Social::Identity> const getIdentity(::Social::IdentityType) const;

    virtual std::shared_ptr<Social::Identity> getIdentity(::Social::IdentityType);

    virtual bool hasIdentity(::Social::IdentityType) const;

    virtual ::MinecraftAccountPermissions getMinecraftAccountPermissions() const;

    virtual ::Bedrock::Threading::Async<bool> unlinkXboxLiveAccount();

    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    virtual void setUserDataObject(::Social::IUserDataObject const&);

    virtual ::Social::UserData const getUserData(std::string const&) const;

    virtual void setUserData(std::string const&, ::Social::UserData const&);

    virtual void tick();

    virtual void finalize();

    virtual void disconnect();

    virtual void signOutFromPlatform();

    virtual bool isFinalized() const;

    virtual ::CloudSaveSystemWrapper& getCloudSaveSystem();

    virtual std::string getDisplayName(::Social::IdentityType) const;

    virtual std::string getDisplayName() const;

    virtual std::shared_ptr<Core::FileStorageArea> const getStorageArea() const;

    virtual ::Core::Path getSettingsDirectoryPath() const;

    virtual bool hasValidSettingsDirectoryPath() const;

    virtual std::shared_ptr<IOptionRegistry> const getOptions() const;

    virtual ::Social::XboxLiveUser& getLiveUser() const;

    virtual void checkPrivilegeWithUIAsync(int, std::string const&, std::function<void (Social::PermissionCheckResult)>);

    virtual ::RelationshipStatus mayChatWith(std::string const&);

    virtual bool mayChatWithMe(std::string const&) const;

    virtual bool isMutedPlayer(std::string const&);

    virtual ::Social::PermissionCheckResult multiplayerAllowed() const;

    virtual ::Social::PermissionCheckResult chatAllowed() const;

    virtual ::Social::PermissionCheckResult addFriendAllowed() const;

    virtual ::Social::PermissionCheckResult userGeneratedContentAllowed() const;

    virtual ::Social::PermissionCheckResult createAndJoinClubsAllowed() const;

    virtual ::Social::PermissionCheckResult viewingProfilesAllowed() const;

    virtual ::Social::PermissionCheckResult uploadCapturesAllowed() const;

    virtual bool isRemotePlatformUser() const;

    virtual bool shouldClearChatOnJoinGame() const;

    virtual int getGameControllerId() const;

    virtual void setGameControllerId(int);

    virtual std::string getPlatformID() const;

    virtual bool hasPremiumPlatformAccess() const;

    virtual void checkPremiumPlatformStatusAsync(std::function<void (bool)>);

    virtual bool hasPlatformIcons() const;

    virtual bool hasPlatformProfileCards() const;

    virtual void getLinkedXuids(std::function<void (std::string, std::string)>, std::vector<std::string> const&);

    virtual void getLinkedPlatformIds(std::function<void (std::string, std::string)>, std::vector<std::string> const&);

    virtual ::Social::PlatformImageService& getPlatformFriendsImageService();

    virtual void getPlatformProfile(std::string const&, std::function<void (Social::PlatformUserProfileData&)>);

    virtual void getPlatformProfiles(std::vector<std::string> const&, std::function<void (std::vector<Social::PlatformUserProfileData>&&)>);

    virtual ::Social::ProfileImageOptions getDefaultProfileImageOptions() const;

    virtual ::Bedrock::Threading::Async<std::shared_ptr<mce::Image>> getProfileImage(::Social::ProfileImageOptions const&, std::string const&);

    virtual ::Bedrock::Threading::Async<Core::PathBuffer<std::string>> getProfileImageFile(::Social::ProfileImageOptions const&, std::string const&);

    virtual bool canSignInToXBL() const;

    virtual void setNeedsPlatformReconnect();

    virtual std::string getPlatformOfflineID() const;

    virtual std::string getPlatformOnlineID() const;

    virtual void associateClientInstance(std::shared_ptr<IClientInstance>);

    virtual std::weak_ptr<const IClientInstance> const getAssociateClientInstance() const;

    virtual std::weak_ptr<IClientInstance> getAssociateClientInstance();

    virtual void setPresence(std::string const&);

    virtual void clearPresence();

    virtual bool hasPlayedLegacyGame() const;

    virtual bool getLegacyOptionsData(std::vector<uchar>&) const;

    virtual void onAppSuspend();

    virtual void onAppResumed();

    virtual std::optional<Social::UserBanDetails> getBanInfo() const;

    virtual void updateAppearanceDisplayName(std::string const&);

    virtual void initIdentity();

    virtual void setUserManager(::Bedrock::NonOwnerPointer<Social::UserManager>);

    virtual void _onSignOut(::Social::IdentityType);

    virtual void _notifyIdentitiesOfSignIn(std::shared_ptr<Social::Identity>, std::function<bool (Social::IdentityEventResponse, std::shared_ptr<Social::Identity>)>);

    virtual void _notifyIdentitySignInEventSubscribers(::Social::IdentityType);

    virtual void _notifyIdentitySignOutEventSubscribers(::Social::IdentityType);

    virtual void setStorageArea(std::shared_ptr<Core::FileStorageArea>, ::BuildPlatform);

    virtual void _postSignInSteps(::Social::MultiIdentitySigninResult, std::vector<Social::IdentityType>&);

    virtual void _finalizeSignIn(::Social::MultiIdentitySigninResult&&, std::vector<Social::IdentityType>&&, std::set<Social::IdentityType>&&);

    virtual void _onGameControllerIdChanged(int, int);

    virtual void _doFinalize();

    virtual void _doDisconnect() = 0;

    virtual void _doConnectAsync(std::shared_ptr<CallbackTokenContext<std::function<void (Social::UserPlatformConnectionResult)>>>, bool) = 0;

    virtual std::string _getPlatformDisplayName() const = 0;

    virtual bool _checkPlatformUserXBLSignInConstraints() const = 0;

    virtual bool _isPlatformParentalControlsEnabled() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _genericIdentityEventNotify(
        std::function<Social::IdentityEventResponse(std::shared_ptr<Social::Identity>)>,
        std::function<bool(Social::IdentityEventResponse, std::shared_ptr<Social::Identity>)>
    );

    MCNAPI void _updateDisplayName();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _onPermissionsChange(std::weak_ptr<Social::UserImpl>);

    MCNAPI static std::shared_ptr<Social::User>
    create(std::shared_ptr<Social::UserCreationData>, ::Social::UserDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initStorageAreas();

    MCNAPI ::GameUserType $getType() const;

    MCNAPI bool $isPrimaryUser() const;

    MCNAPI bool $isAnonymous() const;

    MCNAPI bool $isConnected() const;

    MCNAPI bool $isReady() const;

    MCNAPI bool $needsPlatformReconnect() const;

    MCNAPI bool $isSignedIn(::Social::IdentityType) const;

    MCNAPI bool $isSignInInProgress() const;

    MCNAPI bool $isSignInInProgress(::Social::IdentityType) const;

    MCNAPI bool $signIn(::Social::UserSignInProperties const&);

    MCNAPI void $cancelSignIn(::Social::IdentityType);

    MCNAPI void $signOut(::Social::IdentityType, std::function<void(bool)>);

    MCNAPI void $clearCachedCredentials(::Social::IdentityType);

    MCNAPI bool $hasNetworkPrivileges() const;

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerIdentitySignInSubscriber(::Social::IdentityType, std::function<void(uint, Social::IdentityType)>);

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerIdentitySignOutSubscriber(::Social::IdentityType, std::function<void(uint, Social::IdentityType)>);

    MCNAPI ::CallbackToken $connectAsync(std::function<void(Social::UserPlatformConnectionResult)>, bool);

    MCNAPI void $enterOfflineMode(std::function<void(bool)>);

    MCNAPI ::Social::UserPlatformConnectionState $getPlatformConnectionState() const;

    MCNAPI uint $getLocalUserId() const;

    MCNAPI std::string const& $getId(::Social::IdentityType) const;

    MCNAPI std::string const& $getMinecraftAccountID() const;

    MCNAPI ::Bedrock::Threading::Async<Social::AuthToken>
    $getAuthToken(::Social::IdentityType, std::string const&) const;

    MCNAPI void $getAuthToken(::Social::IdentityType, std::string const&, std::function<void(Social::AuthToken)>) const;

    MCNAPI std::string const& $getPlayFabSessionTicket() const;

    MCNAPI std::string const& $getPlayFabEntityToken() const;

    MCNAPI std::shared_ptr<const Social::Identity> const $getIdentity(::Social::IdentityType) const;

    MCNAPI std::shared_ptr<Social::Identity> $getIdentity(::Social::IdentityType);

    MCNAPI bool $hasIdentity(::Social::IdentityType) const;

    MCNAPI ::MinecraftAccountPermissions $getMinecraftAccountPermissions() const;

    MCNAPI ::Bedrock::Threading::Async<bool> $unlinkXboxLiveAccount();

    MCNAPI void $getUserDataObject(::Social::IUserDataObject&) const;

    MCNAPI void $setUserDataObject(::Social::IUserDataObject const&);

    MCNAPI ::Social::UserData const $getUserData(std::string const&) const;

    MCNAPI void $setUserData(std::string const&, ::Social::UserData const&);

    MCNAPI void $tick();

    MCNAPI void $finalize();

    MCNAPI void $disconnect();

    MCNAPI void $signOutFromPlatform();

    MCNAPI bool $isFinalized() const;

    MCNAPI ::CloudSaveSystemWrapper& $getCloudSaveSystem();

    MCNAPI std::string $getDisplayName(::Social::IdentityType) const;

    MCNAPI std::string $getDisplayName() const;

    MCNAPI std::shared_ptr<Core::FileStorageArea> const $getStorageArea() const;

    MCNAPI ::Core::Path $getSettingsDirectoryPath() const;

    MCNAPI bool $hasValidSettingsDirectoryPath() const;

    MCNAPI std::shared_ptr<IOptionRegistry> const $getOptions() const;

    MCNAPI ::Social::XboxLiveUser& $getLiveUser() const;

    MCNAPI void $checkPrivilegeWithUIAsync(int, std::string const&, std::function<void(Social::PermissionCheckResult)>);

    MCNAPI ::RelationshipStatus $mayChatWith(std::string const&);

    MCNAPI bool $mayChatWithMe(std::string const&) const;

    MCNAPI bool $isMutedPlayer(std::string const&);

    MCNAPI ::Social::PermissionCheckResult $multiplayerAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $chatAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $addFriendAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $userGeneratedContentAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $createAndJoinClubsAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $viewingProfilesAllowed() const;

    MCNAPI ::Social::PermissionCheckResult $uploadCapturesAllowed() const;

    MCNAPI bool $isRemotePlatformUser() const;

    MCNAPI bool $shouldClearChatOnJoinGame() const;

    MCNAPI int $getGameControllerId() const;

    MCNAPI void $setGameControllerId(int);

    MCNAPI std::string $getPlatformID() const;

    MCNAPI bool $hasPremiumPlatformAccess() const;

    MCNAPI void $checkPremiumPlatformStatusAsync(std::function<void(bool)>);

    MCNAPI bool $hasPlatformIcons() const;

    MCNAPI bool $hasPlatformProfileCards() const;

    MCNAPI void $getLinkedXuids(std::function<void(std::string, std::string)>, std::vector<std::string> const&);

    MCNAPI void $getLinkedPlatformIds(std::function<void(std::string, std::string)>, std::vector<std::string> const&);

    MCNAPI ::Social::PlatformImageService& $getPlatformFriendsImageService();

    MCNAPI void $getPlatformProfile(std::string const&, std::function<void(Social::PlatformUserProfileData&)>);

    MCNAPI void $getPlatformProfiles(
        std::vector<std::string> const&,
        std::function<void(std::vector<Social::PlatformUserProfileData>&&)>
    );

    MCNAPI ::Social::ProfileImageOptions $getDefaultProfileImageOptions() const;

    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<mce::Image>>
    $getProfileImage(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    $getProfileImageFile(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI bool $canSignInToXBL() const;

    MCNAPI void $setNeedsPlatformReconnect();

    MCNAPI std::string $getPlatformOfflineID() const;

    MCNAPI std::string $getPlatformOnlineID() const;

    MCNAPI void $associateClientInstance(std::shared_ptr<IClientInstance>);

    MCNAPI std::weak_ptr<const IClientInstance> const $getAssociateClientInstance() const;

    MCNAPI std::weak_ptr<IClientInstance> $getAssociateClientInstance();

    MCNAPI void $setPresence(std::string const&);

    MCNAPI void $clearPresence();

    MCNAPI bool $hasPlayedLegacyGame() const;

    MCNAPI bool $getLegacyOptionsData(std::vector<uchar>&) const;

    MCNAPI void $onAppSuspend();

    MCNAPI void $onAppResumed();

    MCNAPI std::optional<Social::UserBanDetails> $getBanInfo() const;

    MCNAPI void $updateAppearanceDisplayName(std::string const&);

    MCNAPI void $initIdentity();

    MCNAPI void $setUserManager(::Bedrock::NonOwnerPointer<Social::UserManager>);

    MCNAPI void $_onSignOut(::Social::IdentityType);

    MCNAPI void $_notifyIdentitiesOfSignIn(
        std::shared_ptr<Social::Identity>,
        std::function<bool(Social::IdentityEventResponse, std::shared_ptr<Social::Identity>)>
    );

    MCNAPI void $_notifyIdentitySignInEventSubscribers(::Social::IdentityType);

    MCNAPI void $_notifyIdentitySignOutEventSubscribers(::Social::IdentityType);

    MCNAPI void $setStorageArea(std::shared_ptr<Core::FileStorageArea>, ::BuildPlatform);

    MCNAPI void $_postSignInSteps(::Social::MultiIdentitySigninResult, std::vector<Social::IdentityType>&);

    MCNAPI void $_finalizeSignIn(
        ::Social::MultiIdentitySigninResult&&,
        std::vector<Social::IdentityType>&&,
        std::set<Social::IdentityType>&&
    );

    MCNAPI void $_onGameControllerIdChanged(int, int);

    MCNAPI void $_doFinalize();

    MCNAPI bool $_isPlatformParentalControlsEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
