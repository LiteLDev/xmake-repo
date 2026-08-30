#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugInfoUtility {

struct GoalDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mPriority;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, bool>         mUsed;
    ::ll::TypedStorage<4, 4, int>          mControlFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalDebugInfo();
};

} // namespace DebugInfoUtility
