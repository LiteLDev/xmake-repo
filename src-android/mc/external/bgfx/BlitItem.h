#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"

namespace bgfx {

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

} // namespace bgfx
