#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct GiftContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mDate;
    ::ll::TypedStorage<8, 24, std::string>       mProductId;
    ::ll::TypedStorage<1, 1, bool>               mIsWorld;
    // NOLINTEND
};
#else // @header-generator platform
struct GiftContent {};
#endif // @header-generator platform
