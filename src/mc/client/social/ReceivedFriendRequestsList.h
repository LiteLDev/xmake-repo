#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class SocialDrawerManager; }
namespace Social { class User; }
namespace Social { struct SocialChangeResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class ReceivedFriendRequestsList : public ::Social::XboxLivePeopleHubList {
#else // @header-generator platform
class ReceivedFriendRequestsList {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
#else // @header-generator platform
    // ReceivedFriendRequestsList inner types declare
#endif // @header-generator platform
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>> mSocialDrawerManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdateTime;
    ::ll::TypedStorage<1, 1, bool> mAllowPolling;
    ::ll::TypedStorage<1, 1, bool> mHasPendingSocialChanges;
    ::ll::TypedStorage<8, 48, std::function<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> ()>> nowFunc;
#else // @header-generator platform
    struct nowFunc;
#endif // @header-generator platform
    // clang-format on
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // ReceivedFriendRequestsList inner types define
    struct nowFunc {};
#endif // @header-generator platform
};

} // namespace Social
