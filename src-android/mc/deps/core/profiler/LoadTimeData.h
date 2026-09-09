#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct LoadTimeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mName;
    ::ll::TypedStorage<4, 4, int>                mScope;
    ::ll::TypedStorage<8, 8, double>             mTotalTime;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTimeData();
};

} // namespace Core
