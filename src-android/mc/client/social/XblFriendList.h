#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/BasePlatformFriendsList.h"

// auto generated forward declare list
// clang-format off
namespace Social { class XboxLiveUser; }
namespace Social { struct SocialChangeResult; }
namespace Social { struct XboxLiveUserProfileData; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace Social {

class XblFriendList : public ::Social::BasePlatformFriendsList {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~XblFriendList();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addOrUpdateFriends(
        std::vector<const Social::XboxLiveUserProfileData*> const&,
        ::World::FriendServerWorldList&,
        std::string const&
    );

    MCNAPI void _eraseRemovedFriends(std::vector<const Social::XboxLiveUserProfileData*> const&);

    MCNAPI void applySocialChange(::Social::SocialChangeResult const&);

    MCNAPI void refresh(::Social::XboxLiveUser const&, ::World::FriendServerWorldList&, std::string const&);
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
