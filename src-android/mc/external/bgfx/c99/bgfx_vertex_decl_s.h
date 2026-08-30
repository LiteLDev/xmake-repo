#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_vertex_decl_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>        hash;
    ::ll::TypedStorage<2, 2, ushort>      stride;
    ::ll::TypedStorage<2, 38, ushort[19]> offset;
    ::ll::TypedStorage<2, 38, ushort[19]> attributes;
    // NOLINTEND
};
