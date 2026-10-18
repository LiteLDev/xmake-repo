#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/VideoRotation.h"

namespace webrtc {

class VideoOrientation {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::webrtc::ArrayView<uchar> data, ::webrtc::VideoRotation rotation);
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
