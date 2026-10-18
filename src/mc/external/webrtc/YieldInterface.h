#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class YieldInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~YieldInterface() = default;

    virtual void YieldExecution() = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
