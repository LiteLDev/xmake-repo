#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ItemDisplayRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> productId;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<1, 1, bool>         isInitiallyVisibleInRow;
    ::ll::TypedStorage<1, 1, bool>         seenByPlayer;
    // NOLINTEND
};

} // namespace Social::Events
