#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct PointLightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                    mIntensity;
    ::ll::TypedStorage<1, 1, uchar>                                    mVanillaBrightness;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mColor;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mWorldPosition;
    ::ll::TypedStorage<1, 1, bool>                                     mIsLarge;
    ::ll::TypedStorage<8, 8, ulong>                                    mHashCode;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightParameters& operator=(PointLightParameters const&);
    PointLightParameters();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PointLightParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>        mIntensity;
    ::ll::TypedStorage<1, 1, uchar>        mVanillaBrightness;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mColor;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mWorldPosition;
    ::ll::TypedStorage<1, 1, bool>         mIsLarge;
    ::ll::TypedStorage<8, 8, uint64>       mHashCode;
    // NOLINTEND
};
#else // @header-generator platform
struct PointLightParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
