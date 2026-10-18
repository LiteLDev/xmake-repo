#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct IndexBufferHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> idx;
    // NOLINTEND
};
#else // @header-generator platform
struct IndexBufferHandle {};
#endif // @header-generator platform

} // namespace bgfx
