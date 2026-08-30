#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyPendingInvite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mInviteeXuid;
    // NOLINTEND
};

} // namespace Parties
