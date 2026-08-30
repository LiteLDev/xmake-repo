#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageRequester_Minecraft.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class ProfileImageOptions; }
namespace Social { class ProfileImageRequester_Minecraft; }
namespace mce { struct Image; }
// clang-format on

namespace Social {

class ProfileImageChangeTracker {
public:
    // ProfileImageChangeTracker inner types declare
    // clang-format off
    struct RefreshStatus;
    // clang-format on

    // ProfileImageChangeTracker inner types define
    struct RefreshStatus {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastRefreshedTime;
        ::ll::TypedStorage<1, 1, bool> mIsRefreshing;
        ::ll::TypedStorage<8, 24, std::string> mLastSuccessfulRefreshETag;
        // clang-format on
        // NOLINTEND
    };

    using ImageSubtype = ::Social::ProfileImageRequester_Minecraft::PersonaImageSubtype;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Social::ProfileImageRequester_Minecraft&> mProfileImageRequester;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 88> mProfileImageChangedPublisher;
    ::ll::TypedStorage<8, 24, std::string> mPlayFabId;
    ::ll::TypedStorage<8, 24, std::string> mLinkedXuid;
    ::ll::TypedStorage<8, 24, std::string> mProfileHash;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastChangeTime;
    ::ll::TypedStorage<8, 80, std::array<Social::ProfileImageChangeTracker::RefreshStatus, 2>> mStatus;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageChangeTracker& operator=(ProfileImageChangeTracker const&);
    ProfileImageChangeTracker(ProfileImageChangeTracker const&);
    ProfileImageChangeTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfileImageChangeTracker(::Social::ProfileImageRequester_Minecraft&);

    MCNAPI void _refreshImage(::Social::ProfileImageRequester_Minecraft::PersonaImageSubtype, std::string);

    MCNAPI bool _shouldRefreshImage(
        ::Social::ProfileImageRequester_Minecraft::PersonaImageSubtype,
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>,
        std::chrono::duration<long long, std::ratio<1, 1>>
    );

    MCNAPI void update();

    MCNAPI void updateCurrentUserId(std::string const&, std::string const&);

    MCNAPI void updateProfileHash(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long, std::ratio<60, 1>> const& MaxCheckForUpdatesDuration();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::ProfileImageRequester_Minecraft&);
    // NOLINTEND
};

} // namespace Social
