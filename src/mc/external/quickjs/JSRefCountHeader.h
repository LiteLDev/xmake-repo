#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSRefCountHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk198b07;
    // NOLINTEND

public:
    // prevent constructor by default
    JSRefCountHeader& operator=(JSRefCountHeader const&);
    JSRefCountHeader(JSRefCountHeader const&);
    JSRefCountHeader();
};
#endif // @header-generator platform
