#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecControllerOverride {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetFecAllowed(bool fec_allowed) = 0;

    virtual ~FecControllerOverride() = default;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
