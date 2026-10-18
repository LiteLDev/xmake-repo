#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct DynamicVertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> m_handle;
    ::ll::TypedStorage<4, 4, uint>                       m_offset;
    ::ll::TypedStorage<4, 4, uint>                       m_size;
    ::ll::TypedStorage<4, 4, uint>                       m_startVertex;
    ::ll::TypedStorage<4, 4, uint>                       m_numVertices;
    ::ll::TypedStorage<2, 2, ushort>                     m_stride;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   m_decl;
    ::ll::TypedStorage<2, 2, ushort>                     m_flags;
    // NOLINTEND
};
#else // @header-generator platform
struct DynamicVertexBuffer {};
#endif // @header-generator platform

} // namespace bgfx
