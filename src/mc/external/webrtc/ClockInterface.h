#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ClockInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClockInterface() = default;

    virtual int64 TimeNanos() const = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
