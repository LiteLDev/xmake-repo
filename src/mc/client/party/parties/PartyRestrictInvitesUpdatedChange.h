#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyRestrictInvitesUpdatedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<1, 1, bool>         mRestrictInvites;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyRestrictInvitesUpdatedChange {};
#endif // @header-generator platform

} // namespace Parties
