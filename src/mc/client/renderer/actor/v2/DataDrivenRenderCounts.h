#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct DataDrivenRenderCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mMaterialCount;
    ::ll::TypedStorage<4, 4, uint> mTextureCount;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DataDrivenRenderCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mMaterialCount;
    ::ll::TypedStorage<4, 4, uint> mTextureCount;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
#else // @header-generator platform
struct DataDrivenRenderCounts {};
#endif // @header-generator platform
#endif // @header-generator platform
