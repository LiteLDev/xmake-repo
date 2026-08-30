#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Rect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_x;
    ::ll::TypedStorage<2, 2, ushort> m_y;
    ::ll::TypedStorage<2, 2, ushort> m_width;
    ::ll::TypedStorage<2, 2, ushort> m_height;
    // NOLINTEND
};

} // namespace bgfx
