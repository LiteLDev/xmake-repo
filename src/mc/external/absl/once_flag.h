#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class once_flag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk314751;
    // NOLINTEND

public:
    // prevent constructor by default
    once_flag& operator=(once_flag const&);
    once_flag(once_flag const&);
    once_flag();
};

} // namespace absl
#endif // @header-generator platform
