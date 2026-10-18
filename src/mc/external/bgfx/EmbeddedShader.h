#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/external/bgfx/RendererType.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace bgfx {

struct EmbeddedShader {
public:
    // EmbeddedShader inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // EmbeddedShader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct Data {};
#endif // @header-generator platform
};

} // namespace bgfx
