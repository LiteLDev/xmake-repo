#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/TextureHandle.h"

namespace bgfx {

struct Attachment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle> handle;
    ::ll::TypedStorage<2, 2, ushort>                mip;
    ::ll::TypedStorage<2, 2, ushort>                layer;
    // NOLINTEND
};

} // namespace bgfx
