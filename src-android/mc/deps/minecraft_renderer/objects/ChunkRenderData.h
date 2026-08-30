#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
// clang-format on

struct ChunkRenderData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<8, 8, double> mReadyTimeDiff;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, std::shared_ptr<mce::IndexBufferContainer>, std::shared_ptr<RenderChunkDirectIndexData>> const> mChunkIndices;
    ::ll::TypedStorage<8, 24, std::variant<std::monostate, std::shared_ptr<mce::Mesh>, std::shared_ptr<RenderChunkDirectVertexData>> const> mChunkMesh;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRenderData& operator=(ChunkRenderData const&);
    ChunkRenderData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChunkRenderData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
