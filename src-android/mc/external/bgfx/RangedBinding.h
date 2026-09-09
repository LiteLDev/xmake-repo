#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Binding; }
// clang-format on

namespace bgfx {

struct RangedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Binding*> m_bindings;
    ::ll::TypedStorage<8, 8, ulong>            m_size;
    // NOLINTEND
};

} // namespace bgfx
