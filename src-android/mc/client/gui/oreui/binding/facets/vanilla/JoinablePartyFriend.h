#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

namespace OreUI {

struct JoinablePartyFriend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> partyId;
    ::ll::UntypedStorage<8, 520>           partyFriend;
    // NOLINTEND

public:
    // prevent constructor by default
    JoinablePartyFriend& operator=(JoinablePartyFriend const&);
    JoinablePartyFriend(JoinablePartyFriend const&);
    JoinablePartyFriend();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JoinablePartyFriend();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
