#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Clear {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, uchar[8]> m_index;
    ::ll::TypedStorage<4, 4, float>    m_depth;
    ::ll::TypedStorage<1, 1, uchar>    m_stencil;
    ::ll::TypedStorage<2, 2, ushort>   m_flags;
    // NOLINTEND
};

} // namespace bgfx
