#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyRestrictInvitesUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<1, 1, bool>         mRestrictInvites;
    // NOLINTEND
};

} // namespace Parties
