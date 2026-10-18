#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mEaseIn;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>  mOldTime;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mOldTime;
#endif // @header-generator platform
    // NOLINTEND
};
