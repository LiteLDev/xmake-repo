#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/TessellatorQuadInfo.h"
#include "mc/deps/minecraft_renderer/renderer/MeshData.h"

namespace ClientBlockPipeline {

struct SimpleMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::mce::MeshData>                 mMeshData;
    ::ll::TypedStorage<8, 24, std::vector<TessellatorQuadInfo>> mQuadInfoList;
    // NOLINTEND
};

} // namespace ClientBlockPipeline
