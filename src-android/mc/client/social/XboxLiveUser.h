#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/IdentityEventNotifier.h"
#include "mc/client/social/PlayerAchievementData.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/SocialGroupState.h"
#include "mc/client/social/XboxLivePrivacyValue.h"
#include "mc/client/social/XboxLiveUserProfileData.h"
#include "mc/client/social/XboxLiveUserStatistics.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/NetworkChangeObserver.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BasicTimer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/identity/PermissionDenyReason.h"
#include "mc/identity/SocialChangeAction.h"

// auto generated forward declare list
// clang-format off
struct XalRegistrationToken;
struct XalUser;
struct XblContext;
namespace Core { class Path; }
namespace Core { class SingleThreadedLock; }
namespace Json { class Value; }
namespace Social { class XalApiWrapper; }
namespace Social { class XblApiWrapper; }
namespace Social { class XboxLiveUserAchievements; }
namespace Social { class XboxLiveUserInfo; }
namespace Social { class XboxLiveUserObserver; }
namespace Social { class XboxLiveUserStatistics; }
namespace Social { struct AuthToken; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct SocialChangeResult; }
namespace Social { struct XboxLivePermission; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace Social {

class XboxLiveUser : public ::AppPlatformListener,
                     public ::NetworkChangeObserver,
                     public ::std::enable_shared_from_this<Social::XboxLiveUser> {
public:
    // XboxLiveUser inner types declare
    // clang-format off
    struct ProfileCallback;
    template<typename T0> class RegistrationToken;
    // clang-format on

    // XboxLiveUser inner types define
    struct ProfileCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mAction;
        ::ll::UntypedStorage<8, 32> mXuids;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProfileCallback& operator=(ProfileCallback const&);
        ProfileCallback(ProfileCallback const&);
        ProfileCallback();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ProfileCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    template <typename T0>
    class RegistrationToken {};

    using GetProfileWithXuidAsyncResult = ::Bedrock::Threading::Async<Social::XboxLiveUserProfileData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::PlayerAchievementData> mCachedAchievementData;
    ::ll::UntypedStorage<8, 24> mXboxLiveUserInfo;
    ::ll::UntypedStorage<8, 112> mCurrentUser;
    ::ll::UntypedStorage<8, 112> mXblContext;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mPrivacyListsRefreshInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mTimeMarkOfPrivacyListsRefresh;
    ::ll::TypedStorage<8, 24, std::vector<int>> mUserVisitedBiomes;
    ::ll::TypedStorage<1, 1, std::atomic<bool>> mAreNotificationsRegistered;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<Social::XboxLiveUserProfileData>>> mXuidProfileMap;
    ::ll::TypedStorage<8, 24, std::vector<const Social::XboxLiveUserProfileData*>> mFriendList;
    ::ll::TypedStorage<8, 24, std::vector<Social::XboxLiveUserProfileData*>> mProfileQueries;
    ::ll::TypedStorage<8, 24, std::vector<Social::XboxLiveUserProfileData*>> mPermissionQueries;
    ::ll::TypedStorage<1, 1, bool> mTelemetryIsActive;
    ::ll::UntypedStorage<8, 16> mUserEventRegistrationToken;
    ::ll::UntypedStorage<4, 8> mInviteRegistrationToken;
    ::ll::UntypedStorage<4, 8> mAchievementRegistrationToken;
    ::ll::TypedStorage<8, 24, std::string> mRichPresenceOverride;
    ::ll::TypedStorage<8, 24, std::string> mRichPresence;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mUsersUpdateTime;
    ::ll::UntypedStorage<8, 616> mCallbackQueue;
    ::ll::TypedStorage<1, 1, bool> mAppIsActive;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::UntypedStorage<8, 40> mObserverSubject;
    ::ll::UntypedStorage<8, 64> mProfileRequestTimer;
    ::ll::UntypedStorage<8, 64> mPermissionRequestTimer;
    ::ll::TypedStorage<8, 24, std::vector<Social::XboxLiveUser::ProfileCallback>> mProfileCallbacks;
    ::ll::UntypedStorage<8, 24> mStorageAreaPathOverride;
    ::ll::TypedStorage<1, 1, bool> mIsRealTimeActivityAllowed;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::XboxLiveUserStatistics>> mStatistics;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::XboxLiveUserAchievements>> mAchievements;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mNetworkTaskGroup;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>>> mXalApi;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XblApiWrapper>>> mXblApi;
    ::ll::UntypedStorage<8, 16> mWritingBiomesTask;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mDiskTaskGroup;
    ::ll::UntypedStorage<8, 176> mPermissionsChangeNotifier;
    ::ll::UntypedStorage<8, 184> mSocialChangeNotifier;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XboxLiveUser();

    virtual void onAppSuspended();

    virtual void onAppResumed();

    virtual void onNetworkConfigurationChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _beginSavingVisitedBiomes();

    MCNAPI ::Social::XboxLiveUserProfileData& _getUserProfileDataWithXuid(std::string const&);

    MCNAPI ::RelationshipStatus _mayChatWith(std::string const&);

    MCNAPI void _notifyFailedQuery(
        std::vector<Social::XboxLiveUserProfileData*> const&,
        ::Social::XboxLiveUserProfileData::FetchedData
    );

    MCNAPI void _notifyXboxUserBlocked(std::string const&);

    MCNAPI void _notifyXboxUserUnblocked(std::string const&);

    MCNAPI void _publishRichPresence();

    MCNAPI void _pushSocialChangeToMainThread(std::string const&, ::Social::SocialChangeAction, bool);

    MCNAPI void _saveVisitedBiomes();

    MCNAPI int addAchievementUpdateListener(std::function<void()>);

    MCNAPI void addObserver(::Social::XboxLiveUserObserver&);

    MCNAPI int addPermissionsChangeListener(std::function<void()>);

    MCNAPI int addSocialChangeListener(std::function<void(Social::SocialChangeResult)>);

    MCNAPI int addStatisticUpdateListener(std::function<void()>);

    MCNAPI void addUserToPermissionQueue(::Social::XboxLiveUserProfileData&);

    MCNAPI void addUserToProfileQueue(::Social::XboxLiveUserProfileData&);

    MCNAPI ::Bedrock::Threading::Async<bool> blockUser(std::string const&);

    MCNAPI ::Social::PermissionDenyReason checkPrivilegeSilently(int) const;

    MCNAPI void checkPrivilegeWithUIAsync(int, std::string const&, std::function<void(Social::PermissionCheckResult)>);

    MCNAPI void clearRichPresenceOverride();

    MCNAPI ::Bedrock::Threading::Async<bool> favoriteUser(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<bool> followUser(std::string const&, ::IMinecraftEventing::AddedFriendLocation);

    MCNAPI ::Social::XsapiHandle<XalUser*> const& getCurrentUser() const;

    MCNAPI void getPermissions(std::vector<std::string> const&);

    MCNAPI ::PlayerAchievementData const& getPlayerAchievementData() const;

    MCNAPI ::Bedrock::Threading::Async<Social::XboxLiveUserProfileData> getProfileWithXuidAsync(std::string const&);

    MCNAPI void getProfiles(
        std::vector<std::string> const&,
        std::function<void(const std::vector<const Social::XboxLiveUserProfileData*>&)>
    );

    MCNAPI std::unordered_map<std::string, Social::XboxLiveUserStatistics::Statistic> const& getStatisticsData();

    MCNAPI ::Social::XboxLiveUserProfileData const& getUserProfileDataByXuid(std::string);

    MCNAPI std::string getXBLInfo() const;

    MCNAPI ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>> getXalApi() const;

    MCNAPI std::vector<std::string> getXboxLiveBlockList();

    MCNAPI std::vector<const Social::XboxLiveUserProfileData*> const& getXboxLiveFriends() const;

    MCNAPI bool hasNeverVisitedBiome(int) const;

    MCNAPI bool hasXUID(std::string const&) const;

    MCNAPI bool isBlockedPlayer(std::string const&) const;

    MCNAPI bool isInitialSignInComplete() const;

    MCNAPI bool isMutedPlayer(std::string const&) const;

    MCNAPI bool isSignedIn() const;

    MCNAPI bool isTelemetryActive() const;

    MCNAPI bool isUserOnFriendList(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<bool> muteUser(std::string const&);

    MCNAPI void needToRefreshPrivacyLists();

    MCNAPI int numberOfVisitedBiomes() const;

    MCNAPI void onSignOut();

    MCNAPI void onSuccessfulSignIn();

    MCNAPI void registerForNotifications();

    MCNAPI void removeAchievementUpdateListener(int);

    MCNAPI ::Bedrock::Threading::Async<bool> removeFriend(std::string const&);

    MCNAPI void removePermissionsChangeListener(int);

    MCNAPI void removeSocialChangeListener(int);

    MCNAPI void removeStatisticUpdateListener(int);

    MCNAPI ::Bedrock::Threading::Async<bool> reportUser(::Json::Value const&);

    MCNAPI ::Bedrock::Threading::Async<bool>
    sendFriendRequest(std::string const&, ::IMinecraftEventing::AddedFriendLocation);

    MCNAPI void setBiomeVisited(int);

    MCNAPI void setLocale();

    MCNAPI void setRichPresenceOverride(std::string const&);

    MCNAPI void setRichPresencePolling(bool);

    MCNAPI void setStorageAreaPathOverride(::Core::Path const&);

    MCNAPI void setTelemetryActive(bool);

    MCNAPI void showUserSettings();

    MCNAPI ::Bedrock::Threading::Async<void> showXboxProfileCard(std::string const&);

    MCNAPI void tick();

    MCNAPI ::Bedrock::Threading::Async<bool> unblockUser(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<bool> unfavoriteUser(std::string const&);

    MCNAPI ::Bedrock::Threading::Async<bool> unmuteUser(std::string const&);

    MCNAPI void unregisterForNotifications();

    MCNAPI void updatePlayerAchievementData() const;

    MCNAPI void updateRichPresence(std::string const&);

    MCNAPI void updateUserPresence();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppResumed();

    MCNAPI void $onNetworkConfigurationChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
