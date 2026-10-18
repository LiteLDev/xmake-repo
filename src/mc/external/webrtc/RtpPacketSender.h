#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketSender {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtpPacketSender() = default;

    virtual void EnqueuePackets(::std::vector<::std::unique_ptr<::webrtc::RtpPacketToSend>> packets) = 0;

    virtual void RemovePacketsForSsrc(uint ssrc);
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
