#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/IndexBufferHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct DynamicIndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::IndexBufferHandle> m_handle;
    ::ll::TypedStorage<4, 4, uint>                      m_offset;
    ::ll::TypedStorage<4, 4, uint>                      m_size;
    ::ll::TypedStorage<4, 4, uint>                      m_startIndex;
    ::ll::TypedStorage<2, 2, ushort>                    m_flags;
    // NOLINTEND
};
#else // @header-generator platform
struct DynamicIndexBuffer {};
#endif // @header-generator platform

} // namespace bgfx
