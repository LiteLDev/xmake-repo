#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/ProgramHandle.h"
#include "mc/external/bgfx/VertexDecl.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct TransientVertexBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClearQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bgfx::TransientVertexBuffer*> m_vb;
    ::ll::TypedStorage<4, 84, ::bgfx::VertexDecl>            m_decl;
    ::ll::TypedStorage<2, 16, ::bgfx::ProgramHandle[8]>      m_program;
    // NOLINTEND
};
#else // @header-generator platform
struct ClearQuad {};
#endif // @header-generator platform

} // namespace bgfx
