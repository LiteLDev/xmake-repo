#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"
#include "mc/external/render_dragon/mesh/IndexSize.h"
#include "mc/external/render_dragon/mesh/ResolvedAccelerationStructureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
struct RangeIndices;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct TerrainLayer;
namespace dragon::mesh { class VertexDeclManager; }
namespace mce { class VertexFormat; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace mce::framebuilder::bgfxbridge {

struct ChunkMetadata {
public:
    // ChunkMetadata inner types declare
    // clang-format off
    struct TerrainLayerKey;
    // clang-format on

    // ChunkMetadata inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TerrainLayerKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>             mLayerID;
        ::ll::TypedStorage<1, 1, ::TerrainLayerLOD> mLOD;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                                                                          mId;
    ::ll::UntypedStorage<8, 48>                                                                             mAsHandles;
    ::ll::TypedStorage<8, 8, ::mce::CheckedResourceService<dragon::ResolvedAccelerationStructureResource>&> mAsManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkMetadata& operator=(ChunkMetadata const&);
    ChunkMetadata(ChunkMetadata const&);
    ChunkMetadata();
#else // @header-generator platform
    struct TerrainLayerKey {};
#endif // @header-generator platform
};

} // namespace mce::framebuilder::bgfxbridge
