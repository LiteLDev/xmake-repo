#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntityDiagnosticTimingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mEntity;
    ::ll::TypedStorage<8, 8, ulong>        mTimeInNS;
    ::ll::TypedStorage<1, 1, uchar>        mPercentOfTotal;
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
