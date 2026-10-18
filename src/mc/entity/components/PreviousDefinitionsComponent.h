#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PreviousDefinitionsComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<std::string> const*> mPreviousDefinitions;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::vector<::std::string> const*> mPreviousDefinitions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PreviousDefinitionsComponent();
#else // @header-generator platform
#endif // @header-generator platform
};
