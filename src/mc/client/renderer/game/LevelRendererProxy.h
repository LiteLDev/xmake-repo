#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/game/LevelRendererProxyCallbacks.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class RenderChunkCoordinatorProxy;
struct DimensionType;
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

class LevelRendererProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LevelRendererProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk7c2ba8;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererProxy& operator=(LevelRendererProxy const&);
    LevelRendererProxy(LevelRendererProxy const&);
    LevelRendererProxy();
};
#else // @header-generator platform
class LevelRendererProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
