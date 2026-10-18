#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AddBehaviorTreePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mJsonInput;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mJsonInput;
#endif // @header-generator platform
    // NOLINTEND
};
