#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XTaskQueueRegistrationToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> token;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb58d0b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    XTaskQueueRegistrationToken& operator=(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken(XTaskQueueRegistrationToken const&);
    XTaskQueueRegistrationToken();
#endif // @header-generator platform
};
