#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/IDType.h"
#else // @header-generator platform
#endif // @header-generator platform

struct RegisteredTagFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mIncludeSet;
    ::ll::UntypedStorage<8, 16> mExcludeSet;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkd9c09c;
    ::ll::UntypedStorage<8, 16> mUnk49ab70;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RegisteredTagFilter& operator=(RegisteredTagFilter const&);
    RegisteredTagFilter(RegisteredTagFilter const&);
    RegisteredTagFilter();
#endif // @header-generator platform
};
