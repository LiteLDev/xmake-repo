#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct GenericTonemapperParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mContrast;
    ::ll::TypedStorage<4, 4, float> mAnchorPointIn;
    ::ll::TypedStorage<4, 4, float> mAnchorPointOut;
    ::ll::TypedStorage<4, 4, float> mSaturationPoint;
    ::ll::TypedStorage<4, 4, float> mCrosstalk;
    ::ll::TypedStorage<4, 4, float> mCrosstalkSaturation;
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
