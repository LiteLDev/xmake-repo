#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyMaxMemberCountUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<4, 4, int>          mMaxMemberCount;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyMaxMemberCountUpdatedChange {};
#endif // @header-generator platform

} // namespace Parties
