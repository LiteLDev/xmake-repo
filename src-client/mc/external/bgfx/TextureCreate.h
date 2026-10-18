#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct Memory; }
// clang-format on

namespace bgfx {

struct TextureCreate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                      m_format;
    ::ll::TypedStorage<2, 2, ushort>                m_width;
    ::ll::TypedStorage<2, 2, ushort>                m_height;
    ::ll::TypedStorage<2, 2, ushort>                m_depth;
    ::ll::TypedStorage<2, 2, ushort>                m_numLayers;
    ::ll::TypedStorage<1, 1, uchar>                 m_numMips;
    ::ll::TypedStorage<1, 1, bool>                  m_cubeMap;
    ::ll::TypedStorage<8, 8, ::bgfx::Memory const*> m_mem;
    // NOLINTEND
};

} // namespace bgfx
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
