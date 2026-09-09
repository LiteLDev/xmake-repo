#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class AttemptMap {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<const std::string, uchar, std::less<const std::string>, std::allocator<std::pair<const std::string, uchar>>>> mMap;
    // clang-format on
    // NOLINTEND
};

} // namespace Social
