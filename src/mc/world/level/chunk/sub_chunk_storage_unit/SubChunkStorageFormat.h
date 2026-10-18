#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/chunk/sub_chunk_storage_unit/Type.h"
#endif // @header-generator platform

namespace SubChunkStorageUnit {

union SubChunkStorageFormat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 1>     mField_70223bec;
#else // @header-generator platform
    bool                           network : 1;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, char> raw;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ::SubChunkStorageUnit::Type    type : 7;
#endif // @header-generator platform
    // NOLINTEND
};
} // namespace SubChunkStorageUnit
