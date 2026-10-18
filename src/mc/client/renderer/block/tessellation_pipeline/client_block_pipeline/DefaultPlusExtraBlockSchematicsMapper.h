#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/ISchematicsMapper.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class Matrix;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/client_block_pipeline/ISchematicsMapper.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/ArrayCache.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBlock.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/VectorCache.h"

// auto generated forward declare list
// clang-format off
class BiomeTintCache;
class Block;
class BlockPos;
class Matrix;
namespace ClientBlockPipeline { class ITintResolver; }
namespace ClientBlockPipeline { struct BitsetCache; }
namespace ClientBlockPipeline { struct BlockLookupData; }
namespace ClientBlockPipeline { struct BlockLookupId; }
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline { struct CustomGeometryBox; }
namespace ClientBlockPipeline { struct CustomGeometryFace; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct DefaultPlusExtraBlockSchematicsMapper : public ::ClientBlockPipeline::ISchematicsMapper {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mHasEmbeddedBlock;
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId>&> mBlockLookupCache;
    ::ll::TypedStorage<8, 56, ::ClientBlockPipeline::CustomGeometryBlock> mEmbeddedCustomBlock;
    ::ll::TypedStorage<8, 8, ::Matrix const&> mTransformationMatrix;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultPlusExtraBlockSchematicsMapper& operator=(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DefaultPlusExtraBlockSchematicsMapper();

    virtual void execute(std::vector<ClientBlockPipeline::CustomGeometryBox>&, std::vector<ClientBlockPipeline::CustomGeometryFace>&, ::ClientBlockPipeline::BlockVolumeArea const&, ::ClientBlockPipeline::BitsetCache const&, ::ClientBlockPipeline::ArrayCache<const Block*> const*, ::ClientBlockPipeline::CustomGeometryBlock const&, ::ClientBlockPipeline::BlockLookupData const&, ::BlockPos const&, ::Matrix const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DefaultPlusExtraBlockSchematicsMapper(
        ::ClientBlockPipeline::VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId>&,
        ::ClientBlockPipeline::ITintResolver&,
        ::BiomeTintCache*,
        ::BlockPos const&,
        ::Matrix const&,
        ::Block const&,
        ::BlockPos const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ClientBlockPipeline::VectorCache<ClientBlockPipeline::BlockLookupData, ClientBlockPipeline::BlockLookupId>&,
        ::ClientBlockPipeline::ITintResolver&,
        ::BiomeTintCache*,
        ::BlockPos const&,
        ::Matrix const&,
        ::Block const&,
        ::BlockPos const&
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DefaultPlusExtraBlockSchematicsMapper : public ::ClientBlockPipeline::ISchematicsMapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mHasEmbeddedBlock;
    ::ll::TypedStorage<
        8,
        8,
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>&>
                                                                          mBlockLookupCache;
    ::ll::TypedStorage<8, 56, ::ClientBlockPipeline::CustomGeometryBlock> mEmbeddedCustomBlock;
    ::ll::TypedStorage<8, 8, ::Matrix const&>                             mTransformationMatrix;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultPlusExtraBlockSchematicsMapper& operator=(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper(DefaultPlusExtraBlockSchematicsMapper const&);
    DefaultPlusExtraBlockSchematicsMapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&  customBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>& customFaces,
        ::ClientBlockPipeline::BlockVolumeArea const&             area,
        ::ClientBlockPipeline::BitsetCache const&                 opaqueFullBlockCache,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const& relativePos,
        ::Matrix const&   blockPosTransform
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DefaultPlusExtraBlockSchematicsMapper(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const&   transformationMatrix,
        ::Block const&    extraBlock,
        ::BlockPos const& blockWorldPos
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ClientBlockPipeline::
            VectorCache<::ClientBlockPipeline::BlockLookupData, ::ClientBlockPipeline::BlockLookupId>& blockLookupCache,
        ::ClientBlockPipeline::ITintResolver&                                                          tintResolver,
        ::BiomeTintCache*                                                                              biomeTintCache,
        ::BlockPos const&                                                                              relativePos,
        ::Matrix const&   transformationMatrix,
        ::Block const&    extraBlock,
        ::BlockPos const& blockWorldPos
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(
        ::std::vector<::ClientBlockPipeline::CustomGeometryBox>&  customBoxes,
        ::std::vector<::ClientBlockPipeline::CustomGeometryFace>& customFaces,
        ::ClientBlockPipeline::BlockVolumeArea const&             area,
        ::ClientBlockPipeline::BitsetCache const&                 opaqueFullBlockCache,
        ::ClientBlockPipeline::ArrayCache<::Block const*> const*,
        ::ClientBlockPipeline::CustomGeometryBlock const&,
        ::ClientBlockPipeline::BlockLookupData const&,
        ::BlockPos const& relativePos,
        ::Matrix const&   blockPosTransform
    ) const;
    // NOLINTEND
};
#else // @header-generator platform
struct DefaultPlusExtraBlockSchematicsMapper {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
