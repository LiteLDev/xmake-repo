#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlendingData;
class ChunkPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BlendingDataProvider {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64> mFinalAction;
    ::ll::UntypedStorage<8, 48> mFunc;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkf05c12;
    ::ll::UntypedStorage<8, 64> mUnk63bbcf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlendingDataProvider& operator=(BlendingDataProvider const&);
    BlendingDataProvider(BlendingDataProvider const&);
#endif // @header-generator platform
    BlendingDataProvider();
};
