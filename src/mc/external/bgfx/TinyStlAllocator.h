#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct TinyStlAllocator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void* static_allocate(ulong);

    MCNAPI static void static_deallocate(void*, ulong);
    // NOLINTEND
};
#else // @header-generator platform
struct TinyStlAllocator {};
#endif // @header-generator platform

} // namespace bgfx
