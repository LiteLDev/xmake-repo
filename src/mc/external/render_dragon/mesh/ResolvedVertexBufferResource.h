#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/VertexBufferHandle.h"
#include "mc/external/bgfx/VertexDecl.h"
#include "mc/external/bgfx/VertexDeclHandle.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct VertexBufferView; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedVertexBufferResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, std::variant<bgfx::VertexBufferHandle, bgfx::DynamicVertexBufferHandle>> mResource;
    ::ll::TypedStorage<4, 4, uint>                                                                    mOffset;
    ::ll::TypedStorage<4, 4, uint>                                                                    mCount;
    ::ll::TypedStorage<2, 2, ::bgfx::VertexDeclHandle>                                                mVertexDeclHandle;
    ::ll::TypedStorage<4, 84, ::bgfx::VertexDecl>                                                     mVertexDecl;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::VertexBufferView>>                               mStorageView;
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedVertexBufferResource {};
#endif // @header-generator platform

} // namespace dragon
