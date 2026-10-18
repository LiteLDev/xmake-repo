#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimeMarkerData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>              mId;
    ::ll::TypedStorage<8, 24, std::string>       mName;
    ::ll::TypedStorage<4, 4, int>                mTime;
    ::ll::TypedStorage<4, 8, std::optional<int>> mPeriod;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>               mId;
    ::ll::TypedStorage<8, 32, ::std::string>       mName;
    ::ll::TypedStorage<4, 4, int>                  mTime;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mPeriod;
#endif // @header-generator platform
    // NOLINTEND
};
