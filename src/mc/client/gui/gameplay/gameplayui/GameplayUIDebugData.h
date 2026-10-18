#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct GameplayUIDebugData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> eventLog;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct GameplayUIDebugData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> eventLog;
    // NOLINTEND
};
#else // @header-generator platform
struct GameplayUIDebugData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GameplayUI
