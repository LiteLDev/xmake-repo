#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EAS {

class FloatConstraint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mMinValue;
    ::ll::TypedStorage<4, 4, float> mMaxValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk1a845e;
    ::ll::UntypedStorage<4, 4> mUnk9add01;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FloatConstraint& operator=(FloatConstraint const&);
    FloatConstraint(FloatConstraint const&);
#endif // @header-generator platform
    FloatConstraint();
};

} // namespace EAS
