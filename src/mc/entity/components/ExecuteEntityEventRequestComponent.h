#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExecuteEntityEventRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ExecuteEntityEventRequestComponent& operator=(ExecuteEntityEventRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
