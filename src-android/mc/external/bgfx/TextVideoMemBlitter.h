#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/ProgramHandle.h"
#include "mc/external/bgfx/TextureHandle.h"
#include "mc/external/bgfx/VertexDecl.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TransientIndexBuffer; }
namespace bgfx { struct TransientVertexBuffer; }
// clang-format on

namespace bgfx {

struct TextVideoMemBlitter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>          m_texture;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientVertexBuffer*> m_vb;
    ::ll::TypedStorage<8, 8, ::bgfx::TransientIndexBuffer*>  m_ib;
    ::ll::TypedStorage<4, 84, ::bgfx::VertexDecl>            m_decl;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>          m_program;
    // NOLINTEND
};

} // namespace bgfx
