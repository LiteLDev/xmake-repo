#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SystemDisplayCategory {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // SystemDisplayCategory inner types define
    using Index = uchar;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> mIdentifier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk5993c6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SystemDisplayCategory& operator=(SystemDisplayCategory const&);
    SystemDisplayCategory(SystemDisplayCategory const&);
#endif // @header-generator platform
    SystemDisplayCategory();
};
