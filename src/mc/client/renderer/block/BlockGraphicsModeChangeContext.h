#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct BlockGraphicsModeChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mFancyRendering;
    ::ll::TypedStorage<1, 1, bool> mTransparentLeaves;
    ::ll::TypedStorage<1, 1, bool> mFancyBubbles;
    ::ll::TypedStorage<1, 1, bool> mRayTracing;
    ::ll::TypedStorage<1, 1, bool> mDeferred;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockGraphicsModeChangeContext();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BlockGraphicsModeChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mFancyRendering;
    ::ll::TypedStorage<1, 1, bool> mTransparentLeaves;
    ::ll::TypedStorage<1, 1, bool> mFancyBubbles;
    ::ll::TypedStorage<1, 1, bool> mRayTracing;
    ::ll::TypedStorage<1, 1, bool> mDeferred;
    // NOLINTEND
};
#else // @header-generator platform
struct BlockGraphicsModeChangeContext {};
#endif // @header-generator platform
#endif // @header-generator platform
