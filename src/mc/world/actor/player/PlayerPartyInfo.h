#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPartyInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> partyId;
    ::ll::TypedStorage<1, 1, bool>         isLeader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> partyId;
    ::ll::TypedStorage<1, 1, bool>           isLeader;
#endif // @header-generator platform
    // NOLINTEND
};
