#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ItemDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> productId;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<1, 1, bool>         isInitiallyVisibleInRow;
    ::ll::TypedStorage<1, 1, bool>         seenByPlayer;
    // NOLINTEND
};

} // namespace Social::Events
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
