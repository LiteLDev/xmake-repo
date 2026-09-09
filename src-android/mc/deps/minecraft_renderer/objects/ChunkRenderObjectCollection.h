#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ChunkLayerRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/ChunkRenderData.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"

// auto generated forward declare list
// clang-format off
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
// clang-format on

struct ChunkRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::ServerTexture>> mTextures;
    ::ll::TypedStorage<8, 24, std::vector<ChunkRenderData>>    mChunkQueue;
    ::ll::UntypedStorage<8, 1224>                              mTerrainLayerChunkQueue;
    ::ll::TypedStorage<4, 4, uint>                             mMaximumChunkVertexCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRenderObjectCollection& operator=(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkRenderObjectCollection(::ChunkRenderObjectCollection&&);

    MCNAPI ChunkRenderObjectCollection(ulong const, ulong const (*)[17]);

    MCNAPI ulong addToChunkQueue(
        std::variant<
            std::monostate,
            std::shared_ptr<mce::IndexBufferContainer>,
            std::shared_ptr<RenderChunkDirectIndexData>> const&,
        std::variant<std::monostate, std::shared_ptr<mce::Mesh>, std::shared_ptr<RenderChunkDirectVertexData>> const&,
        ::glm::vec<3, int, (glm::qualifier)0> const&,
        double
    );

    MCNAPI void addToTerrainLayerChunkQueue(int, ulong, ::ChunkLayerRenderObject&&);

    MCNAPI void resetTerrainTextureList(std::vector<mce::ServerTexture>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkRenderObjectCollection&&);

    MCNAPI void* $ctor(ulong const, ulong const (*)[17]);
    // NOLINTEND
};
