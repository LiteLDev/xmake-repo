#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/PackInstanceId.h"

class CachedHostPackIdProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>> mResourcePackInstanceIds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setPackInstanceIds(std::vector<PackInstanceId>);
    // NOLINTEND
};
#else // @header-generator platform
class CachedHostPackIdProvider {};
#endif // @header-generator platform
