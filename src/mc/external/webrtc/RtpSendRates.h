#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtpSendRates {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7d8ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpSendRates& operator=(RtpSendRates const&);
    RtpSendRates(RtpSendRates const&);
    RtpSendRates();
};

} // namespace webrtc
#endif // @header-generator platform
