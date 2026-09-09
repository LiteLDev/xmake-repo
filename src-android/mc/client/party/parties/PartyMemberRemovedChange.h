#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyMemberRemovedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    // NOLINTEND
};

} // namespace Parties
