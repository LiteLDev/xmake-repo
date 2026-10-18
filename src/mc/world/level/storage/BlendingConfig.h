#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mCellsYInChunk;
    ::ll::TypedStorage<4, 4, int> mMaxHeight;
    ::ll::TypedStorage<4, 4, int> mMinHeight;
    ::ll::TypedStorage<4, 4, int> mQuartSubChunkCount;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk7f4067;
    ::ll::UntypedStorage<4, 4> mUnk162ce3;
    ::ll::UntypedStorage<4, 4> mUnk7da46d;
    ::ll::UntypedStorage<4, 4> mUnk6e786d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlendingConfig& operator=(BlendingConfig const&);
    BlendingConfig(BlendingConfig const&);
    BlendingConfig();
#endif // @header-generator platform
};
