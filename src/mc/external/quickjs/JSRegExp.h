#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSRegExp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8d2340;
    ::ll::UntypedStorage<8, 8> mUnkad6cde;
    // NOLINTEND

public:
    // prevent constructor by default
    JSRegExp& operator=(JSRegExp const&);
    JSRegExp(JSRegExp const&);
    JSRegExp();
};
#endif // @header-generator platform
