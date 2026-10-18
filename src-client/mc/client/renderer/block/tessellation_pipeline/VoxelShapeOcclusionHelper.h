#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ClientBlockPipeline::VoxelShapeOcclusionHelper {
// functions
// NOLINTBEGIN
MCAPI bool shouldRenderFace(::Block const& currentBlock, ::Block const& neighborBlock, uchar neighborDirection);
// NOLINTEND

} // namespace ClientBlockPipeline::VoxelShapeOcclusionHelper
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
