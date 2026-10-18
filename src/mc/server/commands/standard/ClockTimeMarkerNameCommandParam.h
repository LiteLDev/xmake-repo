#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClockTimeMarkerNameCommandParam {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
#endif // @header-generator platform
    // NOLINTEND
};
