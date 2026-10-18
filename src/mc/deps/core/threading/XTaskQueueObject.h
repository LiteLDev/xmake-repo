#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct XTaskQueueObject {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct XTaskQueueObject {};
#else // @header-generator platform
struct XTaskQueueObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk42ccf9;
    ::ll::UntypedStorage<4, 4> mUnk43a781;
    ::ll::UntypedStorage<8, 8> mUnk6fdb33;
    // NOLINTEND

public:
    // prevent constructor by default
    XTaskQueueObject& operator=(XTaskQueueObject const&);
    XTaskQueueObject(XTaskQueueObject const&);
    XTaskQueueObject();
};
#endif // @header-generator platform
#endif // @header-generator platform
