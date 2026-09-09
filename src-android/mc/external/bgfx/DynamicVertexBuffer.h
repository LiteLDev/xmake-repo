#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

namespace bgfx {

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

} // namespace bgfx
