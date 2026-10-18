#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct DefaultVoxelBufferTraits {
public:
    // DefaultVoxelBufferTraits inner types define
    using VoxelDataType = uint;
};
#else // @header-generator platform
struct DefaultVoxelBufferTraits {};
#endif // @header-generator platform

} // namespace mce
