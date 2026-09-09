#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct ViewStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mName;
    ::ll::TypedStorage<2, 2, ushort const>       mView;
    ::ll::TypedStorage<8, 8, long const>         mCpuTimeElapsed;
    ::ll::TypedStorage<8, 8, long const>         mGpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint const>         mFrameNumber;
    ::ll::TypedStorage<1, 1, bool const>         mIsValid;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewStatistics& operator=(ViewStatistics const&);
    ViewStatistics();
};

} // namespace dragon::platform
