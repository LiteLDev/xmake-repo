#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/Step.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/VisualReference.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CacheId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CompleteOpaqueFullBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PotentiallyFaceCulledBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/Block.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { class Inputs; }
namespace ClientBlockPipeline { class StepResult; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct PipelineError; }
namespace ClientBlockPipeline { struct TextureShiftNoiseCache; }
namespace ClientBlockPipeline::WorldView { class Interface; }
// clang-format on

namespace ClientBlockPipeline {

class WorldExtractorStep : public ::ClientBlockPipeline::Step {
public:
    // WorldExtractorStep inner types declare
    // clang-format off
    struct BlockIterationData;
    struct ExtractionData;
    struct BlockExtractionData;
    // clang-format on

    // WorldExtractorStep inner types define
    struct BlockIterationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>                    relativePos;
        ::ll::UntypedStorage<1, 4>                               packedPositon;
        ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::CacheId> index;
        // NOLINTEND
    };

    struct ExtractionData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::unordered_map<const Block*, ClientBlockPipeline::BlockLookupId>&> blockLookupIds;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId>&> blockLookupCache;
        ::ll::TypedStorage<8, 8, std::vector<ClientBlockPipeline::CompleteOpaqueFullBlock>&> unitCubes;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::CompleteOpaqueFullBlockIds&> unitCubeBlocksIds;
        ::ll::TypedStorage<8, 8, std::vector<ClientBlockPipeline::CustomGeometryBlock>&> customGeometry;
        ::ll::TypedStorage<8, 8, std::vector<ClientBlockPipeline::PotentiallyFaceCulledBlock>*> potentiallyFaceCulledBlocks;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::BitsetCache*> opaqueFullBlockCache;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::TextureShiftNoiseCache*> textureShiftNoiseCache;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ExtractionData& operator=(ExtractionData const&);
        ExtractionData(ExtractionData const&);
        ExtractionData();
    };

    struct BlockExtractionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>    mId;
        ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::BlockLookupData&> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockExtractionData& operator=(BlockExtractionData const&);
        BlockExtractionData(BlockExtractionData const&);
        BlockExtractionData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mShouldGenerateFaceCulling;
    ::ll::TypedStorage<1, 1, bool>              mTextureShiftsEnabled;
    ::ll::TypedStorage<8, 8, ::BiomeTintCache*> mBiomeTintCache;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldExtractorStep();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldExtractorStep();

    virtual ::ClientBlockPipeline::StepResult run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<ClientBlockPipeline::PipelineError> extractCustomBlock(
        ::Block const&,
        ::ClientBlockPipeline::WorldExtractorStep::BlockIterationData const&,
        ::ClientBlockPipeline::WorldExtractorStep::ExtractionData&,
        ::ClientBlockPipeline::WorldView::Interface*,
        bool,
        ::ClientBlockPipeline::VisualReference const,
        ::ClientBlockPipeline::ITintResolver&,
        ::BiomeTintCache*,
        ::BlockPos const&,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::StepResult $run(::ClientBlockPipeline::Inputs const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
