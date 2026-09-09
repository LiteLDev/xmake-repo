#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_texture_handle_s.h"

struct bgfx_attachment_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::bgfx_texture_handle_s> handle;
    ::ll::TypedStorage<2, 2, ushort>                  mip;
    ::ll::TypedStorage<2, 2, ushort>                  layer;
    // NOLINTEND
};
