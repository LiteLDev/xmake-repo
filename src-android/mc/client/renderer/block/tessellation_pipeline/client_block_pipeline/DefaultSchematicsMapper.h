#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/ISchematicsMapper.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Matrix;
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBlock; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
// clang-format on

namespace ClientBlockPipeline {

struct DefaultSchematicsMapper : public ::ClientBlockPipeline::ISchematicsMapper {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DefaultSchematicsMapper();

    virtual void execute(std::vector<ClientBlockPipeline::CustomGeometryBox>&, std::vector<ClientBlockPipeline::CustomGeometryFace>&, ::ClientBlockPipeline::BlockVolumeArea const&, ::ClientBlockPipeline::BitsetCache const&, ::ClientBlockPipeline::ArrayCache<const Block*> const*, ::ClientBlockPipeline::CustomGeometryBlock const&, ::ClientBlockPipeline::BlockLookupData const&, ::BlockPos const&, ::Matrix const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _shouldOccludeAgainst(
        ::BlockPos const&,
        uchar,
        ::ClientBlockPipeline::BlockVolumeArea const&,
        ::ClientBlockPipeline::BitsetCache const&,
        ::ClientBlockPipeline::ArrayCache<const Block*> const&,
        std::optional<BlockCullingData::CullingRule::Condition> const,
        bool const
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(
        std::vector<ClientBlockPipeline::CustomGeometryBox>&,
        std::vector<ClientBlockPipeline::CustomGeometryFace>&,
        ::ClientBlockPipeline::BlockVolumeArea const&,
        ::ClientBlockPipeline::BitsetCache const&,
        ::ClientBlockPipeline::ArrayCache<const Block*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const&,
        ::Matrix const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
