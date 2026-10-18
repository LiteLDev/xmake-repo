#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Binding {
public:
    // Binding inner types define
    enum Enum : uint {
        Image                 = 0,
        IndexBuffer           = 1,
        VertexBuffer          = 2,
        Texture               = 3,
        ShaderBuffer          = 4,
        AccelerationStructure = 5,
        RangedTexture         = 6,
        RangedImage           = 7,
        RangedShaderBuffer    = 8,
        SamplerState          = 9,
        Count                 = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_textureFlags;
    ::ll::TypedStorage<4, 4, uint>   m_offset;
    ::ll::TypedStorage<4, 4, uint>   m_stride;
    ::ll::TypedStorage<2, 2, ushort> m_idx;
    ::ll::TypedStorage<1, 1, uchar>  m_format;
    ::ll::TypedStorage<1, 1, uchar>  m_access;
    ::ll::TypedStorage<1, 1, uchar>  m_mip;
    ::ll::TypedStorage<1, 1, uchar>  m_type;
    // NOLINTEND
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
