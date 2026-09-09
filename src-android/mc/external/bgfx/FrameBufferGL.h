#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Attachment.h"
#include "mc/external/bgfx/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace bgfx::gl { struct SwapChainGL; }
// clang-format on

namespace bgfx::gl {

struct FrameBufferGL {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::gl::SwapChainGL*> m_swapChain;
    ::ll::TypedStorage<4, 8, uint[2]>                  m_fbo;
    ::ll::TypedStorage<4, 4, uint>                     m_width;
    ::ll::TypedStorage<4, 4, uint>                     m_height;
    ::ll::TypedStorage<2, 2, ushort>                   m_denseIdx;
    ::ll::TypedStorage<1, 1, uchar>                    m_num;
    ::ll::TypedStorage<1, 1, uchar>                    m_numTh;
    ::ll::TypedStorage<1, 1, bool>                     m_needPresent;
    ::ll::TypedStorage<2, 48, ::bgfx::Attachment[8]>   m_attachment;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void postReset();
    // NOLINTEND
};

} // namespace bgfx::gl
