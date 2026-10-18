#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
struct XTaskQueuePortObject {};
#else // @header-generator platform
struct XTaskQueuePortObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc465ae;
    ::ll::UntypedStorage<4, 4> mUnkcba44e;
    ::ll::UntypedStorage<8, 8> mUnk56c037;
    ::ll::UntypedStorage<8, 8> mUnk5902b7;
    // NOLINTEND

public:
    // prevent constructor by default
    XTaskQueuePortObject& operator=(XTaskQueuePortObject const&);
    XTaskQueuePortObject(XTaskQueuePortObject const&);
    XTaskQueuePortObject();
};
#endif // @header-generator platform
#endif // @header-generator platform
