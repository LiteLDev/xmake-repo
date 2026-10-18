#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace ClientBlockPipeline { struct ISchematicsMapper; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
namespace ClientBlockPipeline { struct ISchematicsMapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct CustomGeometryBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                    mPosRandom;
    ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>                     mBlockId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::IResolvedTint>>     mResolvedTint;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                  mOffset;
    ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition>                    mPosition;
    ::ll::TypedStorage<1, 1, ::Flip>                                                   mFlipRotation;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::ISchematicsMapper>> mSchematicsMapper;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomGeometryBlock& operator=(CustomGeometryBlock const&);
    CustomGeometryBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CustomGeometryBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CustomGeometryBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                        mPosRandom;
    ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>                         mBlockId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>>     mResolvedTint;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                      mOffset;
    ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition>                        mPosition;
    ::ll::TypedStorage<1, 1, ::Flip>                                                       mFlipRotation;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::ISchematicsMapper>> mSchematicsMapper;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CustomGeometryBlock();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct CustomGeometryBlock {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
