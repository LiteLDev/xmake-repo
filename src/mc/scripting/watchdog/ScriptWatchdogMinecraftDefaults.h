#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptWatchdogMinecraftDefaults {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& mHangThresholdDefaultSeconds();

    MCNAPI static int const& mSlowThresholdDefaultMs();

    MCNAPI static int const& mSpikeThresholdDefaultMs();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static int const& mHangThresholdDefaultSeconds();

    MCNAPI static int const& mSlowThresholdDefaultMs();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
