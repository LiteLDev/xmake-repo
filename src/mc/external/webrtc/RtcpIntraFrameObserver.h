#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpIntraFrameObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpIntraFrameObserver() = default;

    virtual void OnReceivedIntraFrameRequest(uint) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
