#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx::gl {

struct VendorId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> name;
    ::ll::TypedStorage<2, 2, ushort>      id;
    // NOLINTEND
};

} // namespace bgfx::gl
