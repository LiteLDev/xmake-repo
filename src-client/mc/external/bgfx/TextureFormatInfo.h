#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct TextureFormatInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_internalFmt;
    ::ll::TypedStorage<4, 4, uint> m_internalFmtSrgb;
    ::ll::TypedStorage<4, 4, uint> m_fmt;
    ::ll::TypedStorage<4, 4, uint> m_type;
    ::ll::TypedStorage<1, 1, bool> m_supported;
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
