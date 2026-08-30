#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EDUDiscovery {

struct LocKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mKey;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mArgs;
    // NOLINTEND
};

} // namespace EDUDiscovery
