#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RenderChunkCoordinatorProxy;
struct DimensionType;
// clang-format on

struct LevelRendererCameraProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetRenderChunkCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCameraProxyCallbacks& operator=(LevelRendererCameraProxyCallbacks const&);
    LevelRendererCameraProxyCallbacks();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LevelRendererCameraProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk94a958;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCameraProxyCallbacks& operator=(LevelRendererCameraProxyCallbacks const&);
    LevelRendererCameraProxyCallbacks(LevelRendererCameraProxyCallbacks const&);
    LevelRendererCameraProxyCallbacks();
};
#else // @header-generator platform
struct LevelRendererCameraProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
