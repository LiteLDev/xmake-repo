#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct VertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_size;
    ::ll::TypedStorage<2, 2, ushort> m_stride;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_size;
    ::ll::TypedStorage<2, 2, ushort> m_stride;
    // NOLINTEND
};
#else // @header-generator platform
struct VertexBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
