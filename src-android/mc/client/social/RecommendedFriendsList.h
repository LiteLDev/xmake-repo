#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace Social {

class RecommendedFriendsList : public ::Social::XboxLivePeopleHubList {
public:
    // prevent constructor by default
    RecommendedFriendsList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecommendedFriendsList();

    virtual void updateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RecommendedFriendsList(std::weak_ptr<Social::User>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Social::User>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social
