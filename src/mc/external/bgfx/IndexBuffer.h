#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct IndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_size;
    // NOLINTEND
};
#else // @header-generator platform
struct IndexBuffer {};
#endif // @header-generator platform

} // namespace bgfx
