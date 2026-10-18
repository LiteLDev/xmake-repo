#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct ViewStatistics {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const> mName;
    ::ll::TypedStorage<2, 2, ushort const>       mView;
    ::ll::TypedStorage<8, 8, long const>         mCpuTimeElapsed;
    ::ll::TypedStorage<8, 8, long const>         mGpuTimeElapsed;
    ::ll::TypedStorage<4, 4, uint const>         mFrameNumber;
    ::ll::TypedStorage<1, 1, bool const>         mIsValid;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc6b405;
    ::ll::UntypedStorage<2, 2>  mUnk9d3d1c;
    ::ll::UntypedStorage<8, 8>  mUnkcb9ea3;
    ::ll::UntypedStorage<8, 8>  mUnkd1d02c;
    ::ll::UntypedStorage<4, 4>  mUnkb77a5d;
    ::ll::UntypedStorage<1, 1>  mUnk2faee2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ViewStatistics& operator=(ViewStatistics const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ViewStatistics(ViewStatistics const&);
#endif // @header-generator platform
    ViewStatistics();
};

} // namespace dragon::platform
