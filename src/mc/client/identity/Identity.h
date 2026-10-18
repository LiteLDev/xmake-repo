#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/IdentitySignInState.h"
#include "mc/client/social/AuthToken.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/PermissionDenyReason.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserDataObject; }
namespace Social { class User; }
namespace Social { class UserData; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct PlatformUserProfileData; }
namespace Social { struct PlayerIDs; }
namespace Social { struct SingleIdentitySignInResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class Identity : public ::std::enable_shared_from_this<Social::Identity> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<Social::User>>             mWeakOwner;
    ::ll::TypedStorage<1, 1, bool>                                     mInitialized;
    ::ll::TypedStorage<8, 24, std::string>                             mId;
    ::ll::UntypedStorage<8, 24>                                        mAuthToken;
    ::ll::TypedStorage<4, 4, std::atomic<Social::IdentitySignInState>> mSignInState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Identity();

    virtual ::Social::IdentityEventResponse initialize(std::weak_ptr<Social::User>);

    virtual ::Social::IdentityType getType() const = 0;

    virtual void tick();

    virtual ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> signIn(::Social::IdentitySignInProperties&&);

    virtual void cancelSignIn();

    virtual ::Bedrock::Threading::Async<bool> signOut();

    virtual void doDisconnect();

    virtual bool isSignedIn() const;

    virtual bool isNewAccount() const;

    virtual bool isSignInInProgress() const;

    virtual bool isGuest() const;

    virtual bool isRemote() const;

    virtual bool isUserBanned() const;

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;

    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType);

    virtual std::string const& getId() const;

    virtual ::Social::PlayerIDs getIds() const;

    virtual ::Bedrock::Threading::Async<Social::AuthToken> getAuthToken(std::string const&) const;

    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    virtual void setUserDataObject(::Social::IUserDataObject const&);

    virtual ::Social::UserData const getUserData(std::string const&) const;

    virtual void setUserData(std::string const&, ::Social::UserData const&);

    virtual bool hasCachedCredentials() const;

    virtual void clearCachedCredentials();

    virtual std::string getDisplayName() const;

    virtual void setPresence(std::string const&);

    virtual void clearPresence();

    virtual bool hasPlayedLegacyGame() const;

    virtual bool getLegacyOptionsData(std::vector<uchar>&);

    virtual void checkIsLegacyPlayer(std::weak_ptr<Social::User>);

    virtual bool hasPremiumPlatformAccess() const;

    virtual void checkPremiumPlatformStatusAsync(std::function<void (bool)>);

    virtual bool hasPlatformIcons() const;

    virtual bool hasPlatformProfileCards() const;

    virtual std::string getPlatformId() const;

    virtual std::string getPlatformOfflineID() const;

    virtual std::string getPlatformOnlineID() const;

    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    virtual ::Social::PermissionDenyReason isUserGeneratedContentAllowed() const;

    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    virtual int addPermissionsChangeListener(std::function<void ()>);

    virtual void removePermissionsChangeListener(int);

    virtual bool isPlatformParentalControlsEnabled() const;

    virtual void refreshPlatformParentalControlsSetting();

    virtual void refreshFriendListProfileDataIfAllowed();

    virtual bool isBlockingUser(std::string const&) const;

    virtual ::Bedrock::Threading::Async<Social::PlatformUserProfileData> getProfile(std::string const&);

    virtual ::Bedrock::Threading::Async<std::vector<Social::PlatformUserProfileData>> getProfiles(std::vector<std::string> const&);

    virtual ::Bedrock::Threading::Async<std::vector<Social::PlatformUserProfileData>> getFriendProfiles();

    virtual void pruneProfileImageCache();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> _completeSignIn(
        ::IMinecraftEventing::SignInAccountType,
        ::Social::IdentitySignInProperties&&,
        std::error_code,
        std::string,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::IdentityEventResponse $initialize(std::weak_ptr<Social::User>);

    MCNAPI void $tick();

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    $signIn(::Social::IdentitySignInProperties&&);

    MCNAPI void $cancelSignIn();

    MCNAPI ::Bedrock::Threading::Async<bool> $signOut();

    MCNAPI void $doDisconnect();

    MCNAPI bool $isSignedIn() const;

    MCNAPI bool $isNewAccount() const;

    MCNAPI bool $isSignInInProgress() const;

    MCNAPI bool $isGuest() const;

    MCNAPI bool $isRemote() const;

    MCNAPI bool $isUserBanned() const;

    MCNAPI ::gsl::span<const Social::IdentityType> $getDependencies() const;

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity&);

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignOut(::Social::IdentityType);

    MCNAPI std::string const& $getId() const;

    MCNAPI ::Social::PlayerIDs $getIds() const;

    MCNAPI ::Bedrock::Threading::Async<Social::AuthToken> $getAuthToken(std::string const&) const;

    MCNAPI void $getUserDataObject(::Social::IUserDataObject&) const;

    MCNAPI void $setUserDataObject(::Social::IUserDataObject const&);

    MCNAPI ::Social::UserData const $getUserData(std::string const&) const;

    MCNAPI void $setUserData(std::string const&, ::Social::UserData const&);

    MCNAPI bool $hasCachedCredentials() const;

    MCNAPI void $clearCachedCredentials();

    MCNAPI std::string $getDisplayName() const;

    MCNAPI void $setPresence(std::string const&);

    MCNAPI void $clearPresence();

    MCNAPI bool $hasPlayedLegacyGame() const;

    MCNAPI bool $getLegacyOptionsData(std::vector<uchar>&);

    MCNAPI void $checkIsLegacyPlayer(std::weak_ptr<Social::User>);

    MCNAPI bool $hasPremiumPlatformAccess() const;

    MCNAPI void $checkPremiumPlatformStatusAsync(std::function<void(bool)>);

    MCNAPI bool $hasPlatformIcons() const;

    MCNAPI bool $hasPlatformProfileCards() const;

    MCNAPI std::string $getPlatformId() const;

    MCNAPI std::string $getPlatformOfflineID() const;

    MCNAPI std::string $getPlatformOnlineID() const;

    MCNAPI ::Social::PermissionDenyReason $isMultiplayerAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isChatAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isAddFriendAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUserGeneratedContentAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isCreateAndJoinClubsAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isViewingProfilesAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUploadCapturesAllowed() const;

    MCNAPI int $addPermissionsChangeListener(std::function<void()>);

    MCNAPI void $removePermissionsChangeListener(int);

    MCNAPI bool $isPlatformParentalControlsEnabled() const;

    MCNAPI void $refreshPlatformParentalControlsSetting();

    MCNAPI void $refreshFriendListProfileDataIfAllowed();

    MCNAPI bool $isBlockingUser(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<Social::PlatformUserProfileData> $getProfile(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<std::vector<Social::PlatformUserProfileData>>
    $getProfiles(std::vector<std::string> const&);

    MCNAPI ::Bedrock::Threading::Async<std::vector<Social::PlatformUserProfileData>> $getFriendProfiles();

    MCNAPI void $pruneProfileImageCache();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class Identity {};
#endif // @header-generator platform

} // namespace Social
