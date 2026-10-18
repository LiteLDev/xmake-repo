#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBoxMask.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/BlockLookupId.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/CustomGeometryBoxMask.h"
#include "mc/client/renderer/block/tessellation_pipeline/helper/client_block_pipeline/PackedPosition.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/world/Flip.h"

// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { struct IResolvedTint; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct CustomGeometryBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                            mMatrix;
    ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>                 mBlockId;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::CustomGeometryBoxMask>         mMask;
    ::ll::TypedStorage<1, 1, ::Flip>                                               mFlipRotation;
    ::ll::TypedStorage<4, 4, float>                                                mPosRandom;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::IResolvedTint>> mResolvedTint;
    ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition>                mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomGeometryBox& operator=(CustomGeometryBox const&);
    CustomGeometryBox();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CustomGeometryBox();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CustomGeometryBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                mMatrix;
    ::ll::TypedStorage<2, 2, ::ClientBlockPipeline::BlockLookupId>                     mBlockId;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::CustomGeometryBoxMask>             mMask;
    ::ll::TypedStorage<1, 1, ::Flip>                                                   mFlipRotation;
    ::ll::TypedStorage<4, 4, float>                                                    mPosRandom;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::IResolvedTint>> mResolvedTint;
    ::ll::TypedStorage<1, 3, ::ClientBlockPipeline::PackedPosition>                    mPosition;
    // NOLINTEND
};
#else // @header-generator platform
struct CustomGeometryBox {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
