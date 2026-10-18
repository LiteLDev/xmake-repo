#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

namespace webrtc {

class VideoFrameTrackingIdExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::webrtc::ArrayView<uchar> data, ushort video_frame_tracking_id);
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
