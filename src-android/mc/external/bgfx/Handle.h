#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Handle {
public:
    // Handle inner types define
    enum Enum : uint {
        Shader       = 0,
        Texture      = 1,
        ShaderBuffer = 2,
        Count        = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> type;
    ::ll::TypedStorage<2, 2, ushort> idx;
    // NOLINTEND
};

} // namespace bgfx
