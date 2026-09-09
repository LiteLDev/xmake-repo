#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyInviteReceivedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    ::ll::TypedStorage<8, 24, std::string> mInviterPfid;
    // NOLINTEND
};

} // namespace Parties
