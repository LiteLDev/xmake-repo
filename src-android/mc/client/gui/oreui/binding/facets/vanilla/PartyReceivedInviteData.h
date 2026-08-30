#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPlayer.h"

namespace OreUI {

struct PartyReceivedInviteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 520>           mInviter;
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyReceivedInviteData& operator=(PartyReceivedInviteData const&);
    PartyReceivedInviteData(PartyReceivedInviteData const&);
    PartyReceivedInviteData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PartyReceivedInviteData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
