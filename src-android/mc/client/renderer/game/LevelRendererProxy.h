#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
