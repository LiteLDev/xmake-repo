#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

class CommandRunStats {
public:
    // CommandRunStats inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using OriginToRunCountMap = std::unordered_map<CommandOriginType, ulong>;
#else // @header-generator platform
    using OriginToRunCountMap = ::std::unordered_map<::CommandOriginType, uint64>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<CommandOriginType, ulong>> mRunCountMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearRunCounts();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CommandOriginType, uint64>> mRunCountMap;
#endif // @header-generator platform
    // NOLINTEND
};
