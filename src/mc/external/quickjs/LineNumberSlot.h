#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LineNumberSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke83e73;
    ::ll::UntypedStorage<4, 4> mUnk497513;
    // NOLINTEND

public:
    // prevent constructor by default
    LineNumberSlot& operator=(LineNumberSlot const&);
    LineNumberSlot(LineNumberSlot const&);
    LineNumberSlot();
};
#endif // @header-generator platform
