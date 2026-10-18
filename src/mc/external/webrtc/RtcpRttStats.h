#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpRttStats {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpRttStats() = default;

    virtual void OnRttUpdate(int64) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
