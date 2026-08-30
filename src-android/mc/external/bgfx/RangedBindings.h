#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RangedBinding.h"

namespace bgfx {

struct RangedBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1024, ::bgfx::RangedBinding[64]> m_binding;
    ::ll::TypedStorage<4, 4, uint>                         m_totalRangedBindings;
    // NOLINTEND
};

} // namespace bgfx
