#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
