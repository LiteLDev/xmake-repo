#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct LntfConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk2643d0;
    // NOLINTEND

public:
    // prevent constructor by default
    LntfConfig& operator=(LntfConfig const&);
    LntfConfig(LntfConfig const&);
    LntfConfig();
};

} // namespace webrtc
#endif // @header-generator platform
