#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder::bgfxbridge {

struct ScreenshotColorSpaceInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSdr;
    ::ll::TypedStorage<1, 1, bool> mHdr;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
