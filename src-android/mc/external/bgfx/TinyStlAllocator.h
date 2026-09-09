#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct TinyStlAllocator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void* static_allocate(ulong);

    MCNAPI static void static_deallocate(void*, ulong);
    // NOLINTEND
};

} // namespace bgfx
