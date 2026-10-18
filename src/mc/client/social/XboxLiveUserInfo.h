#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/SocialGroupState.h"
#include "mc/client/social/XboxLiveUserProfileData.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/BasicTimer.h"

// auto generated forward declare list
// clang-format off
struct XblSocialManagerUserGroup;
namespace Social { class XboxLiveUser; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveUserInfo : public ::std::enable_shared_from_this<Social::XboxLiveUserInfo> {
#else // @header-generator platform
class XboxLiveUserInfo {
#endif // @header-generator platform
public:
    // XboxLiveUserInfo inner types declare
    // clang-format off
    struct RequestState;
    struct XboxLiveLimitTimer;
    // clang-format on

    // XboxLiveUserInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RequestState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::atomic<int>>>                              mActiveTasks;
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<Social::XboxLiveUserProfileData*>>> mResult;
        ::ll::UntypedStorage<8, 48>                                                               mOnCompletionCallback;
        // NOLINTEND
#else // @header-generator platform
    struct RequestState {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        RequestState& operator=(RequestState const&);
        RequestState(RequestState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RequestState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct XboxLiveLimitTimer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64>    mBurstTimer;
        ::ll::UntypedStorage<8, 64>    mSustainTimer;
        ::ll::TypedStorage<4, 4, uint> mBurstRequests;
        ::ll::UntypedStorage<4, 12>    mSustainRequests;
        // NOLINTEND

    public:
        // prevent constructor by default
        XboxLiveLimitTimer& operator=(XboxLiveLimitTimer const&);
        XboxLiveLimitTimer(XboxLiveLimitTimer const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI XboxLiveLimitTimer();

        MCNAPI ~XboxLiveLimitTimer();
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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::XboxLiveUser&>                              mUser;
    ::ll::TypedStorage<4, 4, ::Social::SocialGroupState>                           mFriendGroupState;
    ::ll::TypedStorage<8, 24, std::vector<Social::XboxLiveUserInfo::RequestState>> mProfileRequestStates;
    ::ll::TypedStorage<4, 40, std::mutex>                                          mProfileRequestListLock;
    ::ll::UntypedStorage<8, 8>                                                     mSocialGroup;
    ::ll::UntypedStorage<8, 8>                                                     mHasPlayed;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                                        mTaskGroup;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                            mXboxLiveBlockList;
    ::ll::TypedStorage<4, 40, std::mutex>                                          mBlockListMutex;
    ::ll::TypedStorage<4, 40, std::mutex>                                          mWritingFriendInfo;
    ::ll::TypedStorage<4, 40, std::mutex>                                          mContextChange;
    ::ll::UntypedStorage<8, 40>                                                    mLimitTimers;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLiveUserInfo& operator=(XboxLiveUserInfo const&);
    XboxLiveUserInfo(XboxLiveUserInfo const&);
    XboxLiveUserInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit XboxLiveUserInfo(::Social::XboxLiveUser&);

    MCNAPI void _OnSignIn();

    MCNAPI void _OnSignOut();

    MCNAPI void _fetchPresences(std::vector<ulong>);

    MCNAPI std::vector<std::string> _getXboxLiveBlockList();

    MCNAPI std::vector<ulong> _getXuidsForSocialGroup();

    MCNAPI void _pageUserRequests(
        std::vector<Social::XboxLiveUserProfileData*> const&,
        ::Social::XboxLiveUserProfileData::FetchedData,
        std::vector<Social::XboxLiveUserProfileData*>&,
        std::vector<Social::XboxLiveUserProfileData*>&
    );

    MCNAPI void _refresh();

    MCNAPI void fillProfiles(
        std::vector<Social::XboxLiveUserProfileData*> const&,
        std::function<void(std::vector<Social::XboxLiveUserProfileData*>)>
    );

    MCNAPI void fillUserPermissions(std::vector<Social::XboxLiveUserProfileData*> const&);

    MCNAPI float getAdditionalTimeForLimiting(::Social::XboxLiveUserProfileData::FetchedData);

    MCNAPI ::Social::SocialGroupState getFriendGroupState() const;

    MCNAPI ::Bedrock::Threading::Async<Social::XboxLiveUserProfileData> getProfileWithXuid(std::string const&);

    MCNAPI void setRichPresencePolling(bool);

    MCNAPI void tick();

    MCNAPI ::Bedrock::Threading::Async<bool> updateUserPresence(std::string const&);

    MCNAPI ~XboxLiveUserInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::XboxLiveUser&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct XboxLiveLimitTimer {};
#endif // @header-generator platform
};

} // namespace Social
