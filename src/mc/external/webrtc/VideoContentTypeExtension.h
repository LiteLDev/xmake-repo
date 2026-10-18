#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/VideoContentType.h"

namespace webrtc {

class VideoContentTypeExtension {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool Write(::webrtc::ArrayView<uchar> data, ::webrtc::VideoContentType content_type);
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
