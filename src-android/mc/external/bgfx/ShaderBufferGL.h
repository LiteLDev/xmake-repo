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
