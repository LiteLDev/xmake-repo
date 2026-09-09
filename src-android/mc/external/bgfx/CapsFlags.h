#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct CapsFlags {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>       m_flag;
    ::ll::TypedStorage<8, 8, char const*> m_str;
    // NOLINTEND
};

} // namespace bgfx
