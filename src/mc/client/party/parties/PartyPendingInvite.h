#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyPendingInvite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mInviteeXuid;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyPendingInvite {};
#endif // @header-generator platform

} // namespace Parties
