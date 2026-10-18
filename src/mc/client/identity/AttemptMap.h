#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class AttemptMap {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<const std::string, uchar, std::less<const std::string>, std::allocator<std::pair<const std::string, uchar>>>> mMap;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class AttemptMap {};
#endif // @header-generator platform

} // namespace Social
