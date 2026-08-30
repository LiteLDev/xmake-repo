#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct bgfx_allocator_interface_s;
// clang-format on

struct bgfx_allocator_vtbl_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void* (*)(::bgfx_allocator_interface_s*, void*, ulong, ulong, char const*, uint)> realloc;
    // NOLINTEND
};
