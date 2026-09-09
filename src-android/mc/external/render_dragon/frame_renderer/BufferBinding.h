#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Access.h"
#include "mc/external/bgfx/DynamicIndexBufferHandle.h"
#include "mc/external/bgfx/DynamicVertexBufferHandle.h"
#include "mc/external/bgfx/IndexBufferHandle.h"
#include "mc/external/bgfx/IndirectBufferHandle.h"
#include "mc/external/bgfx/ShaderBufferHandle.h"
#include "mc/external/bgfx/UniformHandle.h"
#include "mc/external/bgfx/VertexBufferHandle.h"

namespace dragon::framerenderer::drawcommands {

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

} // namespace dragon::framerenderer::drawcommands
