#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/profiler/LoadTimeData.h"

namespace Core {

class ScopedLoadTimeSection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                mStartTime;
    ::ll::TypedStorage<8, 40, ::Core::LoadTimeData> mProfileData;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedLoadTimeSection();
};

} // namespace Core
