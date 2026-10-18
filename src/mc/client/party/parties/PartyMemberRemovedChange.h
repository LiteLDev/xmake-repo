#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Parties {

#if defined(LL_PLAT_A) // @header-generator platform
struct PartyMemberRemovedChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mMemberPfid;
    // NOLINTEND
};
#else // @header-generator platform
struct PartyMemberRemovedChange {};
#endif // @header-generator platform

} // namespace Parties
