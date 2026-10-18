#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class ByLength {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk751bd8;
    // NOLINTEND

public:
    // prevent constructor by default
    ByLength& operator=(ByLength const&);
    ByLength(ByLength const&);
    ByLength();
};

} // namespace absl
#endif // @header-generator platform
