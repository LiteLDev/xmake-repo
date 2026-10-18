#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

struct GoalDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mPriority;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, bool>         mUsed;
    ::ll::TypedStorage<4, 4, int>          mControlFlag;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>            mPriority;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mUsed;
    ::ll::TypedStorage<4, 4, int>            mControlFlag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GoalDebugInfo();
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace DebugInfoUtility
