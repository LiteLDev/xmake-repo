#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyMemberConnectionStatusChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    ::ll::TypedStorage<1, 1, bool>         mIsConnected;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyMemberConnectionStatusChange {};
#endif // @header-generator platform

} // namespace Parties
