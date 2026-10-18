#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/NamedMeshStreams.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class ChunkViewSource;
struct TessellatorQuadInfo;
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { struct Transforms; }
namespace mce { class MeshData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/NamedMeshStreams.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class ChunkViewSource;
struct TessellatorQuadInfo;
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { struct Transforms; }
namespace mce { class MeshData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class BlockTessellatorPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ClientBlockPipeline::NamedMeshStreams> mMeshStreams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _run(::ClientBlockPipeline::Description const&, ::ClientBlockPipeline::Inputs&);

    MCNAPI void loadAllStreams(::mce::MeshData&, std::vector<TessellatorQuadInfo>&) const;

    MCNAPI void mergeStreams(
        ::mce::MeshData&,
        std::vector<TessellatorQuadInfo>&,
        ::mce::MeshData const&,
        std::vector<TessellatorQuadInfo> const&,
        bool const
    ) const;

    MCNAPI void run(::ClientBlockPipeline::Description const&, ::ClientBlockPipeline::Inputs&&);

    MCNAPI ~BlockTessellatorPipeline();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ClientBlockPipeline::Inputs
    setupFullChunkInputs(::AABB&&, ::ClientBlockPipeline::Transforms&&, ::ChunkViewSource&, bool);

    MCNAPI static ::ClientBlockPipeline::Inputs
    setupSingleBlockInWorldInput(::Block const&, ::AABB&&, ::ClientBlockPipeline::Transforms&&, ::ChunkViewSource&);

    MCNAPI static ::ClientBlockPipeline::Inputs setupSingleBlockInputs(
        ::Block const&,
        ::ClientBlockPipeline::Transforms&&,
        bool const,
        ::ClientBlockPipeline::VisualReference const
    );

    MCNAPI static ::ClientBlockPipeline::Inputs
    setupStandardInputs(::AABB&&, ::ClientBlockPipeline::Transforms&&, ::ChunkViewSource&);

    MCNAPI static bool useNewTessellation(::Block const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BlockTessellatorPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ClientBlockPipeline::NamedMeshStreams> mMeshStreams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _run(::ClientBlockPipeline::Description const& description, ::ClientBlockPipeline::Inputs& inputs);

    MCAPI void mergeStreams(
        ::mce::MeshData&                            outputMesh,
        ::std::vector<::TessellatorQuadInfo>&       outputFaceInfo,
        ::mce::MeshData const&                      inputMesh,
        ::std::vector<::TessellatorQuadInfo> const& inputFaceInfo,
        bool                                        textureShiftsEnabled
    ) const;

    MCAPI ~BlockTessellatorPipeline();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ClientBlockPipeline::Inputs setupFullChunkInputs(
        ::AABB&&                            aabb,
        ::ClientBlockPipeline::Transforms&& transforms,
        ::ChunkViewSource&                  source,
        bool                                inUI
    );

    MCAPI static ::ClientBlockPipeline::Inputs setupSingleBlockInWorldInput(
        ::Block const&                      block,
        ::AABB&&                            aabb,
        ::ClientBlockPipeline::Transforms&& transforms,
        ::ChunkViewSource&                  source
    );

    MCAPI static ::ClientBlockPipeline::Inputs setupSingleBlockInputs(
        ::Block const&                         block,
        ::ClientBlockPipeline::Transforms&&    transforms,
        bool                                   shouldCheckIgnoreBlockTransforms,
        ::ClientBlockPipeline::VisualReference visualReference
    );

    MCAPI static ::ClientBlockPipeline::Inputs
    setupStandardInputs(::AABB&& aabb, ::ClientBlockPipeline::Transforms&& transforms, ::ChunkViewSource& source);

    MCAPI static bool useNewTessellation(::Block const& block, bool onlyNew);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class BlockTessellatorPipeline {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
