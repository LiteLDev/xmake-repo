#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RenderResolution {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk803f6e;
    ::ll::UntypedStorage<4, 4> mUnkdcab89;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderResolution& operator=(RenderResolution const&);
    RenderResolution(RenderResolution const&);
    RenderResolution();
};

} // namespace webrtc
#endif // @header-generator platform
