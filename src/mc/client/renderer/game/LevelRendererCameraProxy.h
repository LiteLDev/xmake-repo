#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererCameraProxyCallbacks.h"

class LevelRendererCameraProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCameraProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LevelRendererCameraProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf21124;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCameraProxy& operator=(LevelRendererCameraProxy const&);
    LevelRendererCameraProxy(LevelRendererCameraProxy const&);
    LevelRendererCameraProxy();
};
#else // @header-generator platform
class LevelRendererCameraProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
