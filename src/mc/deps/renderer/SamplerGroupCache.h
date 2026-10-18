#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class SamplerGroupCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();
    // NOLINTEND
};
#else // @header-generator platform
class SamplerGroupCache {};
#endif // @header-generator platform

} // namespace mce
