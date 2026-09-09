#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/SimpleMesh.h"
#include "mc/world/level/block/BlockRenderLayer.h"

namespace ClientBlockPipeline {

struct NamedMeshStreams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockRenderLayer, ClientBlockPipeline::SimpleMesh>> mStreams;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
