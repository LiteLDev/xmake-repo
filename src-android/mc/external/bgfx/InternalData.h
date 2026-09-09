#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Caps; }
// clang-format on

namespace bgfx {

struct InternalData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::Caps const*> caps;
    ::ll::TypedStorage<8, 8, void*>               context;
    // NOLINTEND
};

} // namespace bgfx
