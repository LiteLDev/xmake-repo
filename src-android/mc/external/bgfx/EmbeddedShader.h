#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RendererType.h"

namespace bgfx {

struct EmbeddedShader {
public:
    // EmbeddedShader inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // EmbeddedShader inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>             type;
        ::ll::TypedStorage<8, 8, uchar const*> data;
        ::ll::TypedStorage<4, 4, uint>         size;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*>                        name;
    ::ll::TypedStorage<8, 264, ::bgfx::EmbeddedShader::Data[11]> data;
    // NOLINTEND
};

} // namespace bgfx
