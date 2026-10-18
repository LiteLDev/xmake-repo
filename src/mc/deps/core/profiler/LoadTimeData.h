#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct LoadTimeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const> mName;
    ::ll::TypedStorage<4, 4, int>                mScope;
    ::ll::TypedStorage<8, 8, double>             mTotalTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk245f15;
    ::ll::UntypedStorage<4, 4>  mUnke6e17d;
    ::ll::UntypedStorage<8, 8>  mUnk721455;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LoadTimeData& operator=(LoadTimeData const&);
    LoadTimeData(LoadTimeData const&);
#endif // @header-generator platform
    LoadTimeData();
};

} // namespace Core
