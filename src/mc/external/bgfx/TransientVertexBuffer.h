#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace bgfx {

#if defined(LL_PLAT_A) // @header-generator platform
struct TransientVertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                     data;
    ::ll::TypedStorage<4, 4, uint>                       size;
    ::ll::TypedStorage<4, 4, uint>                       startVertex;
    ::ll::TypedStorage<2, 2, ushort>                     stride;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> handle;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   decl;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TransientVertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                     data;
    ::ll::TypedStorage<4, 4, uint>                       size;
    ::ll::TypedStorage<4, 4, uint>                       startVertex;
    ::ll::TypedStorage<2, 2, ushort>                     stride;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexBufferHandle> handle;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>   decl;
    // NOLINTEND
};
#else // @header-generator platform
struct TransientVertexBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace bgfx
