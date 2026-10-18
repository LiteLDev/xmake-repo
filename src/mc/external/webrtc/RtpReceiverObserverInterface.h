#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class RtpReceiverObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnFirstPacketReceived(::webrtc::MediaType) = 0;

    virtual ~RtpReceiverObserverInterface() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
