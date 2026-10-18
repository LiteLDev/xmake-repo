#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpExtensionSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcd89e0;
    ::ll::UntypedStorage<4, 4> mUnkce5ecd;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpExtensionSize& operator=(RtpExtensionSize const&);
    RtpExtensionSize(RtpExtensionSize const&);
    RtpExtensionSize();
};

} // namespace webrtc
#endif // @header-generator platform
