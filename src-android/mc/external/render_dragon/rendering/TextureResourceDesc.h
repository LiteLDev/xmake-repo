#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"

namespace dragon::rendering {

struct TextureResourceDesc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription> mDesc;
    ::ll::TypedStorage<4, 4, uint>                      mFlags;
    ::ll::TypedStorage<1, 1, bool>                      mIsExternal;
    // NOLINTEND
};

} // namespace dragon::rendering
