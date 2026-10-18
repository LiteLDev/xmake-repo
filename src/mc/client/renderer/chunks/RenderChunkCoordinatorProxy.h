#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/RenderChunkCoordinatorProxyCallbacks.h"

class RenderChunkCoordinatorProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkCoordinatorProxy();
};
#else // @header-generator platform
class RenderChunkCoordinatorProxy {};
#endif // @header-generator platform
