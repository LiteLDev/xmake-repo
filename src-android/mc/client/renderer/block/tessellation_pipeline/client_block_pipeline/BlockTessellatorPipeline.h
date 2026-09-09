#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ClientBlockPipeline {

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

} // namespace ClientBlockPipeline
