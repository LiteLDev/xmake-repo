#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class ByAnyChar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke2360b;
    // NOLINTEND

public:
    // prevent constructor by default
    ByAnyChar& operator=(ByAnyChar const&);
    ByAnyChar(ByAnyChar const&);
    ByAnyChar();
};

} // namespace absl
#endif // @header-generator platform
