#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct EnvironmentChangeContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>> mBlockPosContext;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>> mBlockPosContext;
#endif // @header-generator platform
    // NOLINTEND
};
