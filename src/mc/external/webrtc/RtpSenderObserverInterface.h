#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class RtpSenderObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnFirstPacketSent(::webrtc::MediaType) = 0;

    virtual ~RtpSenderObserverInterface() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
