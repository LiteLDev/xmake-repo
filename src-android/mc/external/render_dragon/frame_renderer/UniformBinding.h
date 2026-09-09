#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/UniformHandle.h"

namespace dragon::framerenderer::drawcommands {

struct UniformBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx::UniformHandle> mHandle;
    ::ll::TypedStorage<8, 8, void const*>           mValue;
    ::ll::TypedStorage<2, 2, ushort>                mNum;
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawcommands
