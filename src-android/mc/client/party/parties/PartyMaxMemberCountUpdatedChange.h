#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyMaxMemberCountUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<4, 4, int>          mMaxMemberCount;
    // NOLINTEND
};

} // namespace Parties
