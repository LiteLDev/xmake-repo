#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct ShaderBufferGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_id;
    ::ll::TypedStorage<4, 4, uint> m_target;
    ::ll::TypedStorage<4, 4, uint> m_size;
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
