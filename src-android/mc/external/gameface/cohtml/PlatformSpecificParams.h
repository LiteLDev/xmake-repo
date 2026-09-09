#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct PlatformSpecificParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> JavaVM;
    // NOLINTEND
};

} // namespace cohtml
