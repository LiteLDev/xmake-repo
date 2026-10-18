#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil::details {

struct ChanceInfoIntermediate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mNumerator;
    ::ll::TypedStorage<4, 4, int> mDenominator;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk40cefe;
    ::ll::UntypedStorage<4, 4> mUnk325a98;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ChanceInfoIntermediate& operator=(ChanceInfoIntermediate const&);
    ChanceInfoIntermediate(ChanceInfoIntermediate const&);
    ChanceInfoIntermediate();
#endif // @header-generator platform
};

} // namespace JsonUtil::details
