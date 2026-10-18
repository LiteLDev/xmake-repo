#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

union CodecSpecificInfoUnion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 1624> mUnk1b3c3a;
    ::ll::UntypedStorage<8, 1624> mUnkad8e4e;
    ::ll::UntypedStorage<8, 1624> mUnk79ad8f;
    // NOLINTEND
};
} // namespace webrtc
#endif // @header-generator platform
