#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MERSUniformData {
#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMetalness;
    ::ll::TypedStorage<4, 4, float> mEmissive;
    ::ll::TypedStorage<4, 4, float> mRoughness;
    ::ll::TypedStorage<4, 4, float> mSubsurface;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMetalness;
    ::ll::TypedStorage<4, 4, float> mEmissive;
    ::ll::TypedStorage<4, 4, float> mRoughness;
    ::ll::TypedStorage<4, 4, float> mSubsurface;
    // NOLINTEND
#else // @header-generator platform
    float mMetalness;
    float mEmissive;
    float mRoughness;
    float mSubsurface;
#endif // @header-generator platform
#endif // @header-generator platform
};
