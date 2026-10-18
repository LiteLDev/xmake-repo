#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class NetworkMask {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka5884e;
    ::ll::UntypedStorage<4, 4>  mUnk4306a5;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkMask& operator=(NetworkMask const&);
    NetworkMask(NetworkMask const&);
    NetworkMask();
};

} // namespace webrtc
#endif // @header-generator platform
