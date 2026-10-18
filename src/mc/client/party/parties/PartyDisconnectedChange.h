#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyDisconnectedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPartyId;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyDisconnectedChange {};
#endif // @header-generator platform

} // namespace Parties
