#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcpLossNotificationObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcpLossNotificationObserver() = default;

    virtual void OnReceivedLossNotification(uint, ushort, ushort, bool) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
