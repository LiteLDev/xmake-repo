#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcd6e28;
    ::ll::UntypedStorage<8, 8> mUnk7e0535;
    // NOLINTEND

public:
    // prevent constructor by default
    JSValue& operator=(JSValue const&);
    JSValue(JSValue const&);
    JSValue();
};
#endif // @header-generator platform
