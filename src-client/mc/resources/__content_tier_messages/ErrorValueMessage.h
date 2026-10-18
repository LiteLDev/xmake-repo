#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace _ContentTierMessages {

struct ErrorValueMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>        mErrorValue;
    ::ll::TypedStorage<8, 8, char const*> mReasonSpecificPostFix;
    // NOLINTEND
};

} // namespace _ContentTierMessages
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
