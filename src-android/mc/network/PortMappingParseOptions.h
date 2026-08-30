#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortMappingParseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> allowIpPrefix;
    ::ll::TypedStorage<1, 1, bool> allowRanges;
    ::ll::TypedStorage<1, 1, bool> allowBareAllocatorRange;
    // NOLINTEND
};
