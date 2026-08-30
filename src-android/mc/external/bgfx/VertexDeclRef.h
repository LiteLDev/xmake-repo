#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/VertexDeclHandle.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bx { template<int T0, typename T1> class HandleHashMapT; }
// clang-format on

namespace bgfx {

struct VertexDeclRef {
public:
    // VertexDeclRef inner types define
    using VertexDeclMap = ::bx::HandleHashMapT<128, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 776>                                  m_vertexDeclMap;
    ::ll::TypedStorage<2, 128, ushort[64]>                        m_vertexDeclRef;
    ::ll::TypedStorage<2, 32768, ::bgfx::VertexDeclHandle[16384]> m_vertexBufferRef;
    ::ll::TypedStorage<2, 32768, ::bgfx::VertexDeclHandle[16384]> m_dynamicVertexBufferRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::bgfx::VertexDeclHandle release(::bgfx::VertexDeclHandle);
    // NOLINTEND
};

} // namespace bgfx
