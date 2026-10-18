#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct REOpCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4862c4;
    // NOLINTEND

public:
    // prevent constructor by default
    REOpCode& operator=(REOpCode const&);
    REOpCode(REOpCode const&);
    REOpCode();
};
#endif // @header-generator platform
