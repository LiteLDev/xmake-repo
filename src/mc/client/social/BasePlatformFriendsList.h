#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/FriendData.h"
#include "mc/client/social/SocialGroupState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class BasePlatformFriendsList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Social::FriendData>> mFriends;
    ::ll::TypedStorage<4, 4, ::Social::SocialGroupState>       mGroupState;
    ::ll::TypedStorage<1, 1, bool>                             mHasChanged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasePlatformFriendsList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI void clearChanged();

    MCNAPI std::vector<Social::FriendData> const& getFriends() const;

    MCNAPI ::Social::SocialGroupState getGroupState() const;

    MCNAPI bool hasChanged() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class BasePlatformFriendsList {};
#endif // @header-generator platform

} // namespace Social
