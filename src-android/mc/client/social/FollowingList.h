#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace Social {

class FollowingList : public ::Social::XboxLivePeopleHubList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    // NOLINTEND

public:
    // prevent constructor by default
    FollowingList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FollowingList();

    virtual void updateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FollowingList(std::weak_ptr<Social::User>, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Social::User>, std::string const&);
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
