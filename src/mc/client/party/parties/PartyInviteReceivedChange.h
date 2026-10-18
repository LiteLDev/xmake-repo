#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyInviteReceivedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mConnectionString;
    ::ll::TypedStorage<8, 24, std::string> mInviterPfid;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyInviteReceivedChange {};
#endif // @header-generator platform

} // namespace Parties
