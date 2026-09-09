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
