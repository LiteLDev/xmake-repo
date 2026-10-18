#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/VertexDeclHandle.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct DynamicVertexBufferHandle; }
namespace bgfx { struct VertexBufferHandle; }
namespace bx { template<int T0, typename T1> class HandleHashMapT; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/VertexDeclHandle.h"
#include "mc/external/bx/HandleHashMapT.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VertexDeclRef {
public:
    // VertexDeclRef inner types define
    using VertexDeclMap = ::bx::HandleHashMapT<128, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 776, ::bx::HandleHashMapT<128, uint>> m_vertexDeclMap;
    ::ll::TypedStorage<2, 128, ushort[64]>                      m_vertexDeclRef;
    ::ll::TypedStorage<2, 8192, ::bgfx::VertexDeclHandle[4096]> m_vertexBufferRef;
    ::ll::TypedStorage<2, 8192, ::bgfx::VertexDeclHandle[4096]> m_dynamicVertexBufferRef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::bgfx::VertexDeclHandle release(::bgfx::VertexDeclHandle _declHandle);
    // NOLINTEND
};
#else // @header-generator platform
struct VertexDeclRef {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
