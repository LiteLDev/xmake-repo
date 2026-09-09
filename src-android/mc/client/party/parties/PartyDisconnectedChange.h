#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

struct PartyDisconnectedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPartyId;
    // NOLINTEND
};

} // namespace Parties
