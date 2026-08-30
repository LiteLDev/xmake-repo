#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Attrib.h"

namespace bgfx {

struct ConvertOp {
public:
    // ConvertOp inner types define
    enum Enum : uint {
        Set     = 0,
        Copy    = 1,
        Convert = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                        attr;
    ::ll::TypedStorage<4, 4, ::bgfx::ConvertOp::Enum> op;
    ::ll::TypedStorage<4, 4, uint>                    src;
    ::ll::TypedStorage<4, 4, uint>                    dest;
    ::ll::TypedStorage<4, 4, uint>                    size;
    // NOLINTEND
};

} // namespace bgfx
