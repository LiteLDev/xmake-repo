#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/ResourceLoadIoPhaseStat.h"

namespace Bedrock::Resources {

struct ResourceLoadIoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                                       dataReadInB;
    ::ll::TypedStorage<4, 4, uint>                                                        readOpsCount;
    ::ll::TypedStorage<8, 8, double>                                                      avgThroughputInMBPerS;
    ::ll::TypedStorage<4, 4, uint>                                                        handleHighWater;
    ::ll::TypedStorage<8, 48, std::array<Bedrock::Resources::ResourceLoadIoPhaseStat, 3>> perPhase;
    // NOLINTEND
};

} // namespace Bedrock::Resources
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
