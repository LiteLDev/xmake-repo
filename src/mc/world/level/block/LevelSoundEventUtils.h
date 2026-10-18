#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class LevelSoundEventUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float deserializePercentageFromData(int);

    MCNAPI static int serializePercentageToData(float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_INT_REPRESENTABLE_AS_FLOAT();
    // NOLINTEND
};
#else // @header-generator platform
class LevelSoundEventUtils {};
#endif // @header-generator platform
