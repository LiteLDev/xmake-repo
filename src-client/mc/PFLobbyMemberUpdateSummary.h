#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PFEntityKey.h"

struct PFLobbyMemberUpdateSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::PFEntityKey>     member;
    ::ll::TypedStorage<1, 1, bool>               connectionStatusUpdated;
    ::ll::TypedStorage<4, 4, uint>               updatedMemberPropertyCount;
    ::ll::TypedStorage<8, 8, char const* const*> updatedMemberPropertyKeys;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
