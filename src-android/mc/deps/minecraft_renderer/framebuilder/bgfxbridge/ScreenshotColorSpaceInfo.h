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
