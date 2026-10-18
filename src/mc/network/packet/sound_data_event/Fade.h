#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SoundDataEvent {

struct Fade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDuration;
    ::ll::TypedStorage<4, 4, float> mTargetVolume;
    // NOLINTEND
};

} // namespace SoundDataEvent
#endif // @header-generator platform
