#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexDeclHandle.h"

namespace bgfx::gl {

struct VertexBufferGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                     m_id;
    ::ll::TypedStorage<4, 4, uint>                     m_target;
    ::ll::TypedStorage<4, 4, uint>                     m_size;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle> m_decl;
    // NOLINTEND
};

} // namespace bgfx::gl
