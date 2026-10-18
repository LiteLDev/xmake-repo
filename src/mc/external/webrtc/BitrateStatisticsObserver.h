#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class BitrateStatisticsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitrateStatisticsObserver() = default;

    virtual void Notify(uint, uint, uint) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
