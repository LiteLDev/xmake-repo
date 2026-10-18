#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PortMappingParseOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> allowIpPrefix;
    ::ll::TypedStorage<1, 1, bool> allowRanges;
    ::ll::TypedStorage<1, 1, bool> allowBareAllocatorRange;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk7b1093;
    ::ll::UntypedStorage<1, 1> mUnkbc6336;
    ::ll::UntypedStorage<1, 1> mUnk704fa5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PortMappingParseOptions& operator=(PortMappingParseOptions const&);
    PortMappingParseOptions(PortMappingParseOptions const&);
    PortMappingParseOptions();
#endif // @header-generator platform
};
