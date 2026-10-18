#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlitItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                m_srcX;
    ::ll::TypedStorage<2, 2, ushort>                m_srcY;
    ::ll::TypedStorage<2, 2, ushort>                m_srcZ;
    ::ll::TypedStorage<2, 2, ushort>                m_dstX;
    ::ll::TypedStorage<2, 2, ushort>                m_dstY;
    ::ll::TypedStorage<2, 2, ushort>                m_dstZ;
    ::ll::TypedStorage<2, 2, ushort>                m_width;
    ::ll::TypedStorage<2, 2, ushort>                m_height;
    ::ll::TypedStorage<2, 2, ushort>                m_depth;
    ::ll::TypedStorage<1, 1, uchar>                 m_srcMip;
    ::ll::TypedStorage<1, 1, uchar>                 m_dstMip;
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle> m_src;
    ::ll::UntypedStorage<2, 42>                     m_dst;
    // NOLINTEND
};
#else // @header-generator platform
struct BlitItem {};
#endif // @header-generator platform

} // namespace bgfx
