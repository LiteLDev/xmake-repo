#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MaterialReducerEntryOutput.h"

struct MaterialReducerDataEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                      fromItemKey;
    ::ll::TypedStorage<8, 24, std::vector<MaterialReducerEntryOutput>> toItemIdsAndCounts;
    // NOLINTEND
};
