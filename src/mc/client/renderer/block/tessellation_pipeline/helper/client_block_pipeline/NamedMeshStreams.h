#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/SimpleMesh.h"
#include "mc/world/level/block/BlockRenderLayer.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct SimpleMesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct NamedMeshStreams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockRenderLayer, ClientBlockPipeline::SimpleMesh>> mStreams;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct NamedMeshStreams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockRenderLayer, ::ClientBlockPipeline::SimpleMesh>> mStreams;
    // NOLINTEND
};
#else // @header-generator platform
struct NamedMeshStreams {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
