#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BakedRenderControllerUniformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mConstantsOffset;
    ::ll::TypedStorage<4, 4, uint> mExpressionsOffset;
    ::ll::TypedStorage<4, 4, uint> mConstantsOverrideBits;
    ::ll::TypedStorage<4, 4, uint> mExpressionOverrideBits;
    uint                           mLightMultiplierOffset  : 28;
    uint                           mLightMultiplerOverride : 2;
    uint                           mIgnoresLighting        : 1;
    uint                           mFiltersLighting        : 1;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BakedRenderControllerUniformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mConstantsOffset;
    ::ll::TypedStorage<4, 4, uint> mExpressionsOffset;
    ::ll::TypedStorage<4, 4, uint> mConstantsOverrideBits;
    ::ll::TypedStorage<4, 4, uint> mExpressionOverrideBits;
    uint                           mLightMultiplierOffset  : 28;
    uint                           mLightMultiplerOverride : 2;
    uint                           mIgnoresLighting        : 1;
    uint                           mFiltersLighting        : 1;
    // NOLINTEND
};
#else // @header-generator platform
struct BakedRenderControllerUniformData {};
#endif // @header-generator platform
#endif // @header-generator platform
