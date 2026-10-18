#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct UniformFloat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> minInclusive;
    ::ll::TypedStorage<4, 4, float> maxExclusive;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaa6d7f;
    ::ll::UntypedStorage<4, 4> mUnke8f3d9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UniformFloat& operator=(UniformFloat const&);
    UniformFloat(UniformFloat const&);
    UniformFloat();
#endif // @header-generator platform
};

} // namespace ValueProviders
