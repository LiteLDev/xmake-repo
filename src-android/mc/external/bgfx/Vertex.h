#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Vertex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> m_x;
    ::ll::TypedStorage<4, 4, float> m_y;
    ::ll::TypedStorage<4, 4, float> m_z;
    ::ll::TypedStorage<4, 4, uint>  m_fg;
    ::ll::TypedStorage<4, 4, uint>  m_bg;
    ::ll::TypedStorage<4, 4, float> m_u;
    ::ll::TypedStorage<4, 4, float> m_v;
    // NOLINTEND
};

} // namespace bgfx
