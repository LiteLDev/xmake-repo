#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AgentCapabilities {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<bool>> canModifyBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> canModifyBlocks;
#endif // @header-generator platform
    // NOLINTEND
};
