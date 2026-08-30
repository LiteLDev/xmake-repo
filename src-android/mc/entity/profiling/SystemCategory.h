#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct SystemCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mCategoryName;
    ::ll::TypedStorage<8, 8, ulong>        mSystemIndex;
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
