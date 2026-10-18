#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameAllocationCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mActorCount;
    ::ll::TypedStorage<4, 4, uint> mTotalRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mUniqueRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mTotalMaterials;
    ::ll::TypedStorage<4, 4, uint> mTotalTextures;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FrameAllocationCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mActorCount;
    ::ll::TypedStorage<4, 4, uint> mTotalRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mUniqueRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mTotalMaterials;
    ::ll::TypedStorage<4, 4, uint> mTotalTextures;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
#else // @header-generator platform
struct FrameAllocationCount {};
#endif // @header-generator platform
#endif // @header-generator platform
