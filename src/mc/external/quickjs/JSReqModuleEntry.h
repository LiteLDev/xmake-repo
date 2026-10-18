#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSReqModuleEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2477ab;
    ::ll::UntypedStorage<8, 8> mUnkea57bb;
    // NOLINTEND

public:
    // prevent constructor by default
    JSReqModuleEntry& operator=(JSReqModuleEntry const&);
    JSReqModuleEntry(JSReqModuleEntry const&);
    JSReqModuleEntry();
};
#endif // @header-generator platform
