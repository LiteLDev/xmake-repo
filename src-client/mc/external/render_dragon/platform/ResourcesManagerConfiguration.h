#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::platform {

struct ResourcesManagerConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::optional<uint>> mVertexBufferCombinedAllocationPageSize;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mIndexBufferCombinedAllocationPageSize;
    // NOLINTEND
};

} // namespace dragon::platform
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
