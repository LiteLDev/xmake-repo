#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class SocialDrawerManager; }
namespace Social { class User; }
namespace Social { struct SocialChangeResult; }
// clang-format on

namespace Social {

class ReceivedFriendRequestsList : public ::Social::XboxLivePeopleHubList {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>> mSocialDrawerManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTime;
    ::ll::TypedStorage<1, 1, bool> mAllowPolling;
    ::ll::TypedStorage<1, 1, bool> mHasPendingSocialChanges;
    ::ll::TypedStorage<8, 48, std::function<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> ()>> nowFunc;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedFriendRequestsList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceivedFriendRequestsList();

    virtual void updateData();

    virtual void _processSocialChange(::Social::SocialChangeResult const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void pollForUpdates();

    MCNAPI void setAllowPolling(bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1>> const& REFRESH_INTERVAL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $updateData();

    MCNAPI void $_processSocialChange(::Social::SocialChangeResult const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
