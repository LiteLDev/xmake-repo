#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct UniformInt {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> minInclusive;
    ::ll::TypedStorage<4, 4, int> maxInclusive;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk46db93;
    ::ll::UntypedStorage<4, 4> mUnk769dc1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UniformInt& operator=(UniformInt const&);
    UniformInt(UniformInt const&);
    UniformInt();
#endif // @header-generator platform
};

} // namespace ValueProviders
