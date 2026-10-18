#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSPropertyEnum {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd87e74;
    ::ll::UntypedStorage<4, 4> mUnk82d481;
    // NOLINTEND

public:
    // prevent constructor by default
    JSPropertyEnum& operator=(JSPropertyEnum const&);
    JSPropertyEnum(JSPropertyEnum const&);
    JSPropertyEnum();
};
#endif // @header-generator platform
