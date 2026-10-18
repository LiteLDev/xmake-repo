#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadedChunksComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mLoadedChunksCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LoadedChunksComponent& operator=(LoadedChunksComponent const&);
    LoadedChunksComponent(LoadedChunksComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
