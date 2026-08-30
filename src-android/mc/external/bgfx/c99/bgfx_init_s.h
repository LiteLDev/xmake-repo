#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_init_limits_s.h"
#include "mc/external/bgfx/c99/bgfx_renderer_type.h"
#include "mc/external/bgfx/c99/bgfx_resolution_s.h"

// auto generated forward declare list
// clang-format off
struct bgfx_allocator_interface_s;
struct bgfx_callback_interface_s;
// clang-format on

struct bgfx_init_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx_renderer_type>          type;
    ::ll::TypedStorage<2, 2, ushort>                        vendorId;
    ::ll::TypedStorage<2, 2, ushort>                        deviceId;
    ::ll::TypedStorage<1, 1, bool>                          debug;
    ::ll::TypedStorage<1, 1, bool>                          profile;
    ::ll::TypedStorage<4, 12, ::bgfx_resolution_s>          resolution;
    ::ll::TypedStorage<4, 16, ::bgfx_init_limits_s>         limits;
    ::ll::TypedStorage<8, 8, ::bgfx_callback_interface_s*>  callback;
    ::ll::TypedStorage<8, 8, ::bgfx_allocator_interface_s*> allocator;
    // NOLINTEND
};
