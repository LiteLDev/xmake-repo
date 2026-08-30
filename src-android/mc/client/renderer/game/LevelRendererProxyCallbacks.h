#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
