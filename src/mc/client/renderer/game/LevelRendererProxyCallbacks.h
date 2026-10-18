#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class RenderChunkCoordinatorProxy;
struct DimensionType;
namespace ClientBlockPipeline { class SchematicsRepository; }
// clang-format on

struct LevelRendererProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetRenderChunkCoordinator;
    ::ll::UntypedStorage<8, 48> isBuildingRenderChunks;
    ::ll::UntypedStorage<8, 48> getSchematicsRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererProxyCallbacks& operator=(LevelRendererProxyCallbacks const&);
    LevelRendererProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelRendererProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LevelRendererProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6fb79e;
    ::ll::UntypedStorage<8, 64> mUnk1eb983;
    ::ll::UntypedStorage<8, 64> mUnk7b00e0;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererProxyCallbacks& operator=(LevelRendererProxyCallbacks const&);
    LevelRendererProxyCallbacks(LevelRendererProxyCallbacks const&);
    LevelRendererProxyCallbacks();
};
#else // @header-generator platform
struct LevelRendererProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
