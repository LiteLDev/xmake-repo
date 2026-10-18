#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::texturestreaming {

struct LRUEviction {
public:
    // LRUEviction inner types declare
    // clang-format off
    struct ImageLRUData;
    // clang-format on

    // LRUEviction inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ImageLRUData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mImageKey;
        ::ll::TypedStorage<4, 4, uint>  mFramesSinceLastUse;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                              mMemoryBudget;
    ::ll::TypedStorage<4, 4, uint>                                                              mMaxFrames;
    ::ll::TypedStorage<8, 24, std::vector<dragon::texturestreaming::LRUEviction::ImageLRUData>> mTrackedResources;
    // NOLINTEND

public:
    // prevent constructor by default
    LRUEviction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LRUEviction(uint, uint);

    MCNAPI void updateResource(ulong const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, uint);
    // NOLINTEND
#else // @header-generator platform
    struct ImageLRUData {};
#endif // @header-generator platform
};

} // namespace dragon::texturestreaming
