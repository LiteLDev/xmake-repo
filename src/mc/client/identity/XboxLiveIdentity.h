#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/Identity.h"
#include "mc/client/social/ProfileImageRequester_XboxLive.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/IdentityEventResponse.h"
#include "mc/identity/IdentityType.h"
#include "mc/identity/PermissionDenyReason.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct XalPlatformOperationToken;
struct XalUser;
enum XalAgeGroup : uint;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Screenshots { class ScreenshotGallery; }
namespace Social { class ProfileImageOptions; }
namespace Social { class XboxLiveUser; }
namespace Social { struct AuthToken; }
namespace Social { struct IdentitySignInProperties; }
namespace Social { struct SingleIdentitySignInResult; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveIdentity : public ::Social::Identity {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XboxLiveUser>>> mXboxLiveUser;
    ::ll::TypedStorage<8, 24, std::string> mGamertag;
    ::ll::TypedStorage<1, 1, bool> mUserHasPlayFabIdentity;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mIsAttemptingSignIn;
    ::ll::UntypedStorage<8, 8> mRemoteConnectOperation;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mCreationTime;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mFriendUpdateTime;
    ::ll::TypedStorage<1, 1, bool> mNewlyCreatedAccount;
    ::ll::TypedStorage<8, 512, ::Social::ProfileImageRequester_XboxLive> mProfileImageRequester;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Screenshots::ScreenshotGallery>> mScreenshotGallery;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mStorageDirectoryChangedSubscriber;
    ::ll::UntypedStorage<8, 88> mScreenshotGalleryChangedSubscribers;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~XboxLiveIdentity();

    virtual ::Social::IdentityType getType() const;

    virtual ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult> signIn(::Social::IdentitySignInProperties&&);

    virtual void cancelSignIn();

    virtual ::Bedrock::Threading::Async<bool> signOut();

    virtual bool isSignedIn() const;

    virtual bool isNewAccount() const;

    virtual bool isSignInInProgress() const;

    virtual bool isGuest() const;

    virtual ::gsl::span<const Social::IdentityType> getDependencies() const;

    virtual ::Social::IdentityEventResponse onIdentitySignIn(::Social::Identity&);

    virtual ::Bedrock::Threading::Async<Social::AuthToken> getAuthToken(std::string const&) const;

    virtual void clearCachedCredentials();

    virtual std::string getDisplayName() const;

    virtual void setPresence(std::string const&);

    virtual void clearPresence();

    virtual ::Social::PermissionDenyReason isMultiplayerAllowed() const;

    virtual ::Social::PermissionDenyReason isChatAllowed() const;

    virtual ::Social::PermissionDenyReason isAddFriendAllowed() const;

    virtual ::Social::PermissionDenyReason isCreateAndJoinClubsAllowed() const;

    virtual ::Social::PermissionDenyReason isViewingProfilesAllowed() const;

    virtual ::Social::PermissionDenyReason isUploadCapturesAllowed() const;

    virtual int addPermissionsChangeListener(std::function<void ()>);

    virtual void removePermissionsChangeListener(int);

    virtual void refreshFriendListProfileDataIfAllowed();

    virtual void pruneProfileImageCache();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::tuple<std::error_code, bool>>
        _handleSignInResult(std::error_code, ::Social::XsapiHandle<XalUser*>);

    MCNAPI ::Bedrock::Result<void, std::error_code> _initScreenshotGallery();

    MCNAPI ::Bedrock::PubSub::Subscription
        addScreenshotGalleryChangedListener(std::function<void(std::shared_ptr<Screenshots::ScreenshotGallery>)>);

    MCNAPI void clearRichPresenceOverride();

    MCNAPI ::XalAgeGroup getAgeGroup() const;

    MCNAPI ::Social::XboxLiveUser& getLiveUser() const;

    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<mce::Image>>
    getProfileImage(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    getProfileImageFile(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI std::weak_ptr<Screenshots::ScreenshotGallery> getScreenshotGallery() const;

    MCNAPI bool isChildAccount() const;

    MCNAPI bool isInitialSignInComplete() const;

    MCNAPI void setRichPresenceOverride(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::IdentityType getTypeStatic();

    MCNAPI static std::string xalAgeGroupToString(::XalAgeGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Social::IdentityType $getType() const;

    MCNAPI ::Bedrock::Threading::Async<Social::SingleIdentitySignInResult>
    $signIn(::Social::IdentitySignInProperties&&);

    MCNAPI void $cancelSignIn();

    MCNAPI ::Bedrock::Threading::Async<bool> $signOut();

    MCNAPI bool $isSignedIn() const;

    MCNAPI bool $isNewAccount() const;

    MCNAPI bool $isSignInInProgress() const;

    MCNAPI bool $isGuest() const;

    MCNAPI ::gsl::span<const Social::IdentityType> $getDependencies() const;

    MCNAPI ::Social::IdentityEventResponse $onIdentitySignIn(::Social::Identity&);

    MCNAPI ::Bedrock::Threading::Async<Social::AuthToken> $getAuthToken(std::string const&) const;

    MCNAPI void $clearCachedCredentials();

    MCNAPI std::string $getDisplayName() const;

    MCNAPI void $setPresence(std::string const&);

    MCNAPI void $clearPresence();

    MCNAPI ::Social::PermissionDenyReason $isMultiplayerAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isChatAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isAddFriendAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isCreateAndJoinClubsAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isViewingProfilesAllowed() const;

    MCNAPI ::Social::PermissionDenyReason $isUploadCapturesAllowed() const;

    MCNAPI int $addPermissionsChangeListener(std::function<void()>);

    MCNAPI void $removePermissionsChangeListener(int);

    MCNAPI void $refreshFriendListProfileDataIfAllowed();

    MCNAPI void $pruneProfileImageCache();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class XboxLiveIdentity {};
#endif // @header-generator platform

} // namespace Social
