#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Context.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Memory; }
namespace bgfx { struct Rect; }
// clang-format on

namespace bgfx::gl {

struct TextureGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  m_id;
    ::ll::TypedStorage<4, 4, uint>  m_rbo;
    ::ll::TypedStorage<4, 4, uint>  m_target;
    ::ll::TypedStorage<4, 4, uint>  m_fmt;
    ::ll::TypedStorage<4, 4, uint>  m_type;
    ::ll::TypedStorage<4, 4, uint>  m_flags;
    ::ll::TypedStorage<4, 4, uint>  m_currentSamplerHash;
    ::ll::TypedStorage<4, 4, uint>  m_width;
    ::ll::TypedStorage<4, 4, uint>  m_height;
    ::ll::TypedStorage<4, 4, uint>  m_depth;
    ::ll::TypedStorage<4, 4, uint>  m_numLayers;
    ::ll::TypedStorage<1, 1, uchar> m_numMips;
    ::ll::TypedStorage<1, 1, uchar> m_requestedFormat;
    ::ll::TypedStorage<1, 1, uchar> m_textureFormat;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void create(::bgfx::Memory const*, uint, uchar);

    MCNAPI void setSamplerState(uint, float const*);
    // NOLINTEND
};

} // namespace bgfx::gl
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
