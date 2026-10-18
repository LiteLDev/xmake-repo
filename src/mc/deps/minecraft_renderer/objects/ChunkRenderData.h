#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<4, 12, ::glm::ivec3> mPosition;
    ::ll::TypedStorage<8, 8, double>        mReadyTimeDiff;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>> const>
        mChunkIndices;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>> const>
        mChunkMesh;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkRenderData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ChunkRenderData {};
#endif // @header-generator platform
#endif // @header-generator platform
