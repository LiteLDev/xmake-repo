#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct PrimInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_type;
    ::ll::TypedStorage<4, 4, uint> m_min;
    ::ll::TypedStorage<4, 4, uint> m_div;
    ::ll::TypedStorage<4, 4, uint> m_sub;
    // NOLINTEND
};

} // namespace bgfx::gl
