#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class BlockVoxelShapeType : uchar {
    OcclusionShape = 0,
    _Count         = 1,
};
#else // @header-generator platform
enum class BlockVoxelShapeType : uchar {};
#endif // @header-generator platform
