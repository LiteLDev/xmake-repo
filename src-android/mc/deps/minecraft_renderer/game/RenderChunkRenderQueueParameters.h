#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TerrainLayer;
namespace mce { struct ServerTexture; }
// clang-format on

struct RenderChunkRenderQueueParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TerrainLayer const&>                  mTerrainLayer;
    ::ll::TypedStorage<8, 8, std::vector<mce::ServerTexture> const&> mTextures;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkRenderQueueParameters& operator=(RenderChunkRenderQueueParameters const&);
    RenderChunkRenderQueueParameters(RenderChunkRenderQueueParameters const&);
    RenderChunkRenderQueueParameters();
};
