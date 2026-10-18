#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Thread.h"

namespace webrtc {

class AutoThread : public ::webrtc::Thread {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutoThread() /*override*/ = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
