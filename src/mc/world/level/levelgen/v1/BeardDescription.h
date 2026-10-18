#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/BeardingDescriptionCache.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
struct BeardKernel;
// clang-format on

class BeardDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::BeardingDescriptionCache const> mCache;
    ::ll::TypedStorage<8, 8, ::BeardKernel const&>              mBeardKernel;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardDescription& operator=(BeardDescription const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BeardDescription(BeardDescription const&);
#endif // @header-generator platform
    BeardDescription();
};
