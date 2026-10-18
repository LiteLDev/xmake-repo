#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ChunkLayerRenderObject;
struct ChunkRenderData;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
namespace mce { struct ServerTexture; }
// clang-format on

struct ChunkRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ServerTexture>>              mTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkRenderData>>                 mChunkQueue;
    ::ll::TypedStorage<8, 1224, ::std::vector<::ChunkLayerRenderObject>[3][17]> mTerrainLayerChunkQueue;
    ::ll::TypedStorage<4, 4, uint>                                              mMaximumChunkVertexCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRenderObjectCollection& operator=(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkRenderObjectCollection(::ChunkRenderObjectCollection&& other);

    MCAPI ChunkRenderObjectCollection(uint64 lastQueueSize, uint64 (*const lastLayerQueueSizes)[17]);

    MCAPI uint64 addToChunkQueue(
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>> const& chunkIndices,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>> const& chunkMesh,
        ::glm::ivec3 const&                                          chunkPos,
        double                                                       timeDiff
    );

    MCAPI ~ChunkRenderObjectCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkRenderObjectCollection&& other);

    MCAPI void* $ctor(uint64 lastQueueSize, uint64 (*const lastLayerQueueSizes)[17]);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ChunkRenderObjectCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
