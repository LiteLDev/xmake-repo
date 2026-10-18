#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/client/identity/IdentityEventNotifier.h"
#include "mc/client/identity/PlayFabBanDetails.h"
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/client/identity/UserDataCache.h"
#include "mc/client/social/ProfileImageChangeTracker.h"
#include "mc/client/social/ProfileImageRequester_Minecraft.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/PermissionDenyReason.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Social { class AuthServiceApi; }
namespace Social { class IUserDataObject; }
namespace Social { class PlayFabApi; }
namespace Social { class PlayFabSignInHandler; }
namespace Social { class ProfileImageOptions; }
namespace Social { class User; }
namespace Social { class UserData; }
namespace Social { struct AuthToken; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct PlayFabEntityTokenResult; }
namespace Social { struct PlayFabSignInResult; }
namespace Social { struct PlayerIDs; }
namespace Social { struct SingleIdentitySignInResult; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlayFabIdentity : public ::Social::Identity {
#else // @header-generator platform
class PlayFabIdentity {
#endif // @header-generator platform
public:
    // PlayFabIdentity inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class RetryType : int {
        Retry   = 0,
        Refresh = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>> mAuthServiceApi;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>>     mPlayFabApi;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mGeneralTaskGroup;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                             mRefreshTaskGroup;
    ::ll::TypedStorage<4, 40, std::recursive_mutex>                                     mSessionDataMutex;
    ::ll::TypedStorage<8, 24, std::string>                                              mImposterPlayFabId;
    ::ll::TypedStorage<8, 24, std::string>                                              mPlayerTitleAccountId;
    ::ll::TypedStorage<8, 48, std::optional<Social::PlayFabBanDetails>>                 mBanDetails;
    ::ll::TypedStorage<8, 24, std::string>                                              mLinkedXUID;
    ::ll::TypedStorage<8, 24, std::string>                                              mLinkedPlayStationNetworkId;
    ::ll::TypedStorage<8, 24, std::string>                                              mLinkedNintendoSwitchAccountId;
    ::ll::TypedStorage<8, 24, std::string>                                              mFallbackId;
    ::ll::TypedStorage<8, 24, std::string>                                              mSessionTicket;
    ::ll::TypedStorage<8, 24, std::string>                                              mTitleEntityToken;
    ::ll::UntypedStorage<1, 144>                                                        mRetryRefreshMutex;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>>        mSessionExpiration;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRoughServerTimeCorrectionFactor;
    ::ll::TypedStorage<4, 20, ::RetryDelay>                                      mRetryDelay;
    ::ll::TypedStorage<1, 1, bool>                                               mIsSessionRefreshing;
    ::ll::UntypedStorage<8, 8>                                                   mSessionExpirationBuffer;
    ::ll::UntypedStorage<8, 48>                                                  mRetryStatusCallback;
    ::ll::TypedStorage<4, 4, int>                                                mRetryCount;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mFlightingSub;
    ::ll::TypedStorage<1, 1, bool>                                               mRetryShutoff;
    ::ll::TypedStorage<4, 4, int>                                                mBaseRetryIntervalMilliseconds;
    ::ll::UntypedStorage<1, 144>                                                 mSignInHandlerMutex;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::PlayFabSignInHandler>>     mSignInHandler;
    ::ll::UntypedStorage<8, 176>                                                 mPermissionsChangeNotifier;
    ::ll::TypedStorage<8, 512, ::Social::ProfileImageRequester_Minecraft>        mProfileImageRequester;
    ::ll::TypedStorage<8, 496, ::Social::ProfileImageChangeTracker>              mProfileImageChangeTracker;
    ::ll::UntypedStorage<1, 140>                                                 mUserDataMutex;
    ::ll::TypedStorage<4, 4, int>                                                mProfileVersion;
    ::ll::UntypedStorage<8, 40>                                                  mSyncedDataObjects;
    ::ll::UntypedStorage<8, 16>                                                  mCurrentWriteTask;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                      mCacheTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                               mCacheDirty;
    ::ll::TypedStorage<8, 40, ::Social::UserDataCache>                           mUserDataCache;
    ::ll::UntypedStorage<4, 4>                                                   mSignInAccountType;
    ::ll::TypedStorage<1, 1, bool>                                               mHasCachedCredentials;
    ::ll::TypedStorage<1, 1, bool>                                               mNewlyCreatedAccount;
    ::ll::TypedStorage<1, 1, bool>                                               mPlayerHasBeenBanned;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                  mIsSignedInOffline;
    ::ll::UntypedStorage<1, 16>                                                  mUserDataObjectLoadedFromCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabIdentity();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PlayFabIdentity();

    virtual ::Social::IdentityEventResponse initialize(std::weak_ptr<Social::User>);

    virtual ::Social::IdentityType getType() const;

    virtual void tick();

    virtual ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> signIn(::Social::IdentitySignInProperties&&);

    virtual bool isNewAccount() const;

    virtual bool isUserBanned() const;

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;

    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    virtual ::Social::IdentityEventResponse onIdentitySignOut(::Social::IdentityType);

    virtual std::string const& getId() const;

    virtual ::Social::PlayerIDs getIds() const;

    virtual void getUserDataObject(::Social::IUserDataObject&) const;

    virtual void setUserDataObject(::Social::IUserDataObject const&);

    virtual ::Social::UserData const getUserData(std::string const&) const;

    virtual void setUserData(std::string const&, ::Social::UserData const&);

    virtual bool hasCachedCredentials() const;

    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    virtual ::Social::PermissionDenyReason isUserGeneratedContentAllowed() const;

    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    virtual int addPermissionsChangeListener(std::function<void ()>);

    virtual void removePermissionsChangeListener(int);

    virtual void pruneProfileImageCache();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cachePlayFabId() const;

    MCNAPI void _cacheUserDataObjects();

    MCNAPI void _cancelRetry();

    MCNAPI void _clear(bool);

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    _completeSignInWithLinking(::Social::IdentitySignInProperties&&);

    MCNAPI bool _detectIfPlayerBanned(
        ::Social::PlayFabStatus,
        std::optional<Social::PlayFabBanDetails> const&,
        std::chrono::duration<long long, std::ratio<1, 1>>
    );

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> _doSignIntoPlayFab(
        std::shared_ptr<Social::PlayFabSignInHandler>&,
        std::string const&,
        ::Social::IdentitySignInProperties&&
    );

    MCNAPI ::Core::PathBuffer<std::string> _getCurrentUserDataFilename(::Core::PathBuffer<std::string> const&) const;

    MCNAPI ::Bedrock::Threading::Async<bool> _getMasterPlayerAccountEntityToken();

    MCNAPI ::Core::PathBuffer<std::string>
    _getUserDataFilename(::Core::PathBuffer<std::string> const&, std::string const&, bool) const;

    MCNAPI void _loadUserDataObjectsFromCache();

    MCNAPI std::string _lookupPlayFabIdFromAssociatedId(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<bool> _refreshUserData();

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    _signInFailOneToOneLink(::Social::IdentitySignInProperties&&, ::Social::PlayFabStatus);

    MCNAPI ::Social::AuthToken const& getAuthTokenSynchronous() const;

    MCNAPI std::optional<Social::PlayFabBanDetails> getBanDetails() const;

    MCNAPI std::string getPlayerTitleAccountId() const;

    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<mce::Image>>
    getProfileImage(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI ::Social::ProfileImageChangeTracker& getProfileImageChangeTracker();

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    getProfileImageFile(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI int getProfileVersion() const;

    MCNAPI std::string const& getSessionTicket() const;

    MCNAPI std::string const& getTitleEntityToken_NOT_CROSS_FRANCHISE() const;

    MCNAPI bool isSignedInOfflineAndNetworkDisconnected() const;

    MCNAPI void setProfileVersion(int);

    MCNAPI void setRetryStatusCallback(std::function<void(Social::PlayFabStatus)>);

    MCNAPI ::Bedrock::Threading::Async<bool> unlinkXboxLiveAccount(::Social::User&);

    MCNAPI void updateProfileHash(std::string const&);

    MCNAPI void const writePlayerEvent(std::string const&, ::Json::Value const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool allowNSOLink();

    MCNAPI static std::shared_ptr<Social::PlayFabIdentity> create(
        ::gsl::not_null<std::shared_ptr<Social::AuthServiceApi>>,
        ::gsl::not_null<std::shared_ptr<Social::PlayFabApi>>
    );

    MCNAPI static std::string const getPlayfabUrl();

    MCNAPI static ::Social::IdentityType getTypeStatic();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& sAssociationMapFilename();

    MCNAPI static std::string const& sDefaultCacheId();

    MCNAPI static std::string const& sPlayFabURL();

    MCNAPI static std::string const& sProfileVersionLabel();

    MCNAPI static std::string const& sSynchronizedLabel();
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

    MCNAPI ::Social::IdentityType $getType() const;

    MCNAPI void $tick();

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    $signIn(::Social::IdentitySignInProperties&&);

    MCNAPI bool $isNewAccount() const;

    MCNAPI bool $isUserBanned() const;

    MCNAPI ::gsl::span<const Social::IdentityType> $getDependencies() const;

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity&);

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignOut(::Social::IdentityType);

    MCNAPI std::string const& $getId() const;

    MCNAPI ::Social::PlayerIDs $getIds() const;

    MCNAPI void $getUserDataObject(::Social::IUserDataObject&) const;

    MCNAPI void $setUserDataObject(::Social::IUserDataObject const&);

    MCNAPI ::Social::UserData const $getUserData(std::string const&) const;

    MCNAPI void $setUserData(std::string const&, ::Social::UserData const&);

    MCNAPI bool $hasCachedCredentials() const;

    MCNAPI ::Social::PermissionDenyReason $isMultiplayerAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isChatAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isAddFriendAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUserGeneratedContentAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isCreateAndJoinClubsAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isViewingProfilesAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUploadCapturesAllowed() const;

    MCNAPI int $addPermissionsChangeListener(std::function<void()>);

    MCNAPI void $removePermissionsChangeListener(int);

    MCNAPI void $pruneProfileImageCache();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class RetryType : int {};
#endif // @header-generator platform
};

} // namespace Social
