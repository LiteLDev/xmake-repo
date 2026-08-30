#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BrightnessPair;
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlock; }
namespace ClientBlockPipeline { struct CompleteOpaqueFullBlockIds; }
namespace ClientBlockPipeline { struct CustomGeometryBlock; }
namespace ClientBlockPipeline { struct PotentiallyFaceCulledBlock; }
namespace ClientBlockPipeline { struct TextureShiftNoiseCache; }
// clang-format on

namespace ClientBlockPipeline {

struct TotalExtractionData {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<const Block*, ClientBlockPipeline::BlockLookupId>> blockLookupIds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId>>> blockLookup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<ClientBlockPipeline::CompleteOpaqueFullBlock>>> unitCubes;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::CompleteOpaqueFullBlockIds>> unitCubeBlockIds;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<ClientBlockPipeline::PotentiallyFaceCulledBlock>>> potentiallyFaceCulledBlocks;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<ClientBlockPipeline::CustomGeometryBlock>>> customGeometry;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::BitsetCache>> opaqueFullBlockCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::ArrayCache<BrightnessPair>>> lightCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::ArrayCache<float>>> aoCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::ArrayCache<const Block*>>> cullingBlocksCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::TextureShiftNoiseCache>> textureShiftNoiseCache;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TotalExtractionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
