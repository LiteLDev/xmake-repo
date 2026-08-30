#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct IndexBufferGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_id;
    ::ll::TypedStorage<4, 4, uint>   m_size;
    ::ll::TypedStorage<2, 2, ushort> m_flags;
    // NOLINTEND
};

} // namespace bgfx::gl
