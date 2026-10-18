#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StrAndBool {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, char*> str;
    ::ll::TypedStorage<1, 1, bool>  b;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk4a9f8e;
    ::ll::UntypedStorage<1, 1> mUnk3c67dc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StrAndBool& operator=(StrAndBool const&);
    StrAndBool(StrAndBool const&);
    StrAndBool();
#endif // @header-generator platform
};
