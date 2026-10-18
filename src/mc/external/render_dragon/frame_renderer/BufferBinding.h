#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/bgfx/Access.h"
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/bgfx/IndirectBufferHandle.h"
#include "mc/external/bgfx/ShaderBufferHandle.h"
#include "mc/external/bgfx/UniformHandle.h"
#include "mc/external/bgfx/VertexBufferHandle.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::framerenderer::drawcommands {

#if defined(LL_PLAT_A) // @header-generator platform
struct BufferBinding {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, uchar> mStage;
    ::ll::TypedStorage<4, 8, std::variant<bgfx::IndexBufferHandle, bgfx::VertexBufferHandle, bgfx::DynamicIndexBufferHandle, bgfx::DynamicVertexBufferHandle, bgfx::IndirectBufferHandle, bgfx::ShaderBufferHandle>> mHandle;
    ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle> mSampler;
    ::ll::UntypedStorage<4, 4> mAccess;
    ::ll::TypedStorage<4, 4, uint> mOffset;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct BufferBinding {};
#endif // @header-generator platform

} // namespace dragon::framerenderer::drawcommands
