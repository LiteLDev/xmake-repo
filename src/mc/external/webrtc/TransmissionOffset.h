#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class TransmissionOffset {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::webrtc::ArrayView<uchar> data, int rtp_time);
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
