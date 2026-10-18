#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct Blend {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_src;
    ::ll::TypedStorage<4, 4, uint> m_dst;
    ::ll::TypedStorage<1, 1, bool> m_factor;
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
