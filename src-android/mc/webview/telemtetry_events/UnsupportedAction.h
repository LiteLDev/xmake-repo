#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TelemtetryEvents {

struct UnsupportedAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> action;
    // NOLINTEND
};

} // namespace TelemtetryEvents
