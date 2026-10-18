#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyConnectedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mPartyId;
    ::ll::TypedStorage<1, 1, bool>                        mSuccess;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyConnectedChange {};
#endif // @header-generator platform

} // namespace Parties
