#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpRtxParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnka5cec8;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpRtxParameters& operator=(RtpRtxParameters const&);
    RtpRtxParameters(RtpRtxParameters const&);
    RtpRtxParameters();
};

} // namespace webrtc
#endif // @header-generator platform
