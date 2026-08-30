#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyConnectedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPartyId;
    ::ll::TypedStorage<1, 1, bool>                        mSuccess;
    // NOLINTEND
};

} // namespace Parties
