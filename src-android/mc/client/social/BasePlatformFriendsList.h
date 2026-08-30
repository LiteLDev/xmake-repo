#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/FriendData.h"
#include "mc/client/social/SocialGroupState.h"

namespace Social {

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

} // namespace Social
