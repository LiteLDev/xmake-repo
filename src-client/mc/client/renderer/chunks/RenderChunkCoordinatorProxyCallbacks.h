#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

struct RenderChunkCoordinatorProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetRenderChunkSharedCount;
    ::ll::UntypedStorage<8, 48> getFogColor;
    ::ll::UntypedStorage<8, 48> getFogDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkCoordinatorProxyCallbacks& operator=(RenderChunkCoordinatorProxyCallbacks const&);
    RenderChunkCoordinatorProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderChunkCoordinatorProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
