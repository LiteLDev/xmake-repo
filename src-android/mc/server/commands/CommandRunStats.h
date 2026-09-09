#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

class CommandRunStats {
public:
    // CommandRunStats inner types define
    using OriginToRunCountMap = std::unordered_map<CommandOriginType, ulong>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<CommandOriginType, ulong>> mRunCountMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearRunCounts();
    // NOLINTEND
};
