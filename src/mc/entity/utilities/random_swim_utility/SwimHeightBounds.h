#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RandomSwimUtility {

struct SwimHeightBounds {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mGroundLevelY;
    ::ll::TypedStorage<4, 4, float> mWaterSurfaceY;
    ::ll::TypedStorage<4, 4, float> mMinSwimY;
    ::ll::TypedStorage<4, 4, float> mMaxSwimY;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk4343af;
    ::ll::UntypedStorage<4, 4> mUnk22ea30;
    ::ll::UntypedStorage<4, 4> mUnk49d160;
    ::ll::UntypedStorage<4, 4> mUnk3283bc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SwimHeightBounds& operator=(SwimHeightBounds const&);
    SwimHeightBounds(SwimHeightBounds const&);
    SwimHeightBounds();
#endif // @header-generator platform
};

} // namespace RandomSwimUtility
