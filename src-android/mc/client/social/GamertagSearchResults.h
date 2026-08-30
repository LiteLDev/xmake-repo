#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XboxLivePeopleHubList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class User; }
// clang-format on

namespace Social {

class GamertagSearchResults : public ::Social::XboxLivePeopleHubList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSearchQuery;
    // NOLINTEND

public:
    // prevent constructor by default
    GamertagSearchResults();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamertagSearchResults();

    virtual void updateData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GamertagSearchResults(std::weak_ptr<Social::User>);

    MCNAPI void search(std::string const&);
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
