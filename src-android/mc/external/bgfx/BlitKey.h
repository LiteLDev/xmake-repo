#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct BlitKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_item;
    ::ll::TypedStorage<2, 2, ushort> m_view;
    // NOLINTEND
};

} // namespace bgfx
