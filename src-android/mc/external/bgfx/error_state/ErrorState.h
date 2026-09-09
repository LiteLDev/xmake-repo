#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ErrorState {
public:
    // ErrorState inner types define
    enum Enum : uint {
        Default          = 0,
        ContextAllocated = 1,
    };
};

} // namespace bgfx
